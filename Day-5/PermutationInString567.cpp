#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool isZero(const vector<int>& freq) {
    for (int x : freq) {
        if (x != 0) return false;
    }
    return true;
}

bool checkInclusion(string s1, string s2) {
    if (s1.length() > s2.length()) return false;

    vector<int> freq(26, 0);

    for (char c : s1) {
        freq[c - 'a']++;
    }

    int left = 0;

    for (int right = 0; right < s2.length(); right++) {
        freq[s2[right] - 'a']--;

        if (right - left + 1 > s1.length()) {
            freq[s2[left] - 'a']++;
            left++;
        }

        if (isZero(freq)) return true;
    }

    return false;
}

int main() {
    string s1, s2;
    cout << "Enter s1: ";
    cin >> s1;
    cout << "Enter s2: ";
    cin >> s2;

    bool result = checkInclusion(s1, s2);
    cout << "Result: " << (result ? "true" : "false") << endl;

    return 0;
}
