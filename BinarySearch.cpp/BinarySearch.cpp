#include<iostream>
using namespace std;

int BinarySearch(int arr[], int n, int key){
    int l=0, r= n-1, mid=0;
    while (l<r){
       mid =(l+r)/2;
        if (key == arr[mid])
        {
            cout <<  mid;
        }
        else if (key < arr[mid])
        {
           r = mid -1;
        }
        else
        {
            l = mid +1;
        }
        return -1; 
    }
    
}
int main(){
    int n, key ,a;
    cout << "Enter no of element and Key - ";
    cin >> n >> key;
    int arr[n];
    cout << "Enter the element - ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[n];
    }

   BinarySearch(arr, n, key);
    
}