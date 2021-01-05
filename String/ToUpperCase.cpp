#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string s1= "Helooolo";
    for (int i = 0; i < s1.size(); i++)
    {
        /* code */
        if (s1[i] >='a' && s1[i]<= 'z')
        {
            s1[i] -=32;
        }
    }
    cout << s1 <<endl;
    string s2= "ASDFGHJJJJJJJJHG";
    for (int i = 0; i < s1.size(); i++)
    {
        if (s2[i] >='A' && s2[i]<= 'Z')
        {
            s2[i] +=32;
        }
    }
      cout << s2;
    
}