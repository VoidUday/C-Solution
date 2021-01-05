#include<iostream>
using namespace std;
int main(){
    int a[100];
    int i, n , sum=0;
    cout << "Enter the no element";
    cin >> n;
    for ( i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for ( i = 0; i < n; i++)
    {
       sum += a[i];
    }
    cout << sum;
    
    
}