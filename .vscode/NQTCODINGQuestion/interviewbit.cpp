#include<iostream>
#include<cmath>
using namespace std;

int main()  {
    float A = 1, B = 2;
    // Print the sum of cube of both A and B, and store it in float variable named "cube_val"
    float cube_val =  pow(A,3) + pow(B,3);
    cout <<cube_val<<endl;
    // Print the square root of cube_val, and store it in float variable named "sq_val"
    float sq_val = sqrt(cube_val);
    cout << sq_val<<endl;
    // Print the sin of sq_val
    
        cout << sin(sq_val)<<endl;
    return 0;
}