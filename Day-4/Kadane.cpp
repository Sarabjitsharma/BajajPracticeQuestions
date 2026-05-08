#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> arr = {2, 4, 6, -5, 8, 9, 10};
    int currentSum = arr[0];
    int maxSum = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        currentSum = max(arr[i], currentSum + arr[i]);
        maxSum = max(maxSum, currentSum);
    }
    cout << "maximum Subarray sum is " << maxSum << endl;
    return 0;
}
