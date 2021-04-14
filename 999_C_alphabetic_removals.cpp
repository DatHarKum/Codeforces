#include<bits/stdc++.h>
using namespace std;
struct comparator{
    inline bool operator ()(pair<char,int> &a, pair<char,int> &b)
    {
        if(a.first != b.first)return a.first < b.first;
        return a.second < b.second;
    }
};
struct comparator1{
    inline bool operator ()(pair<char,int> &a, pair<char,int> &b)
    {
        return a.second < b.second;
    }
};
 
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
   int n,k;
   cin >> n;
   cin >> k;
   vector<pair<char,int>> x;
   for(int i = 0 ; i < n ; i++)
   {
       char p;
       cin >> p;
       x.push_back({p,i});
   }
   sort(x.begin(),x.end(),comparator());
   sort(x.begin()+k,x.end(),comparator1());
   for (int i = k; i < n; ++i)
		    cout << x[i].first;
	 cout << endl;
   
}
