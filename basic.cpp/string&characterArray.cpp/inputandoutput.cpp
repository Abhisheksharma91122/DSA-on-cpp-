#include<iostream>
using namespace std;
int main(){
    char str[100];
    cout << "enter character array : ";
    // cin >> str;
    // cin.getline(str , 100 , '$'); // this is delimiter to stop the input
    cin.getline(str , 100);

    cout << "the output is : " << str << endl;
    int len = 0;
    for (int i = 0; str[i] != '\0' ; i++)
    {
        len++;
    }
    
    cout << len << endl;


    for(char cha : str){
        cout << cha << " ";
    }
    cout << endl;
}