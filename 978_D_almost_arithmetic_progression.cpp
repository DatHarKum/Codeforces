#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a1(n,0);
    for(int i = 0 ; i < n ; i++)cin >> a1[i];
    int cnt = 1e9;
    vector<int> a;
    a = a1;
    if(n<=2){cout << 0 << endl ; return 0;}
    for(int i = - 1 ; i <= 1 ; i++)
    {
        
        for(int j = -1 ; j <= 1 ; j++)
        {
            a = a1;
            int a1 = a[0] + i;
            int a2 = a[1] + j;
            int s = abs(i) + abs(j);
            int d = a2  - a1;
            a[0] = a1;
            a[1] = a2;
            //cout <<  "d:" << d << endl;
            //cout << "a1a2  " << a1 << " " << a2 << endl;
 
            for(int k = 1 ; k < n - 1 ; k++)
            {
                //cout << "abs : " << abs(a[k+1] - a[k] - d) << endl;
                if(abs(a[k+1] - a[k] - d) == 1)
                {
                    s++;
                    if(a[k+1] - a[k] - d == -1)
                    {
                        a[k+1]+=1;
                    }
                    else if(a[k+1] - a[k] - d == 1)
                    {
                        a[k+1]-=1;
                    }
                    //cout << a[k] << " " << a[k+1] << endl;
                }
                else if(abs(a[k+1] - a[k] - d) == 0)
                {
 
                }
                else
                {
                    s = 1e9; break;
                } 
            }
            cnt = min(cnt,s);
        }
    }
    cout << ((cnt == 1e9) ? -1 : cnt)<< endl;
}
