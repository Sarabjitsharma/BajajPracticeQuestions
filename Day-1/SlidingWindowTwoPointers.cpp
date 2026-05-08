#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>

using namespace std;

int main() {
    string s = "aabac";
    int k = 2;

    int left = 0;
    int max_len = 0;

    unordered_map<char, int> map;

    for (int right = 0; right < s.length(); right++) {
        char ch = s[right];
        map[ch]++;

        while (map.size() > k) {
            char leftChar = s[left];
            map[leftChar]--;

            if (map[leftChar] == 0) {
                map.erase(leftChar);
            }
            left++;
        }

        if (map.size() == k) {
            max_len = max(max_len, right - left + 1);
        }
    }

    cout << max_len << endl;
    return 0;
}
