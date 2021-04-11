#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int x,y;
    cin >> x >> y ;
    while(y--)
    {
        if(x%10 == 0)
        {
            x/=10;
        }
        else
        {
            {
                x-=1;
            }
        }
        
    }
    cout <<  x  << endl;
return 0;
}
