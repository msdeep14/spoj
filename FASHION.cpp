//http://www.spoj.com/problems/FASHION/
//mandeep singh @msdeep14
#include<iostream>
void insertion(int a[], int s)
{
    int i, j;
    int current;

    for(i = 1; i< s; i++)
    {
        current = a[i];
        for(j = i-1; j>=0; j--)
        {
            if(current < a[j])
                a[j+1] = a[j];
            else
                break;
        }
        a[j+1] = current;
    }
}

int main()
{
	int i,j,t,n,sum=0;
	int arr[1001];
	int brr[1001];
	std::cin>>t;
	while(t--)
	{
		sum=0;
		std::cin>>n;
		for(i=0;i<n;i++)
		{
			std::cin>>arr[i];
		}
		for(i=0;i<n;i++)
		{
			std::cin>>brr[i];
		}
		insertion(arr,n);
		insertion(brr,n);
		for(i=0;i<n;i++)
		{
			sum=sum+arr[i]*brr[i];
		}
		std::cout<<sum;
		std::cout<<"\n";
	}
	return 0;
}
