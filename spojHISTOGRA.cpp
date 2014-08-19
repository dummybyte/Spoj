#include <iostream>
#include <stack>

using namespace std;

struct _ {
    ios_base::Init i;

    _() {
        cin.sync_with_stdio(0);
        cin.tie(0);
    }
} _;

void Max_Area(long long *arr,int n)
{
	stack <int> st;
	
	int i,temp;
	long long dummy,ans=0;
	
	i=0;
	while(i<n)
	{
		if(st.empty() || arr[st.top()]<=arr[i])
			st.push(i++);
		else
		{
			temp = st.top();
			st.pop();
			dummy = arr[temp] * (st.empty() ? i : i-st.top()-1);
			if(ans < dummy)
				ans = dummy;
		}
		
		
	}
	
	while(!st.empty())
	{
		temp=st.top();
		st.pop();
		dummy = arr[temp] * (st.empty() ? i : i-st.top()-1);
		if (dummy > ans)
			ans = dummy;
	}
	
	cout<<ans<<"\n";
	
}

int main()
{
	int n,i;
	cin>>n;
	while(n!=0)
	{
		long long arr[n+1];
		for(i=0;i<n;i++)
		cin>>arr[i];
		Max_Area(arr,n);
		cin>>n;
	}
	return 0;
}