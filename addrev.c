//adding reversed numbers addrev
#include<stdio.h>
int revnum(int n)
{
	int rem=0,rev=0;
	while(n>0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	return rev;
}
int main()
{
	int rev=0,a,b,c,rev1,rev2,rev3,N,j;
	int arr[10000];
	scanf("%d",&N);
	for(j=0;j<N;j++)
	{
	scanf("%d%d",&a,&b);
	rev1=revnum(a);
	rev2=revnum(b);
	c=rev1+rev2;
	rev3=revnum(c);
		arr[j]=rev3;
	}
	
	for(j=0;j<N;j++)
	printf("\n%d",arr[j]);
	return 0;
}
