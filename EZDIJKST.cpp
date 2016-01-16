//http://www.spoj.com/problems/EZDIJKST/
//mandeep singh @msdeep14
#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
struct vec
{
	int wt;
	int src;
	int dest;
	int track;
};

class dijshktra
{
	vector <vector <vec> > g;
	public:
	void creategraph(int v);
	void calpathcost(int strtver,int v,int endver);
};
void dijshktra :: creategraph(int v)
{
	int src,m,dest,ch,cost;
	g.resize(v+1);
	cin>>m;
	vec temp;
	while(m--)
	{
		cin>>src>>dest>>cost;
		temp.dest=dest;
		temp.src=src;
		temp.wt=cost;
		temp.track=INT_MAX;
		g[src].push_back(temp);
	}
}

int check(int visited[], int i)
{
	int flag;
	if(i==visited[i])
		flag=0;
	else
		flag=1;
	return flag;
}

void dijshktra :: calpathcost(int strtver,int v,int endver)
{
	int mindis[3000];
	int store[3000];
	int visited[3000];
	int i,j,newvertex;
	int temp=strtver;
	visited[strtver]=strtver;
	for(i=0;i<=v;i++)
	{
		store[i]=0;
	}
	for(i=0;i<=v;i++)
	{
		mindis[i]=INT_MAX;
		visited[i]=INT_MAX;
	}
	int x=0;
	mindis[strtver]=0;
	int mark=0;
	while(mark<(v))
	{
		for(i=0;i<g[strtver].size() ;i++)
		{
			if(mindis[g[strtver][i].dest]>(g[strtver][i].wt + x)&& check(visited,g[strtver][i].dest))
			{
				mindis[g[strtver][i].dest]=g[strtver][i].wt + x;
			}
		}
		int min=INT_MAX;
		for(j=1;j<=v;j++)
		{
			if(min>mindis[j] && j!=strtver && check(visited,j))
			{
				min=mindis[j];
				newvertex=j;
			}
		}
		visited[newvertex]=newvertex;
		store[temp]=mindis[newvertex];
		x=min;
		temp=strtver;
		strtver=newvertex;
		mark++;
	}
		if(mindis[endver]==INT_MAX)
			cout<<"NO\n";
		else
		cout<<mindis[endver]<<endl;
	g.clear();
	
}

int main()
{
	int n,m,t;
	int strtver,v,endver;
	dijshktra dj;
	cin>>t;
	while(t--)
	{
	cin>>v;
	dj.creategraph(v);
	//cout<<"enter the starting vertex: "<<endl;
	cin>>strtver>>endver;
	dj.calpathcost(strtver,v,endver);
	}
}
