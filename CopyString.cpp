#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char s1[] = "uday";
    char s2[] = "How are you !";
    strcpy(s2, s1);
    cout  << " "<< s1 << " " <<  s2;    
      
}