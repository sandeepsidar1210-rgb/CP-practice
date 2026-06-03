#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int ans =0;
        string s;
        cin >> s;
        set <char> solved;

        for(char c : s){
            

            if(solved.count(c)){
                ans = ans + 1;
            }
            else{
                ans = ans + 2;
                solved.insert(c);
            }
        }
        cout << ans <<"\n";
    }
    return 0;
}