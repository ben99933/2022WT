#include<bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
	cin.tie(0);
    
    string s;
    cin >> s;
    int len = s.length();
    for(int i = 0;i<len;i++){
        for(int j = 0;j<len;j++){
            cout << s[(i+j)%len];
        }
        cout << '\n';
    }
    return 0;
}
