//spoj pro
#include<iostream>
#include<set>
#include<algorithm>
#define ll long long int
using namespace std;
int main(){
	ll days,n,x,res=0;
	multiset<int> m;
	multiset<int>::iterator it1;
	multiset<int>::reverse_iterator it2;
	cin>>days;
	while(days--){
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>x;
			m.insert(x);
		}
		it1=m.begin();
		it2=m.rbegin();
		res+=(*it2-*it1);
		m.erase(--m.end());
		it1=m.begin();
		m.erase(it1);
		}

	cout<<res<<endl;
	return 0;
}
