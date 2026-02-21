#include <stdio.h>

int foo (int a ,int b)
{
    a=a*2;
    b=b*2;

    return a+b;
}

int main()
{
    int a=10;
    int b=20;

    printf("the result of foo is %d\n",foo(a,b));

    return 0;
}