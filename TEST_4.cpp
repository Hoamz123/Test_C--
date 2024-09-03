#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int prime[1000001];
void sieve(){
    for(int i=0;i<1000001;i++){
        prime[i] = 1;
        prime[0] = 0;
        prime[1] = 0;
    }
    for(int i=2;i<=1000;i++){
        if(prime[i]){
            for(int j=i*i;j<1000001;j+=i){
                prime[j] = 0;
            }
        }
    }
}
/*int main(){
    sieve();
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int res = 0;ll ans = 0; int dem = 0;int idx = 0;
    ll sum = 0;
    for(int i=0;i<n;i++){
        if(prime[a[i]]){
            sum += a[i];
            dem++; 
        }
        else{
            dem = 0;
            sum = 0;
        }
        if(dem > res){
            res = dem;
            ans = sum;
            idx = i - dem + 1;
        }
        if(dem == res){
            if(sum > ans){
                ans = sum;
                idx = i - dem + 1;
            }
        }
    }
    cout << res << " " << ans << endl;
    for(int i=0;i<res;i++){
        cout << a[i + idx] << " ";
    }
    return 0;
}*/
    
//two sum
/*int main(){
    int n;cin>>n;
    int a[n];
    for(int &x :a){
        cin>>x;
    }
    int tg ;cin>>tg;
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++){
        int pb = tg - a[i];
        if(mp.find(pb) != mp.end()){
            cout << mp[pb] << " " << i <<endl;
        }
        mp[a[i]] = i;
    }
    return 0;
}*/
//do chenh lech nho nhat giua hai phan tu
int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a){
        cin >> x;
    }
    sort(a,a+n);
    int res = 1e9;
    for(int i=1;i<n;i++){
        res = min(res,a[i] - a[i-1]);
    }
    cout << res << endl;
    return 0;
}
