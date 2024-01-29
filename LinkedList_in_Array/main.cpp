#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <stack>
using namespace std;
struct Node{
    int data;
    struct Node *link;
};
stack<struct Node> s;


void Print(struct Node* head){
    struct Node* temp=(struct Node*)malloc(sizeof(struct Node*));
    temp=head;
    while (temp){
        printf("%d  ",temp->data);
        temp=temp->link;
    }
    printf("\n");
}



struct Node* Push(int x,struct Node* head){
    struct Node* temp=(struct Node*) malloc(sizeof (struct Node*));
    temp->data=x;
    temp->link=NULL;
    temp->link=head;
    head=temp;
    return head;
}

struct Node* Pop(struct Node* head){
    struct Node* temp;
    int value;
    temp=head;
    head=head->link;
    return temp;
}
int main() {
    int data;
    struct Node* temp;
    struct Node* head=NULL;
    struct Node* head2=NULL;
    struct Node* head3=NULL;
    head=Push(1,head);
    head=Push(2,head);
    head=Push(3,head);
    temp=Pop(head);
    head=temp->link;
    head2= Push(temp->data,head2);
    temp=Pop(head);
    head=temp->link;
    head2= Push(temp->data,head2);
    Print(head);
    Print(head2);
    return 0;
}
