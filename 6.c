#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node*next;
    struct Node*pre;
};
struct Node*createNode(){
    struct Node*newnode=(struct Node*)malloc(sizeof (struct Node));
    printf("enter the data:");
    scanf("%d",&newnode->data);
    newnode->pre = NULL;
    newnode->next =NULL;
    return newnode;


}
void createDoublyLinkedList(struct Node**start){
    struct Node*ptr=NULL;
    int n;
    printf("enter the size of doublylinkedlist");
    scanf("%d",&n);
    printf("\n: create a doubly linked list:-\n");
    for(int i=0;i<n;i++){
        struct Node*newNode=createNode();
        if(i==0){
            *start=newNode;
            ptr=*start;
        }
        else{
            ptr->next=newNode;
            newNode->pre=ptr;
            ptr=newNode;
        }
    }
}
void printAddress(struct Node*ptr){
    printf("\nstart=%p", (void*)ptr);
    printf("\nprint a address of doubly linked list:");
    while(ptr!=NULL){
        printf("|%p|<-->", (void*)ptr);
        ptr=ptr->next;
    }
}

void print(struct Node *ptr){
    struct Node *ptr1=NULL;
    ptr1=ptr;
    printAddress(ptr1);
    printf("\n display doubly linkedlist:");
    while(ptr1!=NULL){
        printf("|%p|", (void*)ptr1->pre);
        printf("|%d|", ptr1->data);
        printf("|%p|", (void*)ptr1->next);
        ptr1=ptr1->next;
    }
}

int main(){
struct Node*start=NULL;
createDoublyLinkedList(&start);
printf("\nStart=%p\n", (void*)start);
print(start);
return 0;
}