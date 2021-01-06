#include<iostream>
using namespace std;

int coutSetBits(int n){
    int count=0;
    while (n)
    {
       count = count + (n & 1);
       n = n/2; 
    }
    return count;
    
}
int main(){
     int n;
     cout << "Enter No";
     cin >> n;
     cout << "SetBits are - " << coutSetBits(n);
     return 0;
}