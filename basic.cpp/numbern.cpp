#include<iostream>
using namespace std;
int main()
{
    int  n;
    cout<<"Enter the value of n :";
    cin>>n;
    int sum = 0;
    for(int i=1;i<=n;i++){
        if(i%3==0)
        {
            sum = sum + i;
        }
    }
    cout<<"sum is :"<<sum<<endl;
    int fact = 1;
    for(int j=1;j<=n;j++){
        fact = fact * j;
    }
    cout<<fact;
    // return 0;
}