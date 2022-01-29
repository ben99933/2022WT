#include<bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
	cin.tie(0);
    
    int t;
    cin >> t;
    for(int time = 1;time <=t;time++){
        int m,n;
        cin >> m >> n;
        int map[m*n];
        int len = m*n;
        for(int i = 0;i<len;i++){
            cin >> map[i];
        }
        bool isEqual = true;
        for(int i = 0;i<len;i++){
            if(map[i] != map[len-i-1]){
                isEqual = false;
                break;
            }
        }
        if(isEqual)cout << "go forward" << '\n';
        else cout << "keep defending" << '\n';
    }
    return 0;
}
