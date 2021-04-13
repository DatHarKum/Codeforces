#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<long long> x;
    for(int i = 0 ; i < n ; i++)
    {
        long long p;
        cin >> p;
        x.push_back(p);
    }
 
    int max = -1;
    int k = 0;
    for(int i = 0 ; i < n ; i++)
    {
        long long y = x[i];
        while(!(y%3))
        {
            y/=3;
            k++;
            //cout << y << endl;
        }
        if(k>max)
        {
            max = k;
        }
        k = 0;
    }
    //cout << max << endl;
    max++;
    vector<long long> out;
    while(max--)
    {
        vector<long long> temp;
        
        for(int i = 0 ; i < n ; i++)
        {int u = 0;
            long long y = x[i];
           while(!(y%3))
        {
            y/=3;
            u++;
        } 
        if(u == max)
        {
            temp.push_back(x[i]);
        }
        }
        sort(temp.begin(),temp.end());
        for(int i = 0 ; i < temp.size() ; i++)
        {
            out.push_back(temp[i]);
        }
 
    }
    for(int i = 0 ; i < out.size() ; i++)
    {
        if(i < out.size() - 1)
        {
        cout << out[i] << " ";
        }
        else
        {
            cout << out[i]<< endl;
        }
        
    }
    return 0;
}
