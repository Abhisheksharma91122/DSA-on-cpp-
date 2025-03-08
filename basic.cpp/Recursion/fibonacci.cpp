#include<iostream>
using namespace std;

int fibo(int n){
    if (n == 0 || n == 1)
    {
        return n;
    }

    return fibo(n-1) + fibo(n-2);
}

int main(){
    int value;
    cout << "Enter Term you want in fibonacci : ";
    cin >> value;

    cout << "The term is : " << fibo(value);

}