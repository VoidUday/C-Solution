#include<iostream>
using namespace std;
int main(){
    int n, count=0;
    cin >> n;
   while(n)
    {
       count = count + (n  & 1);
       n = n/2;
    }
    cout << "SetBits are - " << count;
}