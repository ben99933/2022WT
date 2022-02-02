#include<bits/stdc++.h>

using namespace std;


int main(){

    ios::sync_with_stdio(false);
	cin.tie(0);
    
    int k = 0;
    int d = 0;
    int a = 0;
    int sequance = 0;
    int n;
    cin >> n;
    for(int i = 0;i<n;i++){
        string s;
        cin >> s;
        if(s=="Get_Kill"){
            k++;
            sequance++;
            switch (sequance)
            {
            case 1:
            case 2:
                cout << "You have slain an enemie."<<'\n';
                break;
            case 3:
                cout << "KILLING SPREE!"<<'\n';
                break;
            case 4:
                cout << "RAMPAGE~" << '\n';
                break;
            case 5:
                cout << "UNSTOPPABLE!" << '\n';
                break;
            case 6:
                cout << "DOMINATING!" << '\n';
                break;
            case 7:
                cout << "GUALIKE!" << '\n';
                break;
            case 8:
                cout << "LEGENDARY!" << '\n';
                break;
            default:
                cout << "LEGENDARY!" << '\n';
                break;
            }
        }else if(s=="Get_Assist"){
            a++;
        }else if(s =="Die"){
            d++;
            if(sequance >=3)cout <<"SHUTDOWN." <<'\n';
            else cout <<"You have been slained."<<'\n';
            sequance = 0;
        }
    }
    cout << k <<"/" << d <<"/"<<a; 

    return 0;
}
