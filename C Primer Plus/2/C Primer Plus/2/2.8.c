/*调用一个名为one_three（）的函数。该函数在一行打印单词“one”，在调用第二个函数two（），然后在另外一行打印单词“three”。two（）函数在一行显示单词“two”。
main()函数在调用one_three（）前要打印短语“starting now：”，并在调用完毕后显示短语“done！”
starting now:
one
two
three
done!*/

#include <stdio.h>
void one_three (void);
void two (void);

int main()
{
    printf("starting now:\n");
    one_three();
    printf("done!\n");

    return 0;
}

void one_three()
{
    printf("one\n");
    two();
    printf("three\n");
}

void two()
{
    printf("two\n");
}