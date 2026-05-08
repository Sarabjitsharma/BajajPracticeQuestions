#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> arr = {1, 2, 3, 4, 6};
    int target = 6;
    int left = 0;
    int right = arr.size() - 1;
    bool found = false;
    
    while (left < right) {
        int sum = arr[left] + arr[right];
        if (sum == target) {
            found = true;
            break;
        } else if (sum < target) {
            left++;
        } else {
            right--;
        }
    }
    
    cout << (found ? "true" : "false") << endl;
    return 0;
}
