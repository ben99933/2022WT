#include<bits/stdc++.h>

using namespace std;
string toBinary(int n){
    string s = "";
    while(n >=1){
        if(n%2 == 0)s += "0";
        else s += "1";
        n/=2;
    }
    
    return s;
}
int main(){

    ios::sync_with_stdio(false);
	cin.tie(0);
    int n;
    while(cin >> n){
        if(n == 0)break;
        int index = 0;
        string bin = toBinary(n);
        int len = bin.length();
        while(index != len && bin[index] == '1'){
            index++;
        }
        cout << index << "\n";
    }
    return 0;
}
