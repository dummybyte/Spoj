/*
Author :  ARVIND PANDEY
 */
#include <iostream>
using namespace std;

struct _ {
    ios_base::Init i;

    _() {
        cin.sync_with_stdio(0);
        cin.tie(0);
    }
} _;

#define FOR(i,n) for(i=0;i<n;i++)
#define pb(x) push_back(x)
#define ll unsigned long long int

ll power(ll a, ll n)//////             O(log n)
{
    ll ans = 1;
    while (n) {
        if (n % 2 == 1)
            ans *= a;
        a *= a;
        n /= 2;
    }
    return ans;
}

ll gcd(ll a, ll b)////                 O(log(a+b))
{
    int r;
    while (b) {
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}
////////////////////////////////////////////////////////////////////////////////////CODE BEGINS/////////////////////////////////////////////////////////
ll nck(ll n,ll m)
{
    if(m>n-m) 
		m=n-m;
    
    ll ans=1;
    
    for(int i=0;i<m;i++)
	    ans=ans*(n-i)/(i+1);
    
    return ans;

}


int main() 
{
	int t;
	cin>>t;
	ll n,m;
	
	while(t--)
	{
		cin>>n>>m;
		ll ans=nck(n-1,m-1);
		cout<<ans<<"\n";
	}
    return 0;
}