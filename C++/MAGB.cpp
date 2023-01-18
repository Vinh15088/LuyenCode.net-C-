#include<bits/stdc++.h>
using namespace std;

long merge(int a[], int l, int m, int r){
    int n1=m-l+1, n2=r-m;
    int L[n1], R[n2];
    for(int i=0; i<n1; i++) L[i] = a[l+i];
    for(int i=0; i<n2; i++) R[i] = a[m+1+i];
    int i=0, j=0, k=l;
    long res = 0;
    while(i<n1 && j<n2){
        if(L[i] <= R[j]) a[k++] = L[i++];
        else{
            a[k++] = R[j++];
            res += n1-i;
        }
    }
    while(i<n1) a[k++] = L[i++];
    while(j<n2) a[k++] = R[j++];
    return res;
}

long long merge_sort(int a[], int l, int r){
    long count = 0;
    if(l<r){
        int mid = (l+r)/2;
        count += merge_sort(a,l,mid);
        count += merge_sort(a,mid+1,r);
        count += merge(a,l,mid,r);
    }
    return count;
}
int main(){
    int n; cin >> n;
    int a[100001];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    cout << merge_sort(a,0,n-1);
    return 0;
}

// 10:07
// 14/01/2023
// Made by VinhSeo