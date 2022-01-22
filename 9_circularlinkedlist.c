#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void linkedlisttraversal(struct Node *head){
    struct Node *ptr = head;
    do{
        printf("the given linked list is %d\n",ptr->data);
        ptr=ptr->next;
    }while(ptr!=head);
}
struct Node *insertionatfirst(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data=data;
    struct Node *p=head->next;
    while(p->next!=head){
        p=p->next;
    }
    ptr->next=head;
    p->next=ptr;
    head=ptr;
    return head;
}
int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 7;
    head->next = second;

    second->data = 8;
    second->next = third;

    third->data = 9;
    third->next = fourth;

    fourth->data=10;
    fourth->next=head;

    linkedlisttraversal(head);
    printf("Linked list after insertion\n");
    head = insertionatfirst(head,5);
    
    linkedlisttraversal(head);

    return 0;
}