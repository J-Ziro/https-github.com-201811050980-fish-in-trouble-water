#include <stdio.h>
void fun(int a,int b)
{
	int as,ag,bs,bg,c;
	as=a/10;        //a的十位
	ag=a%10;        //a的个位
	bs=b/10;        //b的十位
	bg=b%10;        //b的个位
	c=as*10+ag*1000+bs*1+bg*100;        //c数字顺序:bg、ag、as、bs 
	printf("输出结果为c=%d\n",c);
}
void main()
{
	int a,b;
	printf("请输入两个两位数：");
	scanf("%d%d",&a,&b);
	fun(a,b);
}