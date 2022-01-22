#include <stdio.h>
#include <stdlib.h>
struct queue
{
    int size;
    int f;
    int r;
    int *arr;
};
int isFull(struct queue *q)
{
    if (q->r == q->size - 1)
    {
        return 1;
    }
    return 0;
}
int isEmpty(struct queue *q)
{
    if (q->r == q->f)
    {
        return 1;
    }
    return 0;
}
void enqueue(struct queue *q,int val){
    if(isFull(q)){
        printf("queue is full cannot insert element");
    }
    else{
        q->r++;
        q->arr[q->r]=val;
    }
}
int dequeue(struct queue *q){
    int a=-1;
    if(isEmpty(q)){
        printf("queue is empty");
    }
    else{
         q->f++;
         a = q->arr[q->f];
    }
    return a;
}
/*
void print(struct queue *q){

}*/

int main()
{
    struct queue q;
    q.size = 100;
    q.f = q.r = -1;
    q.arr = (int *)malloc(q.size * sizeof(int));
    enqueue(&q,10);
    enqueue(&q,40);
    enqueue(&q,50);

    printf("element after deleting in queue is %d",dequeue(&q));
    if(isEmpty(&q)){
        printf("Queue is empty");
    }
    if(isFull(&q)){
        printf("Queue is full");
    }

    return 0;
}