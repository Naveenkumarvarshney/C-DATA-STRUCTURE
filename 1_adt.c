#include <stdio.h>
#include <stdlib.h>

struct Myarray
{
    int used_sized;
    int total_sized;
    int *ptr;
};
void createarray(struct Myarray *a, int tsize, int usize)
{
    (*a).used_sized = usize;  
    (*a).total_sized = tsize;
    (*a).ptr = (int *)malloc(tsize * sizeof(int));
}
void show(struct Myarray *a)
{
    for (int i = 0; i < (*a).used_sized; i++)
    {
        printf("%d\n", (*a).ptr[i]);
    }
}
void Setval(struct Myarray *a)
{
    int n;
    for (int i = 0; i < (*a).used_sized; i++)
    {
        printf("Enter element %d : ", i);
        scanf("%d", &n);
        (*a).ptr[i] = n;
    }
}
int main()
{
struct Myarray marks ;
createarray(&marks,10,3);

Setval(&marks);
show(&marks);


    return 0;
}