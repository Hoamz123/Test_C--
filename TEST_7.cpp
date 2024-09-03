#include<bits/stdc++.h>
using namespace std;
using ll = long long;
/*bai 1:tim thua so nto co so mu lon nhat (neu trung mu thi chon so nho hon)

int main(){
    ll n;cin>>n;
    set<ll> s;
    int res = 0;
    for(ll i=2;i<=sqrt(n);i++){
        int dem = 0;
        while(n%i==0){
            dem++;
            n/=i;
        }
        if(dem > res){
            s.clear();
            res = dem;
            s.insert(i);//chi de luu 1 phan tu co mu lon nhat thoi
        }
    }
    if(s.empty()){
        cout << n << " " << 1 << endl;
    }
    else {
        cout << *s.begin() << " " << res << endl;
    }
}
*

//Bai 2:dem so thao tac giup mang tang chat
int main(){
    int n,d;cin>>n>>d;
    ll a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    ll ans = 0;
    for(int i=1;i<n;i++){
        if(a[i] < a[i-1]){
            ll dv = a[i - 1] - a[i] +1;
            ll thaotac = 0;
            if(dv%d==0){
                thaotac = dv/d;
            }
            else{
                thaotac = dv/d + 1;
            }
            ans += thaotac;
            a[i] += thaotac*d;
        }
    }
    cout << ans << endl;
}
//cho mang nhi phan toan 0 va 1 tinh chu vi cua mien so 1 ,chu vi la tong so canh bao quanh,moi o la 1 hv don vi
/*bai 3:
int n,m,a[105][105],b[105][105];
int cnt;
void nhap(){
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> a[i][j];
            b[i][j] = a[i][j];
        }
    }
}
int x[4] = {-1,0,0,1};
int y[4] = {0,-1,1,0};
void loang(int i,int j){
    a[i][j] = 0;
    //dem xem o a[i][j] co bn canh chung voi no
    int dem = 0;
    for(int k=0;k<4;k++){
        int i1 = i+ x[k];
        int j1 = j + y[k];
        if(i1 >= 0&& i1 < n && j1 >=0 && j1 < m && b[i][j] ==1){
            dem++;
        }
    }
    cnt += 4  - dem;
    for(int k=0;k<4;k++){
        int i1 = i + x[k];
        int j1 = j + y[k];
        if(i1 >= 0&& i1 < n && j1 >=0 && j1 < m && a[i][j] ==1){
           loang(i1,j1);
        }
    }
}
int main(){
    nhap();
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]){
                cnt = 0;
                loang(i,j);
                cout << cnt << " ";
            }
        }
    }
}*/

//
/*
ma<string,int> mp;
int solve(string s){
    int ans = 0;
    for(int i=0;i<(int)s.length();i++){
        if(isalpha(s[i])){
            string nt = "";
            while(i < s.length()){
                nt += s[i];
                i++;
            }
            int cnt = 0;
            while(i < s.length() && isdigit(s[i])){
                cnt = cnt * 10 + s[i] - '0';
                i++;
            }
            ans += mp[nt]*cnt;
            --i;
        }
    }
    return ans;
}
int main(){
    for(int i=0;i<10;i++){
        string s;int x;
        cin >> s >> x;
        mmp[s] = x;
    }
    int t;cin>>t;
    while(t--){
        string s;cin >> s;
        cout << solve(s) << endl;
    }
}*/