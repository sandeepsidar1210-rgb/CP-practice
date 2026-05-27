#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t ;
    while(t--){
        long long n, k;
        char s[200005];
        cin >> n >> k;
        
        for(int i =0; i<n ; i++){
            cin>>s[i];
        }

        int j = 0;
        int count = 0  ;


        while( j < n ){
            if(s[j] == 'B'){
                j = j + k;
                count++;
            }
            else
            {
                j++;
            } 
        }
        cout << count << "\n";
    }
    return 0;

}