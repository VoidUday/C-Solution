#include<iostream>
using namespace std;
int main(){
    int a[100];
    int i,j, n, c=0;
    cout << "Enter the no element";
    cin >> n;
    for ( i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for ( j = 0; j < n; j++)
    {
       if (i != j)
       {
           if (a[i] == a[j])
           {
               c++;
           } 
       }
       cout << c;  
    }
      
}