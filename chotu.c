//http://www.spoj.com/problems/CHOTU/
//mandeep singh @msdeep14
#include<stdio.h>
#include<math.h>
int main()
{
	float t,x,e,y,d;
	scanf("%f",&t);
	while(t--)
	{
		scanf("%f%f",&x,&y);
		//for calculation of e;
		e=sqrt(((x*x)-(y*y))/(x*x));
		d=2*x*e;
		printf("%.3f\n",d);
	}
	return 0;
}
