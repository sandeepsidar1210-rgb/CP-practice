#include <bits/stdc++.h>
using namespace std;

int main(){
    int t ;
    cin >> t;

    int x, y;
    while(t--){
        cin >> x >> y;

        if(x % y == 0 ){
            cout << "YES"<<"\n";
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}