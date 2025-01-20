#include<iostream>
#include<string.h>
using namespace std;
bool isAlphaNum(char str){
    if ((str >= '0' && str <= '9') || (tolower(str) >= 'a' && tolower(str) <= 'z'))
    {
        return true;
    }
    return false;
    
}

bool ispalindrome(char str[]){
    int st = 0 , end = strlen(str) - 1;
    while (st < end)
    {
        if(!isAlphaNum(str[st])){
            st++ ; continue;
        }
        if(!isAlphaNum(str[end])){
            end-- ; continue;
        }
        if (tolower(str[st]) != tolower(str[end]))
        {
            return false;
        }
        st++;
        end--;
    }
    return true;
    
}
int main(){
    char str[100] = "Ac3?e3c&a";
    // cout << "Enter a string : ";
    // cin >> str;
    if (ispalindrome(str))
    {
        cout << "Palindrome";
    } else {
        cout << "Not palindrome";
    }
    
}