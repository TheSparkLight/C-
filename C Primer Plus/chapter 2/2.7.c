//编写一个程序，生成以下格式输出：
/*Smile!Smile!Smile!
  Smile!Smile!  
  Smile!
  该程序定义一个函数，该函数调用一次打印一次Smile！*/

#include <stdio.h>
void Smile(void);

int main()
{
    Smile();
    Smile();
    Smile();
    printf("\n");
    Smile();
    Smile();
    printf("\n");
    Smile();

    return 0;
}

void Smile(void)
{
    printf("Smile!");
}