#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int a[10]/*���ڱ���10�������������*/, i;
    srand((unsigned int)time(NULL));//���õ�ǰʱ��Ϊ����
    for (i = 0; i < 10; ++i)
    {
        a[i] = rand()%100+1;//����1~100�������
    }
//��ӡ���ɵ������
    for (i = 0; i < 10; ++i)
    {
        printf ("%d ", a[i]);
    }
    printf ("\n");
    return 0;
}
