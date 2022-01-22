#include<stdio.h>
int linearsearch(int arr[],int size,int element){
for(int i=0;i<size;i++){
    if(arr[i]==element)
    return i;
}
return -1;
}


int main(){
    int arr[]={1,2,34,56,34,26,27,39,45,79};
    int size = sizeof(arr)/sizeof(int);
    int element = 56;
    int searchindex = linearsearch(arr,size,element);
    printf("The given element is %d is at a index of %d",element,searchindex);
    return 0;
}