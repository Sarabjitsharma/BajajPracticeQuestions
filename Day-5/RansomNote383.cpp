#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> freq(26, 0);

        for (char c : magazine) {
            freq[c - 'a']++;
        }

        for (char c : ransomNote) {
            if (freq[c - 'a'] == 0) return false;
            freq[c - 'a']--;
        }

        return true;
    }
};

int main() {
    Solution sol;
    string ransomNote, magazine;
    cout << "Enter ransom note string: ";
    cin >> ransomNote;
    cout << "Enter magazine string: ";
    cin >> magazine;

    bool result = sol.canConstruct(ransomNote, magazine);
    cout << "Result: " << (result ? "true" : "false") << endl;

    return 0;
}
