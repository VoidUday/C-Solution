#include<iostream>
using namespace std;
int main(){
    int s1[100];
    int i,j, n, c=0;
    cout << "Enter the no element - ";
    cin >>n;
    cout << "Enter the element";
    for ( i = 0; i < n; i++)
    {
       cin >> s1[n];
    }
    

for ( i = 0; i < n; i++)
{
    c=0;
   for ( j = 0; j <n; i++)
   {
       if (i !=j)
       {
          if (s1[i] == s1[j])
          {
              c++;
          }
          
       }    
   }
   if (c==0)
   {
       cout << s1[i] <<endl;
   }
   cout << c;
   
}

     
}