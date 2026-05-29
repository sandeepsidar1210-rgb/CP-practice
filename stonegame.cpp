#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>> t;
    while(t--){
        int n;
        cin>> n;
        vector <int> v(n);
        for(int i = 0; i<n ; i++){
            cin>>v[i];
        }

       
        int max_index = 0;
        
        int min_index = 0;

        for (int i =1 ; i< n ;i++){
            if( v[i] > v[max_index] )
            {
                max_index = i;
            }
            if ( v[i] < v[min_index] )
            {
                min_index = i;
            }
            else{
                continue;
            }
            
        }


        int left = max(max_index , min_index) + 1;
        int right = n - min(max_index , min_index);
        int both  = min(max_index, min_index) + 1
           + n - max(max_index, min_index);
        
        cout << min(left, min(right, both)) << "\n";
        
    
}
return 0;
}