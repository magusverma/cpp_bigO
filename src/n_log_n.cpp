#include<iostream>
using namespace std;

int main()
{
	long long int i,j,t,n,ans=0,ans2=0;
	cin>>t;
	// cout<<t<<endl;
	while(t--){
			cin>>n;
			// cout<<n<<endl;
			for(i=0;i<n;i++){
				for(j=1;j<=n;j*=2){
					ans+=1;
				}
			}
		cout<<ans-ans2<<endl;
		ans2 = ans;
	}
	return 0;
}
