//���������Զ��庯����Br����������һ�δ�ӡһ�Ρ�Brail, Russia��;  ic(),����һ�δ�ӡһ��"India China"��
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