#include<iostream>
using namespace std;
int main(){
    string s1;
    int u=0, l=0, s=0;
    cin >> s1;
    for (int i = 0; i < s1.length(); i++)
    {
        if (s1[i] >=65 && s1[i] <=90)
        {
            u++;
        }
        else if (s1[i]>=97 && s1[i]<=122)
        {
            l++;
        }
        else
        {
            s++;
        }
    }
    cout << "Upper case" << " " << "lower case" << " " << " " << "Special char" << " "<< u << " " << l << " " << s;
    return 0; 
}