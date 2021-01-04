#include<iostream>
using namespace std;
int main(){
    int c1=0, c2=0;
    string s1;
    cin >> s1;
    for(int i=0; i<s1.length(); i++){
        c1++;
        if(s1[i]==' ' || s1[i]== '\n' || s1[i] =='\t'){
            c2++;
        }
    }
    cout << c1 << " " << c2+1;
}