#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    vector<char> a(n);
    vector<int> p;
    int k = 0;
    bool flag = true;
    bool push = true;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> a[i];
        if(a[i] == 'x'){
            k+=1;
        }
        else
        {
            if(k>2)
            {
            p.push_back(k);
            }
            k = 0;
        }
 
        
    }
 
    if(k>2)
    {
        p.push_back(k);
    }
        
        //cout << p.size() << endl;
    if(p.size() == 0)
    {
        cout << 0 << endl;
        return 0;
    }
    int out = 0;
 
    for(int i = 0 ; i< p.size() ; i++ )
    {
        out+=(p[i] - 2);
    }
    cout << out << endl;
    return 0;
}
