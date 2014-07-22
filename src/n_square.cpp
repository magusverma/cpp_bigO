#include<iostream>
using namespace std;

int main()
{
	long long int i,j,t,n,ans=0,ans2=0;
	cin>>t;
	while(t--){
			cin>>n;
			for(i=0;i<n;i++){
				for(j=0;j<n;j++){
					ans+=1;
				}
			}
		cout<<ans-ans2<<endl;
		ans2 = ans;
	}
	return 0;
}
