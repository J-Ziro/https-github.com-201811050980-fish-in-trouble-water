#include <stdio.h>
#define MaxSize 8
void king(int m,int n)
{
    int p[MaxSize];
    int i,j,t;
    for (i=0; i<m; i++)        //构建初始序列，记录m只猴子在圈中
		p[i]=1;
	t=-1;        //首次报数将从起始位置为0，即第1只猴子开始，因为在使用p[t]前t要加1
    printf("出列顺序:");
    for (i=1; i<=m; i++)        //循环要执行m次，有m个猴子要出列
    {
        j=1;        // j:报数
        while(j<=n)        
        {
            t=(t+1)%m;        //查看下一只猴子，当到达最后时要折返，所以用%m表示
            if (p[t]==1) j++;         //当q猴子在圈中，这个位置才报数
        }
        p[t]=0;        //猴子出列
        printf("%d ",t+1);        //输出出列猴子的编号
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