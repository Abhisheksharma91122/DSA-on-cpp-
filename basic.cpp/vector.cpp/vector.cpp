#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> abhi;
    int n;
    
    cout<<"Enter the no of elements : ";
    cin>>n;
    cout<<"Enter the "<<n<<"elements : ";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        abhi.push_back(x);
    }
    cout<<"you enter element is : ";
    for(int y : abhi ){
        cout<<y<<" ";
    }
    return 0;   
}
