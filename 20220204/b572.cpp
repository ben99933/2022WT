#include<bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
	cin.tie(0);
    
    int n;
    cin >> n;
    for(int t = 1;t<=n;t++) {
			int list[5];
			for(int i = 0;i<5;i++) {
				cin >> list[i];
			}
            list[1] += list[4];
            if(list[1] >= 60){
                int h = list[1]/60;
                list[0] += h;
                list[1]-= 60*h;
            }
            if(list[0] > list[2]){
                cout << "No" <<'\n';
            }else if(list[1] > list[3]){
                cout << "No" <<'\n';
            }else cout << "Yes" << '\n';
		}
    return 0;
}
