//一个水分子的质量约有3.156*10^-23g。一夸脱水大约950g。编写一个程序，提示用户输入水的夸脱数，并显示水分子的数量。
#include <stdio.h>
int main(void)
{
    int quart;
    float water;

    printf("输入水的夸脱数：");
    scanf("%d",&quart);
    water = quart*950/3.0e-23;
    printf("水分子的数量是%d个", water);

    return 0;
}