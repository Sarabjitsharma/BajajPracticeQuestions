#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> arr = {2, 4, 6, 8, 10, 12, 14, 16};
    int target = 12;
    int low = 0, high = arr.size() - 1;
    bool found = false;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            cout << "Element found at index: " << mid << endl;
            found = true;
            break;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    if (!found) {
        cout << "Element not found in the array." << endl;
    }
    return 0;
}
