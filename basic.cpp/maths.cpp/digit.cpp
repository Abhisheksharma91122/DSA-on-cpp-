#include<iostream>
using namespace std;

void Digit(int n){
    int sum = 0;
    while(n != 0){
        int digit = n%10;
        sum += digit;
        n = n/10;
    }

    cout << sum << endl;
}

int main(){
    int num = 12345;
    Digit(num);
}