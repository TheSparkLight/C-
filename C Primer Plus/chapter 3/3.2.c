//要求提示输入一个ASCII码值，然后打印输入的字符。
#include <stdio.h>
int main(void)
{
    int ASCII;
    printf("输入一个ASCII码值：");
    scanf("%d", &ASCII);
    printf("%d ASCII码值对应的字符是 %c\n", ASCII, ASCII);

    return 0;
}