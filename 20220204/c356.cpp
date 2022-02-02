#include<bits/stdc++.h>

using namespace std;



int main(){

    ios::sync_with_stdio(false);
	cin.tie(0);
    
    int n;
    cin >> n;
    char c;
    for(int i = 0;i<n*n;i++){
        cin >> c;
        if(i % (n+1) == 0)cout<<c;
    }
    
    return 0;
}
