#include <stdio.h>
void fun(int a,int b)
{
	int as,ag,bs,bg,c;
	as=a/10;        //a��ʮλ
	ag=a%10;        //a�ĸ�λ
	bs=b/10;        //b��ʮλ
	bg=b%10;        //b�ĸ�λ
	c=as*10+ag*1000+bs*1+bg*100;        //c����˳��:bg��ag��as��bs 
	printf("������Ϊc=%d\n",c);
}
void main()
{
	int a,b;
	printf("������������λ����");
	scanf("%d%d",&a,&b);
	fun(a,b);
}