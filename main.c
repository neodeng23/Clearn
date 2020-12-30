#include <stdio.h>

/* 使用 #define 预处理器定义常量 */
#define LENGTH 10
#define WIDTH  5
#define NEWLINE '\n'
int count ;

void write_extern(void)
{
    printf("count is %d\n", count);
}


int main() {
    /* 我的第一个 C 程序 */

    /* 变量定义 */
    int a, b;
    int c;
    float f;

    /* 实际初始化 */
    a = 10;
    b = 20;

    c = a + b;
    printf("value of c : %d \n", c);
    f = 70.0/3.0;
    printf("value of f : %f \n", f);

    printf("Hello, World!\n");
    printf("Storage size for int : %d \n", sizeof(int));
    printf("Storage size for float : %d \n", sizeof(float));

    count = 5;
    write_extern();

    return 0;
}
