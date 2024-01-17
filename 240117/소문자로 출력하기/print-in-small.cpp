#include <bits/stdc++.h>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string s;
    cin>>s;
    for(auto c:s){
        if(c>='a' && c<'z')
            cout<<c;
        if(c>='A' && c<'Z'){
            char a = c + 32;
            cout<<a;
        }
            
    }

    return 0;
}