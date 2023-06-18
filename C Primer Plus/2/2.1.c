//调用一次打印函数，把名和姓打印在一行。在调用一次打印函数，把名和姓打印在两行。然后在调用两次打印函数，把名字打印在一行。
#include <stdio.h>
int main(void)
{
    printf("Gustav Mahler\n");
    printf("Gustav\nMahler\n");
    printf("Gustav ");
    printf("Mahler\n");
    return 0;
}