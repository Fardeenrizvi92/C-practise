#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    if(s.length()<11){ cout<<"invalid";
        return 0;}

    for(int i=0;i<s.length();i++){
        if(!(isdigit(s[i]) && s[3]=='-' && s[7]=='-')){
        cout<<"invalid";
        break;
        }
        else cout<<"valid";

    }
}
