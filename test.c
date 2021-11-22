#include<stdio.h>

int main()
{
    int a = 10;
    int b = 20;
    a = a ^ b;
    b = a ^ b;
    a = b ^ a;
    printf("a = %d, b = %d", a, b);
    getchar();
    return;
}