#include<stdio.h>
typedef struct SStu
{
	int i;
    int y;
    int z;
}Stu;
int main()
{
    void bs(Stu [],int [],int);
    Stu stu[301];
    int y,s,w,i,n,idx[301];
    scanf("%d",&n);
    for(i=0;i<n;i++)
	{
        scanf("%d%d%d",&y,&s,&w);        //求总分
        idx[i]=i;        //建索引
        stu[i].i=i+1;        //学生序号，按学号输入1,2,3……
        stu[i].y=y;        //语文成绩
        stu[i].z=y;
        stu[i].z+=s;
        stu[i].z+=w;        //总分
    }
    bs(stu,idx,n);        //使用冒泡法进行排序
    for(i=n-1;i>=n-5;i--)
        printf("%d %d\n",stu[idx[i]].i,stu[idx[i]].z);  //访问调用学生成绩数组
}
void bs(Stu a[],int pa[],int n)
{
    int i,j,t,change=1;
    for(i=n-1;i>=n-5&&change;--i)
	{
        change=0;
        for(j=0;j<i;++j)
		{
            if(a[pa[j]].z>a[pa[j+1]].z)        //总分高的排朝后
			{                
                t=pa[j];
                pa[j]=pa[j+1];
                pa[j+1]=t;
                change=1;
            }else if(a[pa[j]].z==a[pa[j+1]].z)        //若总分相等
			{         
                if(a[pa[j]].y>a[pa[j+1]].y)        //语文成绩好的排朝后
				{            
                    t=pa[j];
                    pa[j]=pa[j+1];
                    pa[j+1]=t;
                    change=1;
                }
				else if(a[pa[j]].y==a[pa[j+1]].y)        //若语文分也相等
				{     
                    if(a[pa[j]].i<a[pa[j+1]].i)        //学号小的排朝后
					{        
                        t=pa[j];
                        pa[j]=pa[j+1];
                        pa[j+1]=t;
                        change=1;
                    }
                }
            }
        }
    }
}