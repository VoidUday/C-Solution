#include<iostream>
using namespace std;
int main(){
    cout << "Enter the Noumber of element - ";
      int n;
    cin >> n;
    cout << "Enter the elements - ";
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[n];
    }
    int max = arr[0];
    int min = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
           max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
        
    }
    cout << "Max" << max << endl;
    cout << "Min" << min << endl;
    
}