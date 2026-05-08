#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> arr = {2, 1, 5, 1, 3};
    int k = 7;
    int left = 0;
    int sum = 0;
    int maxLen = 0;
    
    for (int right = 0; right < arr.size(); right++) {
        sum += arr[right];
        while (sum > k) {
            sum -= arr[left];
            left++;
        }
        maxLen = max(maxLen, right - left + 1);
    }
    cout << maxLen << endl;
    return 0;
}
