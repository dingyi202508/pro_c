#include <stdio.h>
#include "calc_func.h"

int add_func(int a, int b)
{
  return a+b;
}

int sbc_func(int a,int b)
{
  return a-b;
}

int mpc_func(int a,int b)
{
  return a*b;
}

float dvs_func(float a,float b)
{
  return a/b;
}

void arithmetic_operation(int a, int b, char fuhao)
{
    printf("执行functionD,参数为 %d 和 %d\n", a, b);
    int result1=0;
    float result2=0.0;
    switch (fuhao) {
        case '+':
            result1 = add_func(a,b);
            break;
        case '-':
            result1=sbc_func(a, b);
            break;
        case '*':
            result1=mpc_func(a, b);
            break;
        case '/':
        if(fuhao=='/',b!=0)
            {
                result2 = dvs_func((float) a,(float) b);
            }
           printf("计算结果为：%.6f\n", result2);
            break;
        default:
            printf("无效的运算符\n");
            break;
    }
     if(fuhao != '/')
     {
        printf("计算结果为：%d\n", result1);
     }
}