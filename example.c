#include <stdio.h>
#include<stdlib.h>

struct employee {
    int code;
    float salary;

};
int main(){
struct employee e1;
struct employee *ptr;
ptr = &e1;
(*ptr).code= 500;
(*ptr).salary=5000;

printf("%d\n",e1);
printf("%d\n",e1);

    return 0;
}