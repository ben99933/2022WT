#include<bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
	  cin.tie(0);

    int a;
    int m;
    while(cin >> a >> m){
        
        int n = 0;
        while(!((n*n-n) > 2*(m-a*n))){
            n++;
        }
        //如果a本來就比m大 但是需要數 "1" 次 但n會是零
        if(n == 0)cout << 1 << "\n";
        else cout << n <<"\n";
    }
    return 0;
}
