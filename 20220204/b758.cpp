#include<bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
	cin.tie(0);
    
    int h,m;
    cin >> h >> m;
    m += 150;
    if(m >= 60){
        int hour = m/60;
        h += hour;
        m -= hour*60;
    }
    if(h >= 24){
        h %= 24;
    }
    if(h < 10)cout << "0";
    cout<<h << ":";
    if(m < 10)cout <<"0";
    cout<<m;
    return 0;
}
