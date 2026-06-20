#include <bits/stdc++.h>
using namespace std;

int  main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        int score = 0;

       map <int , int> freq;

       for(int i=0 ; i<n ; i++){
        int x;
        cin >> x;

        freq[x]++;
       }

       int ans = 0;  
       for(auto p : freq){
        ans = ans + p.second / 2;
       }

       //auto: Automatically detects the data type, which in this case is pair<const int, int>.
       //p.second: Gets the total count (frequency) of that number.

        //.first = key
        //.second = value

        //.seconed gives the frequency here
        //.first is the value of the x

       cout << ans << "\n";
    }
    return 0;
}