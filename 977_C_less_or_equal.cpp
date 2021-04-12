#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    int k;
    cin >> k;
    vector<int> x;
    for(int i = 0 ; i < n ; i++)
    {
        int e;
        cin >> e;
        x.push_back(e);
    }
    sort(x.begin(),x.end());
 
    if(k<n && k > 0)
    {
        if(x[k-1]!=x[k])
        {
            cout << x[k-1]<<endl;
        }
        else
        {
            cout << -1 << endl;
        }
           
    }
    else if(k == n) 
    {
        cout << x[k-1] << endl;
    }
    else if(k == 0)
    {
        if(x[0] >= 2)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
        
    }
    else if(k > n)
    {
        cout << -1 << endl;
    }
 
return 0;
}
