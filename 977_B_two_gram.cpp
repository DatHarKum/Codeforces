#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int x;
    string y;
    cin>>x;
    cin>>y;
    map<string,int> mp;
    for(int i = 0; i < x - 1 ; i++)
    {
        string s(y.begin()+i,y.begin()+i+2);
        mp[s]+=1;
    }
    int max = INT_MIN;
    string out;
    for(auto it = mp.begin(); it!=mp.end() ; it++)
    {
        if(it->second > max)
        {
            max = it->second;
            out = it->first;
        }
    }
    cout << out << endl;
    return 0;
}
