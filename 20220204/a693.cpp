#include<bits/stdc++.h>

using namespace std;



int main(){

    ios::sync_with_stdio(false);
	  cin.tie(0);
    
    
    int n;
    int m;
    while(cin >> n >> m){
        
        int map[n];
        int dp[n];
        for(int i = 0;i<n;i++){
            cin >> map[i];
            if(i == 0)dp[0] = map[0];
            else dp[i] = map[i] + dp[i-1];
        }
        for(int i = 0;i<m;i++){
            int a;
            int b;
            cin >> a >> b;
            cout << (dp[b-1] - dp[a-1] + map[a-1]) << "\n";
            
        }
    }
    
    
    return 0;
}
