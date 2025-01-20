#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string abhi = "abcdabcabcdabc";
    string part = "abc";
    int mainlen = abhi.length();
    int partlen = part.length();
    while(abhi.find(part) < mainlen){
        int st = abhi.find(part);
        abhi.erase(st , partlen);
    }

    cout << abhi << endl;
}