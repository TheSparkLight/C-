//调用两个自定义函数：Br（），调用一次打印一次“Brail, Russia”;  ic(),调用一次打印一次"India China"。
#include <stdio.h>
void br(void);
void ic(void);

int main(void)
{
    br();
    printf(", ");
    ic();
    printf("\n");
    ic();
    printf(",\n");
    br();
    
    return 0;
}

void br(void)
{
    printf("Brazil, Russia");
}

void ic(void)
{
    printf("India, China");
}