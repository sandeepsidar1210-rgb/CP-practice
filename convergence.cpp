#include <bits\stdc++.h>


using namespace std;

int main() {
    int t;
    if (cin >> t) {
        while (t--) {
            int n;
            cin >> n;
            
            vector<int> a(n);
            for (int i = 0; i < n; ++i) {
                cin >> a[i];
            }

            int min_calls = n;

            
            for (int i = 0; i < n; ++i) {
                int target = a[i];
                int left_count = 0;
                int right_count = 0;
                
                for (int j = 0; j < n; ++j) {
                    if (a[j] < target) {
                        left_count++;
                    } else if (a[j] > target) {
                        right_count++;
                    }
                }
                
                
                int current_calls = max(left_count, right_count);
                min_calls = min(min_calls, current_calls);
            }
            
            cout << min_calls << "\n";
        }
    }
    
    return 0;
}