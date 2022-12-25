#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void linkedlistTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element:%d\n", ptr->data);
        ptr = ptr->next;
    }
}

// case1: Deleting the first element in the linklist
struct Node *deletefirst(struct Node *head)
{
    struct Node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}
// case2: Deleting the element at the give index in linklist
struct Node * deleteAtindex(struct Node *head, int index)
{
    struct Node *p = head;
    struct Node *q = head->next;
    for (int i = 0; i < index - 1; i++)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    return head;
}


// case3: Deleting the element from the last in linklist
struct Node * deleteAtlast(struct Node *head)
{
    struct Node *p = head;
    struct Node *q = head->next;
    while(q->next!=NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);
    return head;
}


// case4: Deleting the element with the given value in linklist
struct Node * deleteAtIndex(struct Node *head, int value)
{
    struct Node *p = head;
    struct Node *q = head->next;
    while(q->data!=value && q->next!=NULL)
    {
        p = p->next;
        q = q->next;
    }
   if(q->data == value){
    p->next = q->next;
    free(q);
   }
    return head;
}
int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    // Allocate memory for nodes in the linkedlist in Heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    // Link first and second nodes
    head->data = 7;
    head->next = second;
    // Link second and third nodes
    second->data = 11;
    second->next = third;

    // Terminate the link list at the third node
    third->data = 55;
    third->next = NULL;
    printf("Linkedlist before deletion\n");
    linkedlistTraversal(head);
    //head = deletefirst(head);
    //head = deleteAtindex(head,2);
    //head = deleteAtlast(head);
    head = deleteAtIndex(head, 11);
    printf("\nLinkedlist after deletion\n");
    linkedlistTraversal(head);
    return 0;
}
