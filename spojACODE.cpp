#include <iostream>
#include <sstream>
#include <string.h>
using namespace std;

int main()
{
	string s,temp="";
	cin>>s;
	while(s!="0")
	{
		int i,l=s.size();
		long long dp[l+1];
		int x,y;
		memset(dp,0,sizeof dp);
		dp[0]=1;
		
		for(i=1;i<l;i++)
		{
			x=s[i-1]-'0';
			y=s[i]-'0';
			
			x=x*10+y;
			//cout<<x<<"\n";
			if(s[i]-'0' > 0)
				dp[i] = dp[i-1];
			if(x <= 26 && x > 9)
				dp[i] = dp[i] + dp[i-2 < 0? 0 : i-2];
			
		}
		// for(i=0;i<l;i++)
// 			cout<<dp[i]<<" ";
// 		cout<<"\nans";
		cout<<dp[l-1]<<"\n";
		cin>>s;
	}
	return 0;
}