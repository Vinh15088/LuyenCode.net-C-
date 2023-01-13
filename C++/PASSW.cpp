#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    cin.ignore();
    while(t--){
        string s; getline(cin, s);
        bool type1 = false;
        bool type2 = false;
        bool type3 = false;
        for(int i=0; i<s.size(); i++){
            if(type1 == false && s[i]>= 'A' && s[i] <= 'Z') type1 = true;
            if(type2 == false && s[i]>= 'a' && s[i] <= 'z') type2 = true;
            if(type3 == false && s[i]>= '0' && s[i] <= '9') type3 = true;
        }
        int count_T = 0;
        if(type1==true) ++count_T;
        if(type2==true) ++count_T;
        if(type3==true) ++count_T;
        if(count_T == 3) count_T = 5;
        int l = s.size();
        int count_S = min(5,max(l-5,0));
        cout << count_T + count_S << " ";
    }
    return 0;
}

// 23:12
// 13/01/2023
// Made by VinhSeo