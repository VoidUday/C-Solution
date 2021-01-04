#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char str[15];
    int i;
    cin >> str;
    int l = strlen(str);
    for ( i = l-1; i >=0; i--)
    {
        cout << str[i];
    }
    
}