#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        long long a[200005];
        long long sum = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }

        if (sum % n != 0) {
            cout << "NO" << endl;
            continue;
        }

        long long avg = sum / n;
        long long prefix = 0;
        bool possible = true;

        for (int i = 0; i < n; i++) {
            prefix += a[i];

            if (prefix < (i + 1) * avg) {
                possible = false;
                break;
            }
        }

        if (possible)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}