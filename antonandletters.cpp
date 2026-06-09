#include <bits/stdc++.h>
using namespace std;

int main(){
    string c;
    getline(cin, c);

    set <char> st;

   for(int i =0 ; i < c.size() ; i++){
    if( c[i] == '}'){
        break;
    }
    if( c[i] == '{' || c[i] == ' ' || c[i] == ','){
        continue;
    }
    else{
        st.insert(c[i]) ;   
    }
   }

   cout << st.size() ;
   
}