#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> a(n);
    int count = 1;
    int max_count = 1;

    for(int i =0 ; i< n ; i++){
        cin >> a[i];
    }

    for (int i =0 ; i< n-1 ; i++){
        if( a[i] < a[i+1]){
            count++;
        
        if(count > max_count){
            max_count = count ;
           }
        }
        else{
           
           count = 1;
        }  
    }

    cout << max_count ;

}