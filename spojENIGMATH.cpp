#include <iostream>

using namespace std;

#define ll long long 

int gcd(int a, int b)////                 O(log(a+b))
{
    int r;
    while (b) {
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}
int main()
{
	int t,a,b;
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		int t=gcd(a,b);
		b = b/t;
		a = a/t;
		cout<<b<<" "<<a<<"\n";
	}
}