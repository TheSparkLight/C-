//ʹ��ת������
#include <stdio.h>
int main(void)
{
    float salary;

    printf("\aEnter your desired monthly salary:");
    printf(" $_______\b\b\b\b\b\b\b");
    
    //getchar();//������뻺�����еĻ��з�
    scanf("%f", &salary);   //Enter��Ҳ���������뱻scanf��������
    printf("\n\t$%.2f a month is $%.2f a year.", salary, salary*12.0);
    printf("\rGee!\n");

    return 0;
}