#include<iostream>
using namespace std;
// void change(int* ptr){ //  pass by refrence using pointer
//     *ptr = 20;
// }
void change(int &b){ //  pass by refrence using refrences(alias)
    b = 20;
}

int main(){
    int a =10;
    // change(&a);
    change(a);
    cout<<a<<endl;
}