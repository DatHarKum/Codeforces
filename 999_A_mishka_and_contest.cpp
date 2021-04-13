#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,k;
    cin >> n >> k;
    int a[n+1];
    for(int i = 0 ; i < n ; i++)
    {
        int x;
        cin >> x;
        a[i] = x;
    }
    int p = 0;
    for(int i = 0 ; i < n ; i++)
    {
        if(a[i] > k)break;
 
        p++;
    }
    int q = 0;
    for(int i = n-1 ; i >= 0 ; i--)
    {
        if(a[i] > k)break;
 
        q++;
    }
    if(n-q<p){cout <<  n;return 0;}
 
    cout << p+q;
 
    return 0;
}
 
