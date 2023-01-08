#include<bits/stdc++.h>
using namespace std;

int main(){
    string a, b; cin >> a >> b;
    while(a.size() > b.size()) b = '0' + b;
    while(b.size() > a.size()) a = '0' + a;
    string answer;
    int nho = 0, result = 0;
    for(int i=a.size()-1; i>=0; i--){
        result = (a[i] - 48) + (b[i] - 48) + nho;
        nho = result / 10;
        answer += result%10 + 48;
    }
    if(nho != 0) answer += nho + 48;
    for(int i=answer.size()-1; i>=0; i--){
        cout << answer[i];
    }
    return 0;
}