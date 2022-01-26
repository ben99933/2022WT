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
    while(cin >> n){
        bool visited[n];
        int number[n];
        for(int i = 0;i<n;i++){
            visited[i] = false;
            number[i] = 0;
        }
        dfs(0,visited,number,n);
    }
    
    return 0;
}
