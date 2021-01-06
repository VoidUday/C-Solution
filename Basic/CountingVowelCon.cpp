#include<iostream>
using namespace std;
int main(){
    int i, c1=0, c2=0;
    char str[10];
    cin >> str;
    for ( i = 0; i < str[i]!='\0'; i++)
    {
       if (str[i] =='a' || str[i]=='i' || str[i]=='e' || str[i]=='o' || str[i]=='u')
       {
           c1++;
       }
       else
       {
           c2++;
       }       
    }
    cout << "Vowel are " << c1 <<endl;
    cout << "Consonant are " << c2;
}