#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int n;
	long long m;
	scanf("%d %lld",&n,&m);
	int arr[n+2];
	long long cum[n+2];
	cum[0]=0;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		cum[i] = cum[i==0 ? 0:i-1] + arr[i];
	}
	
	long long temp = cum[0],maxm=-1;
	int start=-1;
	for(int i=0; i<n ; i++)
	{
		if(temp < m)
		{
			if(maxm < temp && temp <= m)
				maxm=temp;
			if(start>=0)
			temp = cum[i+1] - cum[start];
			else
				temp=cum[i+1];
			
		}
		else
		{
			start++;
			temp = cum[i] - cum[start];
			if(temp > maxm && temp <= m)
				maxm=temp;
			while(temp > m && start <= i)
			{
				start++;
				temp = cum[i] - cum[start];
				if(temp > maxm && temp <= m)
					maxm=temp;
				
			}
			
		}
		
		
		
	}
	printf("%lld\n",maxm);
	return 0;
}