#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> arr = {8, -1, 3, 4};
    int totalSum = 0;
    int maxSum = arr[0], currentMax = arr[0];
    int minSum = arr[0], currentMin = arr[0];
    for (int i = 0; i < arr.size(); i++) {
        totalSum += arr[i];
        if (i > 0) {
            currentMax = max(arr[i], currentMax + arr[i]);
            maxSum = max(maxSum, currentMax);
            currentMin = min(arr[i], currentMin + arr[i]);
            minSum = min(minSum, currentMin);
        }
    }
    int circularSum = totalSum - minSum;
    cout << "Maximum circular subarray sum is " << max(maxSum, circularSum) << endl;
    return 0;
}
