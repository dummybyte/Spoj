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
	int x,y,z;
	cin>>x>>y>>z;
	while(!(x==0 && y==0 && z==0))
	{
		
		if(y-x==z-y)
			cout<<"AP "<<2*z-y<<"\n";
		else
			cout<<"GP "<<z*z/y<<"\n";
		cin>>x>>y>>z;
		
		
	}
    return 0;
}