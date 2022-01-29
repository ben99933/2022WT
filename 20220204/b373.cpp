#include<bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
	cin.tie(0);
    
    int n;
    cin >> n;
    int array[n];
    for(int i = 0;i<n;i++){
        cin >> array[i];
    }
    int count = 0;
    for(int i = 0;i<n;i++){
        int fix = 0;
        for(int j = 0;j<n-i-1;j++){
            if(array[j] > array[j+1]){
                swap(array[j],array[j+1]);
                count++;
                fix++;
            }
        }
        if(fix = 0)break;
    }
    cout << count;
    return 0;
}
