#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s1;
    string s2;
    cin >> s1 >> s2;
    cout << s1 + s2; //concat
    s1.append(s2);
    cout << s1;
    cout << s1[0]<< endl; //access element
    s1.clear(); //clear string

    cout << s2.compare(s1)<<endl;
    if(s2.compare(s1)==0){
        cout << "equal";
    }
    //isempty
    if(!s1.empty()){
        cout << "string is not empty";
    }
    //erase
    s1.erase(3,4);
    cout << s1;

    //finding
    cout << s1.find("com")<< endl;
    //insert
    cout << s1.insert(2, "lol");
    //length
    cout << s1.size();
    //also work
    cout << s1.length();
    //substring
    cout <<s1.substr(3,4);
    int x =345;
    cout << to_string(x).append(4, 4);
    string s = "HELLLO";
    sort(s.begin(), s.end());
    cout<< s;

}