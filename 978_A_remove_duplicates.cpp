#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    vector<int> a(n,0);
    unordered_map<int,int> mp;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> a[i];
        mp[a[i]] = i;
    }
 
    cout << mp.size() << endl;
    for(int i = 0 ; i< n - 1 ; i++ )
    {
        if(i == mp[a[i]]){cout << a[i] << " ";}
    }
    cout << a[n-1] << endl;
}
