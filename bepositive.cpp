#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        vector <int> a(n);

        // int product = 1;
        int neg_count = 0;
        int zero_count = 0;

        for (int i =0 ; i< n ; i++){
            cin >> a[i];
            if(a[i] == 0){
                zero_count++;
            }
            if(a[i] == -1){
                neg_count++;
            }
            // product = product * a[i];

        }

        int count = 0;
        if( zero_count > 0 ){
            count = count + zero_count;
       }
        if (neg_count % 2 != 0)
       {
         count = count + 2;
       }

       cout << count << "\n";
       
}
return 0;
}