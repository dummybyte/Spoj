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
//int M[1236][5679];
int main() 
{
	char ch;
	int x,y,row[1236],col[5679],i,j,c=0,temp,flag=0;
	for(i=0;i<1234;i++)
		row[i]=i;
	for(j=0;j<5678;j++)
		col[j]=j;
	
	
	while(cin>>ch)
	{
		switch(ch)
		{
			case 'R':
			cin>>x>>y;
			temp=row[x-1];
			row[x-1]=row[y-1];
			row[y-1]=temp;
			break;
			
			case 'C':
			cin>>x>>y;
			temp=col[x-1];
			col[x-1]=col[y-1];
			col[y-1]=temp;
			break;
			
			case 'Q':
			cin>>x>>y;
			cout<<row[x-1]*5678+col[y-1]+1<<"\n";
			break;
			
			case 'W':
			int z;
			cin>>z;
			z--;
			x=z/5678;
			y=z%5678;
			
			for(i=0;i<1234;i++)
				if(row[i]==x)
					break;
			for(j=0;j<5678;j++)
				if(col[j]==y)
					break;
			cout<<i+1<<" "<<j+1<<"\n";
			break;
		}
	}
    return 0;
}