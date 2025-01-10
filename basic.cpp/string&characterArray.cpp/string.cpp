#include<iostream>
#include<string>
using namespace std;
int main(){
    // string str = "Abhishek Sharma";
    // cout << str << endl;

    string str1 = "Abhishek ";
    string str2 = "Sharma";

    string str3 = str1 + str2;
    cout << str3 << endl;

    cout << (str1 < str2) << endl; // this is check lexicographical 

    return 0;
}