#include<bits/stdc++.h>
using namespace std;

typedef vector<int> v;

// Nap chong toan tu nhap luong, dung de nhap so lon
istream &operator >> (istream &cin, v &a){
    string s; cin >> s;
    a.clear();
    for(int i=0; i<s.size(); ++i){
        a.push_back(s[i] - '0');
    }
    return cin;
}

// Nap chong toan tu trich luong, dung de in ra so lon
ostream &operator << (ostream &cout, const v &a){
    for(auto x:a){
        cout << x;
    }
    return cout;
}

// xoa cac so 0 o dau
void del_zero(v &a){
    reverse(a.begin(), a.end());
    while(a.size() >= 2){
        if(a.back() == 0) a.pop_back();
        else break;
    }
    reverse(a.begin(), a.end());
}

v int_to_v(int n){
    v res;
    if(n==0) {
        res.push_back(n);
        return res;
    }
    while(n){
        res.push_back(n%10);
        n/=10;
    }
    return res;
}

// Nhan 2 so lon
v operator *(v a, v b){
    // dao nguoc 2 so de tien tinh toan
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    v c(a.size() + b.size() + 1); // tao vector de luu kqua 
    for(int i=0; i<(int) a.size(); ++i){
        for(int j=0; j<(int) b.size(); ++j){
            c[i+j] += (a[i]*b[j]);
            c[i+j+1] += (c[i+j] / 10);
            c[i+j] %= 10;
        }
    }
    // xu ly not phan con du chua duoc cong
    c.push_back(0);
    for(int i=0; i<(int) c.size()-1; ++i){
        c[i+1] += (c[i]/10);
        c[i] %= 10;
    }

    // Dao nguoc mang c va xoa cac so 0 o dau
    reverse(c.begin(), c.end());
    del_zero(c);
    return c;
}

int main(){
    v a,b;
    cin >> a >> b;
    cout << a*b;
    return 0;
}

// 11:31
// 13/01/2023
// Made by VinhSeo

// Cach 2
#include<bits/stdc++.h>
using namespace std;

string Mul(string s1, string s2){
    int l1 = s1.size();
    int l2 = s2.size();
    int l = l1 + l2;
    vector<int> a, b;
    for(int i=0; i<l1; i++) a.push_back(int(s1[i]-'0'));
    for(int i=0; i<l2; i++) b.push_back(int(s2[i]-'0'));
    vector<vector<int>> res(l2);
    int index = 0;
    for(int i=l2-1; i>=0; i--){
        int t=0;
        while(t<index){
            res[index].push_back(0);
            t++;
        }
        int nho = 0, so = 0;
        for(int j=l1-1; j>=0; j--){
            so = a[j]*b[i] + nho;
            res[index].push_back(so%10);
            nho = so/10;
        }
        if(nho>0) res[index].push_back(nho);
        while(res[index].size() < l) res[index].push_back(0);
        reverse(res[index].begin(), res[index].end());
        index++;
    }

    int nho = 0;
    string ans = "";
    for(int j=res[0].size()-1; j>=0; j--){
        int so = nho;
        for(int i=0; i<res.size(); i++){
            so += res[i][j];
        }
        ans = char(so%10 + '0') + ans;
        nho = so/10;
    }
    if(nho > 0) ans = char(nho + '0') + ans;
    while(ans[0]=='0') ans.erase(ans.begin());
    return ans;
}

int main(){
    string a,b; cin >> a >> b;
    cout << Mul(a,b) << endl;
    return 0;
}