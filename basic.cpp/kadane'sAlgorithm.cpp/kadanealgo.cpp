#include<iostream>
using namespace std;
int main(){
    int arr[]={4,-5,6,-7,9};
    int size = sizeof(arr)/sizeof(arr[0]);
    int currentsum = 0;
    int maxsum = INT16_MIN;
    for (int i = 0; i < size; i++)
    {
        currentsum += arr[i];
        maxsum = max(currentsum,maxsum);
        if (currentsum<0)
        {
            currentsum = 0;
        }
        
    }
    cout<<"the maxsum is : "<<maxsum;

    return 0;
}