#include <stdio.h>
#include "func.h"
void functionB(int a, int b)
{
    printf("执行前%s,参数为 %d 和 %d\n",__func__, a, b);
    int temp;
    temp = a;
    a = b;
    b = temp;

    printf("执行后 %s,参数为 %d 和 %d\n",__func__, a, b);
}

void functionC(int* a, int* b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    printf("执行functionC,参数为 %d 和 %d\n", *a, *b);
}

void func_test(int a,int b)
{
  functionB(a,b);
}