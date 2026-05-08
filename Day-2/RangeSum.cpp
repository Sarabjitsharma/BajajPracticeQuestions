#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> arr = {2, 4, 1, 3, 5};
    int n = arr.size();
    if (n == 0) return 0;
    vector<int> prefix(n);
    prefix[0] = arr[0];
    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] + arr[i];
    }
    // {2, 6, 7, 10, 15}
    int l = 1, r = 3;
    int sum;
    if (l == 0) {
        sum = prefix[r];
    } else {
        sum = prefix[r] - prefix[l - 1];
    }
    cout << sum << endl;
    return 0;
}
