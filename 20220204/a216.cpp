#include<bits/stdc++.h>

using namespace std;
long long f(long long n){
    return (1+n)*n/2;
}
long long g(long long n){
    if(n == 1)return 1;
    return f(n) + g(n-1);
}
int main(){

    ios::sync_with_stdio(false);
	cin.tie(0);
    long long n;
    while(cin >> n){
        cout << f(n) << " " << g(n) << "\n";
    }
    return 0;
}
