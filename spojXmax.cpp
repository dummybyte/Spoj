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
	int n,i;
	cin>>n;
	vector <ll> arr;
	ll x;
	FOR(i,n)
	{
		cin>>x;
		arr.pb(x);
	}
	sort(arr.rbegin(),arr.rend());
	
	
	ll sign=1;
	while(sign<=arr[0])
		sign<<=1;
	
	sign>>=1;
	
	for(int t=0;sign>=1;sign>>=1)
	    {
	            i=t;
            
	            while(i<n && (arr[i] & sign) ==0)
	            i++;
            
	            if(i >= n)
	            continue;
            
	            swap(arr[t],arr[i]);
            
	            for(int j=0;j<n;++j)
	            {
	                    if(j!=t && (arr[j] & sign) != 0)
	                    arr[j] = arr[j] ^ arr[t];
	            }
            
	            t++;
            
	    }
		ll ans=0;
		FOR(i,n)
			ans ^= arr[i];
		cout<<ans<<"\n";
	
	
    return 0;
}