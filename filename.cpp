#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    char s[101];
    char b[101];
    for(int i =0; i<n ;i++){
        cin>>s[i];
    }

    bool cond = true;
    int j =0;
    int ans_count = 0;
    for(int i=0; i<n-2 ;i++){
        if(s[i] == 'x' && s[i+1] == 'x' && s[i+2] == 'x'){
            ans_count++;
            continue;
        }
        
    }
cout<< ans_count << endl;
return 0;
}