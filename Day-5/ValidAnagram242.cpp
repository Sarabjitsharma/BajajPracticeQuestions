#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;

        vector<int> freq(26, 0);

        for (char c : s) {
            freq[c - 'a']++;
        }

        for (char c : t) {
            freq[c - 'a']--;
        }

        for (int x : freq) {
            if (x != 0) return false;
        }

        return true;
    }
};

int main() {
    Solution sol;
    string s, t;
    cout << "Enter first string: ";
    cin >> s;
    cout << "Enter second string: ";
    cin >> t;

    bool result = sol.isAnagram(s, t);
    cout << "Result: " << (result ? "true" : "false") << endl;

    return 0;
}
