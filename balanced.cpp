#include <bits/stdc++.h>
using namespace std;

int main(){
    int t ;
    cin>> t;



    while(t--){
        int n;
        cin >> n;

        int even_sum = 0;
        int odd_sum = 0;

        vector <int> v;

        int k = n / 2;

        if (k % 2 != 0) {
            cout << "NO\n";
            continue;
        }

        else{
          cout << "YES\n";

          for(int  i =2; i<= n ; i = i+ 2){
            if((int)v.size() == k){
                break;
            }else{
                even_sum = even_sum + i;
                v.push_back(i);
            }
          }

          for(int i=1; i< 2* (k-1); i=i+2){ // nth odd num = 2(n)-1 so (k-1)th odd num = 2(k-1)-1 but we want to create condition to exlude so 2 step ahead for next odd number so 2(k-1)-1 + 2 that gives 2(k-1);
                odd_sum += i;
                v.push_back(i);
          }

          int last_odd = even_sum - odd_sum;
          v.push_back(last_odd);
        
        
          for (int x : v) {
                cout << x << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}
