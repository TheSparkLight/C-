//һ��ˮ���ӵ�����Լ��3.156*10^-23g��һ����ˮ��Լ950g����дһ��������ʾ�û�����ˮ�Ŀ�����������ʾˮ���ӵ�������
#include <stdio.h>
int main(void)
{
    int quart;
    float water;

    printf("����ˮ�Ŀ�������");
    scanf("%d",&quart);
    water = quart*950/3.0e-23;
    printf("ˮ���ӵ�������%d��", water);

    return 0;
}