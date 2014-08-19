/*
Author :  ARVIND PANDEY
 */
#include <iostream>
#include <cstring>
#include <algorithm>
#include <string.h>
#include <stdlib.h>
#include <cmath>
#include <vector>
#include <stack>
#include <queue>
#include <map>

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
#define ll long long

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

int main() 
{
	int ans,c,n,i,j,temp,sum=0;
	cin>>n;
	ans=n;
	j=4;
	c=2;
	while(j<=n)
	{	
		i=j;
		while(i<=n)
		{
			ans++;
			i+=c;
		}
		c++;
		j=c*c;
	}
	cout<<ans<<"\n";
	
    return 0;
}