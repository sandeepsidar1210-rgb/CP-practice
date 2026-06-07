#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    long long n;
    while(t--){
        long long sum = 0;
        cin >> n;
        while(n > 0){
            sum = sum + n;
            n = n / 2;
        }

        cout << sum << "\n";

    }
    return 0;
}