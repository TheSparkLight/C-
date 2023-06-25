//使用转义序列
#include <stdio.h>
int main(void)
{
    float salary;

    printf("\aEnter your desired monthly salary:");
    printf(" $_______\b\b\b\b\b\b\b");
    
    //getchar();//清除输入缓冲区中的换行符
    scanf("%f", &salary);   //Enter键也被当成输入被scanf函数接收
    printf("\n\t$%.2f a month is $%.2f a year.", salary, salary*12.0);
    printf("\rGee!\n");

    return 0;
}