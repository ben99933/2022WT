#include<bits/stdc++.h>

using namespace std;

void dfs(int layer,bool visited[],int number[],int len){
    
    if(layer == len){
        for(int i = 0;i<len;i++){
            cout << number[i];
        }
        cout << "\n";
    }else{
        for(int i = len-1;i>=0;i--){
            if(visited[i])continue;
            visited[i] = true;
            number[layer] = i+1;
            dfs(layer+1,visited,number,len);
            visited[i] = false;
        }

    }
}

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
