#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec;
    cout<<"size ="<<vec.size()<<endl;
    vec.push_back(12);
    vec.push_back(4);
    vec.push_back(2);
    vec.push_back(7);
    cout<<"size ="<<vec.size()<<endl;
    cout<<vec.at(1);
}