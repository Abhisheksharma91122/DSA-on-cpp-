#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    char a = 'A';
    for(int i=0;i<n;i++){
        for(int j=i;j>=0;j--){
            a = a+j;
            cout<<a;
            a = 'A';
        }
        cout<<endl;
    }
    return 0;
}
