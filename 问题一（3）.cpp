#include <iostream>
using namespace std;
int main( )
{
	void xinc(int *,int *);
	int i,j;
	printf("������������λ����");
	scanf("%d%d",&i,&j);
	xinc(&i,&j);
	return 0;
}

void xinc(int *a,int *b)         //�β�����������
{
	int as,ag,bs,bg,c;
	as=*a/10;
	ag=*a%10;
	bs=*b/10;
	bg=*b%10;
	c=as*10+ag*1000+bs*1+bg*100;
	printf("������Ϊc=%d\n",c);
}