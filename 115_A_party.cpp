#include<bits/stdc++.h>
 
using namespace std;
 
int maxi = 1;
 
void dfs(int i , vector<int>& a, int m)
{
    
    if(i == -1 )
    {
        if(m > maxi)
        {
            maxi = m;
        }
    }
    else
    {
        //cout << i << " " <<  a[i]   <<  " " << m <<  " ";
        if(a[i] == -1)
        {
            if(m > maxi)
        {
            maxi = m;
        } 
        }
        else
        {
             dfs(a[i],a,m+1);
        }
        
       
    }
    
    
}
 
 
 
int main()
{
    int n;
    cin >> n;
    vector<int> a(n+1,0);
    for(int i = 1 ; i <= n ; i++)
    {
        int k;
        cin >> k;
        a[i] = k;
    }
    // for(int i = 1 ; i <= n ; i++)
    // {
    //     cout << a[i] << endl;
    // }
    for(int i = 1 ; i <= n ; i++)
    {
        if(a[i]!=-1)
        {
        dfs(i,a,1);
        }
        //cout << endl;
    }
 
    cout << maxi << endl;
 
}
