#include <iostream>
#include <string>
using namespace std;

int main() {
	string s1;
    string s2;
    cin >> s1;
    cin >> s2;
    
    int l1 = s1.size();
    int l2 = s2.size();
    cout << l1 << " "<< l2 <<endl;
    cout << s1 + s2;
    iter_swap(s1.begin(), s2.begin());
    cout << s1 <<" " << s2;
    return 0;
}