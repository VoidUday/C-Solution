#include<iostream>
using namespace std;
int main(){
    int n;
    int fact =1;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        fact = fact * i;
    }
    
    cout << "Factorial of" << n << fact;
}