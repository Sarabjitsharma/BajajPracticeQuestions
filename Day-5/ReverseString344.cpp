#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int l = 0, r = s.size() - 1;

        while (l < r) {
            char temp = s[l];
            s[l] = s[r];
            s[r] = temp;
            l++;
            r--;
        }
    }
};

int main() {
    Solution sol;
    string input;
    cout << "Enter a string: ";
    cin >> input;

    vector<char> arr(input.begin(), input.end());

    sol.reverseString(arr);

    cout << "Reversed string: [";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << (i == arr.size() - 1 ? "" : ", ");
    }
    cout << "]" << endl;

    return 0;
}
