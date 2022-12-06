#include <stdio.h>
void exchange(int *, int *); //declare a function that have 2 integers as parameters and without returning value
int main() {
    int x=10,y=20;
    printf("before exchange :\n");
    printf("x=%d\ty=%d\n",x,y);
    exchange(&x,&y);
    printf("after exchange :\n");
    printf("x=%d\ty=%d\n",x,y);
    return 0;
}
void exchange(int *x, int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
