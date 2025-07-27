#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// #include "calc_func.h"

void functionA(int a, int b);
void functionB(int a, int b);
void functionC(int a, int b);
void arithmetic_operation(int a, int b, char fuhao);
void (*functionArray[4])(int a, int b) = {
    functionA, 
    functionB,
    functionC,
};

void functionA(int a, int b)
{
     a = rand() % 9 + 1;
     b = rand() % 9 + 1;
     printf("执行functionA，参数为 %d 和 %d\n", a, b);
   int sum = a + b;
   int answer;
   int count = 0;
   int useranswer;
   int stars;
   scanf("%d", &answer);
   printf("functionA，返回值为 %d\n", sum);
   scanf("%c", &stars);
        if (stars != 'q') {
            printf("输入字母'q'开始游戏");
            for (int i = 1; i <= 10; i++) {

                a = rand() % 9 + 1;
                b = rand() % 9 + 1;
                answer = a + b;

            printf("第%d题: %d + %d = ?\n", i, a, b);
            scanf("%d", &useranswer);
            printf("answer=%d \n",answer);
            printf("answer=%d,useranswer=%d\n",
            answer,useranswer);
            if(useranswer!=answer)


            {printf("回答错误，游戏结束\n");
            break;}

                if (useranswer == answer) {
                    printf("回答正确！\n");
                    count++;
                } 
                else {
                    printf("回答错误，正确答案是 %d\n", answer);
                } printf("变量'answer'存储占用了%zu字节\n", sizeof(answer));
            }

            printf("你答对了 %d 道题\n", count);
        
        }else
        {
            printf("system exit\n");
            exit(0);
        }
}
void functionB(int a, int b)
{
    printf("执行%s，参数为 %d 和 %d\n",__func__, a, b);
}

void functionC(int a, int b)
{
    printf("执行functionC，参数为 %d 和 %d\n", a, b);
}

void arithmetic_operation(int a, int b, char fuhao)
{
    printf("执行functionD，参数为 %d 和 %d\n", a, b);
    int result1=0;
    float result2=0.0;
    switch (fuhao) {
        case '+':
            // result1 = add_func(a,b);
            result1 = a + b;
            break;
        case '-':
            result1 = a - b;
            break;
        case '*':
            result1 = a * b;
            break;
        case '/':
        if(fuhao=='/',b!=0)
            {
                result2 = (float)a / (float)b;
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
int main() {
    char stars;
    int a, b, answer, useranswer,d;
    int count = 0;
    char command;
    char fuhao;
    
    while(1){
        printf("请输入命令:(a,b,c，d)");
        scanf(" %c", &command);
        switch (command) {
            case 'a':
                functionArray[0](a, b);
                break;
            case 'b':
                functionArray[1](a, b);
                break;
            case 'c':
                functionArray[2](a, b);
                break;
            case 'd':
                printf("请输入两个整数和一个运算符（+、-、*、/）：\n");
                scanf("%d %c %d", &a, &fuhao, &b);
                printf("执行functionD，传入参数为 %d 和 %d\n", a, b);
                arithmetic_operation(a, b, fuhao);
                break;
            case 'q':
                printf("退出程序\n");
                exit(0);
                break;
              default:
                printf("无效命令\n");
                break;  
        }
    }
    return 0;
}
