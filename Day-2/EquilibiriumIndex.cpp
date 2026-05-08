#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> arr = {2, 4, 6, 8, 10};
    int n = arr.size();
    if (n == 0) {
        cout << "No Equilibrium Found" << endl;
        return 0;
    }
    vector<int> prefix(n);
    vector<int> suffix(n);
    prefix[0] = arr[0];
    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] + arr[i];
    }
    suffix[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        suffix[i] = suffix[i + 1] + arr[i];
    }
    for (int i = 0; i < n; i++) {
        int leftSum = (i == 0) ? 0 : prefix[i - 1];
        int rightSum = (i == n - 1) ? 0 : suffix[i + 1];
        if (leftSum == rightSum) {
            cout << "Equilibrium Index =" << i << endl;
            return 0;
        }
    }
    cout << "No Equilibrium Found" << endl;
    return 0;
}
