#include <iostream>
#include <queue>
#include <vector>
using namespace std;
#define pii pair<int,int>
int main()
{
	int t,n,i,x,ans,m,flag;
	pair <int, int> p[10000];
	pii temp;
	vector <pii> v;

	cin>>t;
	while(t--)
	{
		cin>>n>>m;

		for(i=0;i<n;i++)
		{
			cin>>x;
			p[i]=make_pair(x,i);
			v.push_back(p[i]);
		}
		ans=0;
		while(!v.empty())
		{
			//sort(v.rbegin(),v.rend());
			flag=0;
			temp = v.front();
			
			for(i=0;i<v.size() ;i++)
			{
			
					if(v[i].first > temp.first)
					{
						flag=1;
						break;
					}
				
			}
			if(flag)
			{
				
				v.erase(v.begin());
				v.push_back(temp);
			}
			else
			{
				// = v.front();
				v.erase(v.begin());
				ans++;
				if(temp.second == m)
							{
								cout<<ans<<"\n";
								break;
							}
			}
			
			
		}
		v.clear();

	}
	
}