//调用两个自定义函数，jolly（）打印前3行，调用一次打印一次；deny（）打印最后一条信息。
#include <stdio.h>
void jolly(void);
void deny(void);

int main(void)
{
    jolly();
    jolly();
    jolly();
    deny();

    return 0;
}

void jolly(void)
{
    printf("For he's a jolly good fellow!\n");
}

void deny (void)
{
    printf("Which nobody can deny!\n");
}