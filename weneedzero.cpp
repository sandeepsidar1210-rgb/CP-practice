#include <iostream>
using namespace std;

int main(){
    int t;
    cin>> t;

    while(t--){
        int n;
        int sum=0;
        int xor_sum=0;
        cin >> n;

        long long a[200005];
       
        for(int i=0; i<n ; i++){
            cin >> a[i];
            sum += a[i];
            xor_sum ^= a[i]; 
        }

        if(n % 2 == 0){
            if(xor_sum == 0){
                cout << "0\n";
            }
            else{
                cout << "-1\n";
            }
        }
        else{
            cout << xor_sum << "\n";
        }

    }
    return 0;
}