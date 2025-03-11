#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void getPermute(string str, int idx) {
        if (idx == str.length()) {
            cout << str;
            cout << endl;
            return;
        }

        for (int i = idx; i < str.length(); i++) {
            swap(str[idx], str[i]); 
            getPermute(str, idx + 1); 
            swap(str[idx], str[i]);
        }
    }

    void permute(string str) {
        getPermute(str, 0);
    }
};

int main() {
    Solution solution;
    string str = "Abi";

    // Print all permutations
    cout << "All permutations:" << endl;
    solution.permute(str);

    return 0;
}
