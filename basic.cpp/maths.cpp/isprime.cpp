#include<iostream>
using namespace std;
string isPrime(int n){
    for (int i = 2; i*i < n; i++)
    {
        if (n%i == 0)
        {
            return "NOt prime";
        }
        
    }
    return "Prime";
    
}

int main(){
    int n = 24;

    cout << isPrime(n) << endl;
}