#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct Node * R;
struct Node * F;


struct Node{
    int data;
    struct Node * next;
};

void queue_traerse(){
    struct Node * ptr = F;
    while(ptr!=NULL){
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

struct Node * push(int value){
    struct Node * new = (struct Node*)malloc(sizeof(struct Node));

    new->data = value;
    R->next = new;
    new->next = NULL;

    return new;
}

struct Node * pop(){
    printf("Poped element: %d\n",F->data);
    struct Node* ptr;
    ptr = F->next;
    free(F);

    return ptr;
}


int main(){
        struct Node * first = (struct Node*)malloc(sizeof(struct Node));
        struct Node * second = (struct Node*)malloc(sizeof(struct Node));
        struct Node * third = (struct Node*)malloc(sizeof(struct Node));
        struct Node * fourth = (struct Node*)malloc(sizeof(struct Node));

        F = first;
        R = fourth;

        first->data=10;
        first->next=second;

        second->data = 12;
        second->next = third;

        third->data = 14;
        third->next = fourth;

        fourth->data = 16;
        fourth->next = NULL;

        printf("Elements before operation: \n");
        queue_traerse();

        printf("Elements after operations: \n");

        R = push(18);
        R = push(20);
        R = push(22);

        F = pop();
        F = pop();
        F = pop();
        queue_traerse();

}