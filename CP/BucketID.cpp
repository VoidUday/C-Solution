#include<iostream>
using namespace std;
int main(){
    int n, i, rem, sum=0;
    cin >> n;
    int arr[n];
    for ( i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    while (arr[i] > 0)
    {
     rem = arr[i] %10;
     sum += rem;
     arr[i] = arr[i]/10;
    }
    cout << sum;
    
}