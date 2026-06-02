#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        cout << n / 2 << "\n";
    }

    return 0;
}


//we wanted highest gcd so let it be g then the min distinct multiples of g are g and 2g and that should be less than the n
//so the condition becomes n > 2g and hence the max gcd we can get is the [n/2].