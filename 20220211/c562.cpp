#include<bits/stdc++.h>

using namespace std;

int func(string s){
    int sum = 0;
    for(int i = 0;i<s.length();i++){
        switch (s[i])
        {
        case '0':
        case '6':
        case '9':
            sum+=1;
            break;
        case '8':
            sum+=2;
            break;
        default:
            break;
        }
    }
    return sum;

}

int main(){

    ios::sync_with_stdio(false);
	cin.tie(0);
    
    string s;
    while(cin >> s){
        cout << func(s)<<'\n';
    }
    return 0;
}
