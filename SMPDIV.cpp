//mandeep singh @msdeep14
//spoj 	SMPDIV divisibility
#include<iostream>
using namespace std;
int main()
{
	int t,n,x,y,i,j;
	cin>>t;
	while(t--)
	{
		cin>>n>>x>>y;
		for(i=x;i<n;i++)
		{
			if(i%x==0 && i%y!=0)
			{
				cout<<i<<" ";
			}
		}
		cout<<endl;
	}
}
