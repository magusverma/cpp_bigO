#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<vector>
#include <time.h>
#include <algorithm>
#include <set>
#include <queue>          // std::priority_queue
#include <functional>
#include <math.h>

using namespace std;
#define ll long long int
#define vll vector<long long int>
// Input macros
#define s(n)                        scanf("%d",&n)
#define sc(n)                       scanf("%c",&n)
#define sl(n)                       scanf("%lld",&n)
#define sf(n)                       scanf("%lf",&n)
#define ss(n)                       scanf("%s",n)

// Useful constants
#define INF                         (int)1e9
#define EPS                         1e-9

// Useful hardware instructions
#define bitcount                    __builtin_popcount
#define gcd                         __gcd

// Useful container manipulation / traversal macros
#define forall(i,a,b)               for(int i=a;i<b;i++)
#define foreach(v, c)               for( typeof( (c).begin()) v = (c).begin();  v != (c).end(); ++v)
#define all(a)                      a.begin(), a.end()
#define in(a,b)                     ( (b).find(a) != (b).end())
#define pb                          push_back
#define fill(a,v)                    memset(a, v, sizeof a)
#define sz(a)                       ((int)(a.size()))
#define mp                          make_pair

// Some common useful functions
#define maX(a,b)                     ( (a) > (b) ? (a) : (b))
#define miN(a,b)                     ( (a) < (b) ? (a) : (b))
#define checkbit(n,b)                ( (n >> b) & 1)
#define DREP(a)                      sort(all(a)); a.erase(unique(all(a)),a.end())
#define INDEX(arr,ind)               (lower_bound(all(arr),ind)-arr.begin())
#define getcx getchar_unlocked
inline void inp( ll &n )//fast input function
{
   n=0;
   ll ch=getcx();ll sign=1;
   while( ch < '0' || ch > '9' ){if(ch=='-')sign=-1; ch=getcx();}

   while(  ch >= '0' && ch <= '9' )
           n = (n<<3)+(n<<1) + ch-'0', ch=getcx();
   n=n*sign;
}
double abo(double x)
{
	if(x<0)return -1*x;
	else return x;
}

struct sort_pred {
    bool operator()(const std::vector<ll>& a, const std::vector<ll>& b) {
		//printf("\n%lld %lld %d",a[0],b[0],a[0]<b[0]);
		return a[0] < b[0];
	}
};

class mycomparison
{
  bool reverse;
public:
  mycomparison(const bool& revparam=false)
    {reverse=revparam;}
  bool operator() (const int& lhs, const int&rhs) const
  {
    if (reverse) return (lhs>rhs);
    else return (lhs<rhs);
  }
};

ll fs[18];
ll fact(ll n)
{
	return fs[n];
}

int main()
{
	freopen("all_in","r",stdin);
	freopen("1_out","w",stdout);

	ll t,n,ans=0,ans2=0;
	cin>>t;
	while(t--){
		cin>>n;
		ans+=1;
		cout<<ans-ans2<<endl;
		ans2 = ans;
	}
	return 0;
}
