#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define PB push_back
#define MP make_pair
#define F first
#define S second
#define endl "\n"
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<bool> vb;
const ll INF = 1000000000;
 
int n,q;
pii arr[200008];
int simpen[200008], ans[200008];
 
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	memset(simpen,0,sizeof(simpen));
	memset(ans, 0,sizeof(ans));
	cin>>n>>q;
	
	for(int i=0; i<n; i++)
	{
		cin>>arr[i].F;
		arr[i].S = i;
	}	
	
	for(int i=0; i<q; i++)
	{
		int a,b;
		cin>>a>>b;
		a--; b--;
		
		if(arr[a].F != arr[b].F){
			if(arr[a].F > arr[b].F) simpen[a]++;
			else simpen[b]++;
		}
	}
	
	sort(arr,arr+n,greater<pii>());
	int tmp;
	
	for(int i=0; i<n; i++)
	{
		tmp = i+1;
		
		if(tmp>=n) break;
		
		while(arr[i].F == arr[tmp].F){
			tmp++;
			if(tmp>=n) break;
		}
		
		if(tmp>=n)break;
		
		ans[arr[i].S] = n-tmp-simpen[arr[i].S];
	}
		
	for(int i=0; i<n-1; i++)
	{
		cout<<ans[i]<<" ";
	}
	cout<<ans[n-1]<<endl;
	
	return 0;
}
