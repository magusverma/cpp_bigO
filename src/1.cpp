#include<iostream>
using namespace std;

int main()
{
	long long int i,j,t,n,ans=0,ans2=0;
	cin>>t;
	while(t--){
		cin>>n;
		ans+=1;
		cout<<ans-ans2<<endl;
		ans2 = ans;
	}
	return 0;
}
