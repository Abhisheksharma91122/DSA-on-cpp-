#include<iostream>
#include<vector>
using namespace std;
int search(vector<int>& abhi,int size , int target){
    for (int i = 0; i < size; i++)
    {
        if (abhi.at(i) == target)
        {
            return i;
        }
        
    }
    return -1;
}
int main(){
    vector<int> abhi;
    abhi = {10,20,30,40};
    int size = abhi.size();
    int target = 20;
    cout<<"the search value is at : "<<endl;
    cout<<search(abhi,size,target);
}