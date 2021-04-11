#include<iostream>
#include<vector>
using namespace std;
int main()
{
    
    vector<int> myVector;
    int str_len;
    cin >> str_len;
    string str1;
    string str2;
    cin >> str1;
    cin >> str2;
    int count =0;
    int flag = 1;
    
    for(int i = 0; i < str_len ; i++)
    {
        
        if(str1[i] == str2[i])
        {
            continue;
        }
        else
        {
         flag = 0;   
            
            for(int j = i ; j < str_len ; j++)
            {
                if(str1[j] == str2[i])
                {
                    flag = 1;
                    for(int k = j ; k > i ; k--)
                    {
                        int var = str1[k-1];
                        str1[k-1] = str1[k];
                        str1[k] = var;
                        count++;
                        myVector.push_back(k);
                        
                    }
                break;
                }
                
            
            }
            
            if(!flag)
            {
                cout << -1 << "\n" ;
                break;
            }
        }
    }
    
 
    if(flag)
    {
    cout << count << "\n" ;
    for(auto it = myVector.begin(); it != myVector.end(); it++)
    {
        cout << *it << " ";
    }
    }
    
}
