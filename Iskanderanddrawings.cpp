#include <bits/stdc++.h>
using namespace std;

int main (){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        string s;
        cin >> s;
        int max_length = 0;
        int count = 0;

        for(int i =0; i<n ; i++){

            if(s[i] == '#' ){
                count++;
            }else{

                if(count > max_length){
                    max_length = count;
                }
                count=0;        
            }    
        }

        max_length = max(max_length, count);

        if(max_length % 2 == 0){
            cout << max_length / 2 << "\n";
        }else{
            cout << max_length / 2 + 1 << "\n";
        }
    }
    return 0;
}