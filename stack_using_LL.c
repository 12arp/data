#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct Node * head;

struct Node{
    int data;
    struct Node * next;
};

void stackTraverse(struct Node * ptr){
    while(ptr!=NULL){
    printf("Element: %d\n", ptr->data);
    ptr = ptr->next;
    }
}

struct Node * push(struct Node * ptr, int value){
    struct Node * new = (struct Node*)malloc(sizeof(struct Node));

    new->data = value;
    new->next = ptr;

    return new;
}

struct Node * pop(struct Node * ptr){
    printf("Poped element: %d\n",ptr->data);
    
    head = ptr->next;
    free(ptr);

    return head;
}

int main(){
        struct Node * first = (struct Node*)malloc(sizeof(struct Node));
        struct Node * second = (struct Node*)malloc(sizeof(struct Node));
        struct Node * third = (struct Node*)malloc(sizeof(struct Node));
        struct Node * fourth = (struct Node*)malloc(sizeof(struct Node));

        head = fourth;

        first->data=10;
        first->next=NULL;

        second->data = 12;
        second->next = first;

        third->data = 14;
        third->next = second;

        fourth->data = 16;
        fourth->next = third;

        printf("Elements before: operation \n");
        stackTraverse(head);

        

        head = pop(head);

        printf("Elements after: operations \n");
        stackTraverse(head);
}