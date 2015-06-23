//http://www.spoj.com/problems/FIBOSUM/
//other related problems are;
////http://www.spoj.com/problems/FIBTWIST/
//http://www.spoj.com/problems/BUILDTOW/
//mandeep singh @msdeep14
#include <stdio.h>
#include<math.h>
#include<stdlib.h>
 
void multiply(long long int F[2][2], long long int M[2][2]);
 
void power(long long int F[2][2],long long int n);
 
// function that returns nth Fibonacci number 
int fib(long long int n)
{
 long long  int F[2][2] = {{1,1},{1,0}};
  if (n == 0)
    return 0;
  power(F, n-1);
  return F[0][0];
}
 
void power(long long int F[2][2],long long int n)
{
  if( n == 0 || n == 1)
      return;
 long long int M[2][2] = {{1,1},{1,0}};
 
  power(F, n/2);
  multiply(F, F);
 
  if (n%2 != 0)
     multiply(F, M);
}
 
void multiply(long long int F[2][2],long long int M[2][2])
{
  long long  int x =  ((F[0][0]%1000000007)*(M[0][0]%1000000007))%1000000007 + ((F[0][1]%1000000007)*(M[1][0]%1000000007))%1000000007;
  long long int y =  ((F[0][0]%1000000007)*(M[0][1]%1000000007))%1000000007 + ((F[0][1]%1000000007)*(M[1][1]%1000000007))%1000000007;
  long long int z =  ((F[1][0]%1000000007)*(M[0][0]%1000000007))%1000000007 + ((F[1][1]%1000000007)*(M[1][0]%1000000007))%1000000007;
  long long int w =  ((F[1][0]%1000000007)*(M[0][1]%1000000007))%1000000007 + ((F[1][1]%1000000007)*(M[1][1]%1000000007))%1000000007;
 
  F[0][0] = x;
  F[0][1] = y;
  F[1][0] = z;
  F[1][1] = w;
}
int main()
{
 long long int n,t,sum=0,i,m,x,y,temp;
  scanf("%lld",&t);
  while(t--)
  {
	  sum=0;
	  scanf("%lld%lld",&n,&m);
	 
	  x=fib(m+2);
	  y=fib(n+1);
	  sum=(x-y)%1000000007;
	  if(sum<0)
	  { 
            sum=sum+1000000007;
			printf("%lld\n",(sum));
	  }
	  else 
		  printf("%lld\n",sum);
  }
  return 0;
}
