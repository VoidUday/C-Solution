#include<iostream>
using namespace std;
int main(){
    string s1;
    int c=0;
    cin >> s1;
    for (int  i = 0; i < s1.length(); i++)
    {
        c++;
    }
    cout << c;
    return 0;
}
