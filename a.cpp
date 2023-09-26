#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int min_b = a[n - 1] + 1; // Initialize min_b to a value greater than the last element of a

        for (int i = n - 1; i >= 0; i--) {
            if (a[i] > min_b) {
                break;
            }
            min_b = a[i];
        }

        cout << min_b + 1 << endl;
    }

    return 0;
}
