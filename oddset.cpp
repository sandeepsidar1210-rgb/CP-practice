#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;


    while(t--){
        int even_count=0;
        int odd_count =0;
        int n;
        int x;

        cin >> n;
        for(int i=0; i< 2*n; i++){
            cin >> x;
             if(x % 2 == 0){
                even_count++;
             }
             else{
                odd_count++;
             }
        }
        
        if(even_count == odd_count){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}