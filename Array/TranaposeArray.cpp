#include<iostream>
using namespace std;
int main(){
    int a[10][10], trans[10][10], r, c, i, j;
    cout << "Enter row and col-";
    cin >> r >> c;
    cout << "Enter element of matrix : -";
    for ( i = 0; i < r; i++)
    {
        for ( j = 0; i < c; j++)
        {
            cin >> a[i][j];
        }
        cout << "The matrix is - ";
        for ( i = 0; i < r; i++)
        {
            for ( j = 0; i < c; j++)
            {
              cout << a[i][j];
            }
            
        }
        
    }
    
}