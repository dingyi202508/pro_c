#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "calc_func.h"
#include "func.h"

// void functionB(int a, int b);
// void arithmetic_operation(int a, int b, char fuhao);
// void (*functionArray[4])(int a, int b) = {
//     functionB,
// };


// void functionB(int a, int b)
// {
//     printf("执行%s,参数为 %d 和 %d\n",__func__, a, b);
// }

// void functionC(int a, int b)
// {
//     printf("执行functionC,参数为 %d 和 %d\n", a, b);
// }

int main() {
    char stars;
    int a, b, answer, c, d , useranswer;
    char command;
    char fuhao;
    
    while(1){
        printf("请输入命令:(b,d)");
        scanf(" %c", &command);
        switch (command) {
            case 'b':
                printf("请输入a,b\n");
                scanf("%d,%d",&a,&b);
                functionB(a, b);
                printf("a=%d,b=%d\n",a,b);
                functionC(&a,&b);
                printf("func a=%d,b=%d\n",a,b);
                break;
            case 'd':
                printf("请输入两个整数和一个运算符（+、-、*、/）:\n");
                scanf("%d %c %d", &a, &fuhao, &b);
                printf("执行functionD,传入参数为 %d 和 %d\n", a, b);
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
