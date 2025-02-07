#include<iostream>
using namespace std;

bool isArmstrong(int n){
    int copy = n;
    int sumofCube = 0;
    while(n != 0){
        int dig = n%10;
        sumofCube += (dig*dig*dig);
        n = n/10;
    }

    return copy == sumofCube;
}

int main(){
    int n = 153;

    if (isArmstrong(n))
    {
        cout << "the number is Armstrong number";
    } else {
        cout << "the number is not a Armstrong number";
    }
    
}