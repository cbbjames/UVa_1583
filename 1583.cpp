
#include<stdio.h>
#include<string.h>
int a[1000001];

int main()
{
	memset(a, 0, sizeof(a));
	int i=1,n2=0;
	while(n2<=100000)
	{
		n2=i+i/10+i/100+i/1000+i/10000+i/100000;
		a[n2]=i++;	
	}	
	/*for(int i=0;i<1000001;i++)
		printf("%d ",a[i]);
	printf("\n");
	*/
	int n;
	while(scanf("%d",&n)==1)	
		printf("%d\n",a[n]);
	
	return 0;
}