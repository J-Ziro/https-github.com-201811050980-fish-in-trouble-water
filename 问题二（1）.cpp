#include <stdio.h>
#define MaxSize 8
void king(int m,int n)
{
    int p[MaxSize];
    int i,j,t;
    for (i=0; i<m; i++)        //������ʼ���У���¼mֻ������Ȧ��
		p[i]=1;
	t=-1;        //�״α���������ʼλ��Ϊ0������1ֻ���ӿ�ʼ����Ϊ��ʹ��p[t]ǰtҪ��1
    printf("����˳��:");
    for (i=1; i<=m; i++)        //ѭ��Ҫִ��m�Σ���m������Ҫ����
    {
        j=1;        // j:����
        while(j<=n)        
        {
            t=(t+1)%m;        //�鿴��һֻ���ӣ����������ʱҪ�۷���������%m��ʾ
            if (p[t]==1) j++;         //��q������Ȧ�У����λ�òű���
        }
        p[t]=0;        //���ӳ���
        printf("%d ",t+1);        //������к��ӵı��
    }
    printf("\n");
}

int main()
{
    int m,n;
    scanf("%d %d", &m, &n);
    king(m,n);
    return 0;
}