/*����һ����Ϊone_three�����ĺ������ú�����һ�д�ӡ���ʡ�one�����ڵ��õڶ�������two������Ȼ��������һ�д�ӡ���ʡ�three����two����������һ����ʾ���ʡ�two����
main()�����ڵ���one_three����ǰҪ��ӡ���starting now���������ڵ�����Ϻ���ʾ���done����
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