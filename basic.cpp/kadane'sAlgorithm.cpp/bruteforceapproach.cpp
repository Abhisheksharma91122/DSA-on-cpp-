#include<iostream>
using namespace std;
int main(){
    int arr[]={3,-4,5,4,-1,7,-8};
    int size = sizeof(arr)/sizeof(arr[0]);
    int maxsum = INT16_MIN;
    for (int st = 0; st < size; st++)
    {
        int currentsum = 0;
        for (int end = st; end < size; end++)
        {
           currentsum += arr[end];
           maxsum = max(currentsum , maxsum);
        }
        
    }
    cout<<"the max sum is : "<<maxsum;
}