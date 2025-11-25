#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int sum=0;
    cin >> s;   
    //文字列の各文字にアクセス
    if(s[0] == '1') sum++;//オペランドがchar型なので''で囲む
    if(s[1] == '1') sum++;
    if(s[2] == '1') sum++;
    
    cout << sum << endl;
    
    return 0;
}