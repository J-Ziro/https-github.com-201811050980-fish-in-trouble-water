#include <iostream>
using namespace std;
int main( )
{
	void xinc(int *,int *);
	int i,j;
	printf("请输入两个两位数：");
	scanf("%d%d",&i,&j);
	xinc(&i,&j);
	return 0;
}

void xinc(int *a,int *b)         //形参是引用类型
{
	int as,ag,bs,bg,c;
	as=*a/10;
	ag=*a%10;
	bs=*b/10;
	bg=*b%10;
	c=as*10+ag*1000+bs*1+bg*100;
	printf("输出结果为c=%d\n",c);
}