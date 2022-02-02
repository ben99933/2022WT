#include<bits/stdc++.h>

using namespace std;

bool contain(string ans,char c){
    for(int i = 0;i<ans.length();i++){
        if(ans[i] == c) return true;
    }
    return false;
}

int main(){

    ios::sync_with_stdio(false);
	cin.tie(0);
    
    string ans;
    int n;
    cin >> ans;
    cin >> n;
    for(int i = 0;i<n;i++){
        string input;
        cin >> input;
        int a = 0;
        int b = 0;
        for(int i = 0;i<input.length();i++){
            if(input[i] == ans[i]){
                a++;
            }else if(contain(ans,input[i])){
                b++;
            }
        }
        cout << a<<"A"<<b<<"B"<<'\n';
    }
    
    return 0;
}
