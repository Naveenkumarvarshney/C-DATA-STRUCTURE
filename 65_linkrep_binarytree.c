#include<stdio.h>
#include<malloc.h>
struct Node{
    int data;
    struct Node*left;
    struct Node*right;
};
struct Node* createNode(int data){
struct Node *n;     //creting a node pointer //
n=(struct Node*)malloc(sizeof(struct Node));     // Alocatting memory in the heap//
n->data=data;
n->left=NULL;
n->right=NULL;
return n;
}
 int main(){
struct Node *p=createNode(4);
struct Node *p1=createNode(5);
struct Node *p2=createNode(10);
p->left=p1;
p->right=p2;

    return 0;
}