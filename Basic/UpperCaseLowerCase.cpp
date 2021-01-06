#include<iostream>
using namespace std;
int main(){
    string s1;
    cin >> s1;\
    for (int i = 0; i < s1.length(); i++)
    {
        if (s1[i]>=65 && s1[i]<=90)
        {
            s1[i] = s1[i] +32;
        }
        else if(s1[i] >=97 && s1[i] <=122)
            {
                s1[i] = s1[i] -32;
            }
        
       
    }
    cout << s1;
}