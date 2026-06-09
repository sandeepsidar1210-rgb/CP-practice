#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int x;
    int flag =1;

    for(int i =0 ; i<n; i++){
        cin >> x ;
        if(x == 1){
            flag = 0;
            break;
        }
        else{
            continue;
        }
    }

    if(flag){
        cout << "EASY";
    }else{
        cout << "HARD";
    }
    return 0;
}