#include <stdio.h>

/* 使用 #define 预处理器定义常量 */
#define LENGTH 10
#define WIDTH  5
#define NEWLINE '\n'
int count ;
int max(int num1, int num2);

void write_extern(void)
{
    printf("count is %d\n", count);
}

int main() {
    /* 我的第一个 C 程序 */

    /* 声明变量 */
    int a, b;    /* 一次声明多个变量，用逗号分隔 */
    int c;
    float f;
    char *d = "abcd";

    /* 给变量赋值 */
    a = 10;
    b = 20;
    c = a + b;

    printf("value of c : %d \n", c);
    f = 70.0/3.0;
    printf("value of f : %.1f \n", f);

    printf("Hello, World!\n");
    printf("Storage size for int : %d \n", sizeof(int));
    printf("Storage size for float : %d \n", sizeof(float));

    count = 5;
    write_extern();

    printf("%s \n", d);
    printf("%sd \n", d);

    return 0;
}

/* 函数返回两个数中较大的那个数 */
int max(int num1, int num2)
{
    /* 局部变量声明 */
    int result;

    if (num1 > num2)
        result = num1;
    else
        result = num2;

    return result;
}