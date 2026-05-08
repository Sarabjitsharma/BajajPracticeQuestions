#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> arr = {2, 1, 5, 1, 3, 2};
    int k = 3;
    int windowSum = 0;
    for (int i = 0; i < k && i < arr.size(); i++) {
        windowSum += arr[i];
    }
    int maxSum = windowSum;
    for (int right = k; right < arr.size(); right++) {
        windowSum += arr[right];
        windowSum -= arr[right - k];
        maxSum = max(maxSum, windowSum);
    }
    cout << "maximum Sum =" << maxSum << endl;
    return 0;
}
