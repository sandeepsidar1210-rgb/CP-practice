#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    long long ans=0;
    while(t--){
        int n ;
        cin >> n;

        vector <int> a(n);

        for(int i=0 ; i< n ; i++){
            cin >> a[i];
        }
            int mx =0;
            for(int j =0 ; j< n ; j++){
                mx = max(mx , a[j]);
            }
        cout << (n * mx) <<"\n";   
    }
    return 0;
}