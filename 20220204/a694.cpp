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
        
        int map[n][n];
        int dp[n][n];
        for(int i = 0;i<n;i++){
            for(int j = 0;j<n;j++){
                cin >> map[i][j];

                if(i == 0 && j ==0){
                    dp[i][j] = map[i][j];
                }else if(i == 0 && j != 0){
                    dp[i][j] = map[i][j] + dp[i][j-1];
                }else if(j == 0 && i != 0){
                    dp[i][j] = map[i][j] + dp[i-1][j];
                }else{
                    dp[i][j] = map[i][j] + dp[i][j-1] + dp[i-1][j] - dp[i-1][j-1];
                }
            }
        }
        
        for(int i = 0;i<m;i++){
            int a;
            int b;
            int c;
            int d;
            cin >> a >> b >> c >> d;
            if(a-1 == 0 && b-1 == 0){
                cout<< dp[c-1][d-1] << "\n";
            }else if(a-1 == 0 && b-1 != 0){
                cout << (dp[c-1][d-1] - dp[c-1][b-2]) <<"\n";
            }else if(a-1 != 0 && b-1 == 0){
                cout << (dp[c-1][d-1] - dp[a-2][d-1]) << "\n";
            }else{
                cout << (dp[c-1][d-1]- dp[a-2][d-1]- dp[c-1][b-2] + dp[a-2][b-2]) << "\n";
            }
            
        }
    }
    
    
    return 0;
}
