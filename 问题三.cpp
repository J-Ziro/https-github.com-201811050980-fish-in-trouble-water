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
        scanf("%d%d%d",&y,&s,&w);        //���ܷ�
        idx[i]=i;        //������
        stu[i].i=i+1;        //ѧ����ţ���ѧ������1,2,3����
        stu[i].y=y;        //���ĳɼ�
        stu[i].z=y;
        stu[i].z+=s;
        stu[i].z+=w;        //�ܷ�
    }
    bs(stu,idx,n);        //ʹ��ð�ݷ���������
    for(i=n-1;i>=n-5;i--)
        printf("%d %d\n",stu[idx[i]].i,stu[idx[i]].z);  //���ʵ���ѧ���ɼ�����
}
void bs(Stu a[],int pa[],int n)
{
    int i,j,t,change=1;
    for(i=n-1;i>=n-5&&change;--i)
	{
        change=0;
        for(j=0;j<i;++j)
		{
            if(a[pa[j]].z>a[pa[j+1]].z)        //�ָܷߵ��ų���
			{                
                t=pa[j];
                pa[j]=pa[j+1];
                pa[j+1]=t;
                change=1;
            }else if(a[pa[j]].z==a[pa[j+1]].z)        //���ܷ����
			{         
                if(a[pa[j]].y>a[pa[j+1]].y)        //���ĳɼ��õ��ų���
				{            
                    t=pa[j];
                    pa[j]=pa[j+1];
                    pa[j+1]=t;
                    change=1;
                }
				else if(a[pa[j]].y==a[pa[j+1]].y)        //�����ķ�Ҳ���
				{     
                    if(a[pa[j]].i<a[pa[j+1]].i)        //ѧ��С���ų���
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