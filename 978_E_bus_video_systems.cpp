#include<bits/stdc++.h>
using namespace std;
 
int main()
{
 
    int m,n;
    cin >> m >> n;
    vector<long long int> bus(m);
    for(long long i = 0 ; i < m ; i++)cin >> bus[i];
    long long int csum = 0;
    for(long long i = 0 ; i < m ; i++)
    {
        csum+=bus[i];
        bus[i] = csum;
    }
    long long int mini = *min_element(bus.begin(),bus.end());
    long long int maxi = *max_element(bus.begin(),bus.end());
    int lf,rg;
    rg = n;lf = 0;
    if(maxi > 0)rg = n - maxi;
    if(mini < 0)lf = abs(mini);
 
    if(rg  >= lf) cout << rg - lf + 1 << endl;
    else cout << 0 << endl;
 
   
 
    
 
}
