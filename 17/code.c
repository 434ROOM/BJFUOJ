#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	
	int a[10000]={0};
	a[0]=1;

	int x,y,base,carry;
	for(x=1;x<=n;x++){
		carry=0;
		for(y=0;y<10000;y++){
			base=a[y]*x+carry;
			a[y]=base%10;
			carry=base/10;
		}
	}

	for(x=9999;x>=0;x--){
		if(a[x]>0)
			break;
	}

	for(y=x;y>=0;y--)
		printf("%d",a[y]);

	return 0;
}
