#include<iostream>
using namespace std;
 
int main()
{
    int co_ord , que_no;
    cin >> que_no >> co_ord;
    int arr[que_no][2];
    for(int i = 0; i < que_no ; i++)
    {
        cin >> arr[i][0] >> arr[i][1];
        //cout << arr[i][0] << arr[i][1] << "\n";
    }
    
    int op[co_ord] = {0};
    int count = 0;
    for(int i = 0 ; i < que_no ; i++)
    {
        for(int j = arr[i][0]; j <= arr[i][1] ; j++)
        {
            
            if(op[j-1] == 0)
            {
            op[j-1] = 1;
            count++;
            }
          
        }
    }
    cout << co_ord - count << "\n";
    for(int i = 0 ; i < co_ord ; i++)
    {
        if(op[i] == 0)
        {   
            
            cout << i+1 << " ";
        }
    }
}
