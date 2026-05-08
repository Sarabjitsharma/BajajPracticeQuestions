#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(const string& s, int l, int r) {
    while (l < r) {
        if (s[l] != s[r]) return false;
        l++;
        r--;
    }
    return true;
}

bool validPalindrome(string s) {
    int l = 0, r = s.length() - 1;

    while (l < r) {
        if (s[l] != s[r]) {
            return isPalindrome(s, l + 1, r) ||
                   isPalindrome(s, l, r - 1);
        }
        l++;
        r--;
    }

    return true;
}

int main() {
    string input;
    cout << "Enter string: ";
    cin >> input;

    bool result = validPalindrome(input);
    cout << "Result: " << (result ? "true" : "false") << endl;

    return 0;
}
