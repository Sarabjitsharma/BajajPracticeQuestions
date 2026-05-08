#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> arr = {1, 3, 4, -1, -5, 2, 6, 0};
    int totalSum = 0;
    for (int num : arr) {
        totalSum += num;
    }
    if (totalSum % 3 != 0) {
        cout << "false" << endl;
        return 0;
    }
    int partSum = totalSum / 3;
    int currentSum = 0;
    int count = 0;
    for (int i = 0; i < arr.size(); i++) {
        currentSum += arr[i];
        if (currentSum == partSum) {
            count++;
            currentSum = 0;
        }
    }
    cout << (count >= 3 ? "true" : "false") << endl;
    return 0;
}
