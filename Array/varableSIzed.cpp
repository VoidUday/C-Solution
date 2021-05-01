#include<iostream>
using namespace std;

int main(){
    int n,q;
    int k1;
    int query[k1];
    int k;
    int arr[k];

    cin >> n >> q;
    while(n--){
       
        for (int i = 0; i < k; i++)
        {
            cin >>k;
            cin >> arr[i];
        }
        
        while (q--)
        {
           
           for (int j = 0; j < k1; j++)
           {
                cin >> k1;
               cin >> query[j];
           }
           
        }
        for (int i = 0; i < k; i++)
        {
            cout << arr[i];
        }
          for (int i = 0; i < k; i++)
        {
            cout << query[i];
        }
        
        
    }
    return 0;
}