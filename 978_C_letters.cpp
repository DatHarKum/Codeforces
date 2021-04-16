#include<bits/stdc++.h>
using namespace std;
 
int main()
{
 
    int m,n;
    cin >> m >> n;
    vector<long long> dorm(m);
    for(int i = 0 ; i < m ; i++)cin >> dorm[i];
    vector<long long> room(n);
    for(int i = 0 ; i < n ; i++)cin >> room[i];
    long long int mod = dorm[0];
    long long int mod1 = 0;
    int c = 1;
    for(int i = 0 ; i < n ; i++)
    {
        if(room[i] <= mod)
        {
            cout << c << " " << room[i]- mod1 << endl;
        }
        else
        {
            mod1 = mod;
            if(c<m)
            {
            mod+=dorm[c];
            c++;
            }
            i--;
        }
        
    }
 
}
