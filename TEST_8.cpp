#include<bits/stdc++.h>
using namespace std;
using ll = long long;
/*Bai 1:day so 23 la day so F[1] = 1 = F[2];F[n] = 2*F[n-1] + 3*F[n-2];
ll ds[1000001];
void make_ds_23(){
    ll mod = 1e9 + 7;
    ds[0] = 0;
    ds[1] = ds[2] = 1;
    for(int i=3;i<1000001;i++){
        ds[i] = (2*ds[i-1] + 3*ds[i-2]) % mod;
    }
}
int main(){
    make_ds_23();
    int n;cin>>n;
    cout << ds[n] << endl; 
}*/

/*Bai 2:dem xem trong amgn a[n] co bao nhieu cap co tong la 1 so chia het cho 28
int main(){
    int n;cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    map<int,int>mp;
    ll ans = 0;
    for(int i=0;i<n;i++){
        mp[a[i]%28]++;
    }
    ans += mp[0]*(mp[0]-1)/2;
    ans += mp[14]*(mp[14]-1)/2;
    for(int i=1;i<14;i++){
         ans += mp[i]*mp[28-i];
    }
    cout << ans << endl;
    return 0;
}*/
  
/*Bai 3:mang 2 chieu : hay in ra cac so xuat hien o moi hang theo tt tu be den lon( moi so 1 lan)
int a[1005][1005];
int main(){
    int n;cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin >> a[i][j];
        }
    }
    map<int,int> mp;
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(mp[a[i][j]] == i-1){
                mp[a[i][j]]  = i;
            }
        }
    }
    bool check = false;
    for(auto it: mp){
        if(it.second == n){
            check = true;
            cout << it.first << " ";
        }
    }
    if(!check) cout << "Not found"<< endl;
    return 0;
}*/

/*bai 4:rut gon da thuc
void solve(string s){
    stringstream ss(s);
    string temp;
    map <int,int> mp;
    while(ss >> temp){
        if(temp != "+"){
            //lay ra hs
            int hs = 0,sm = 0;int i=0;
            while(i<(int)temp.size() && isdigit(temp[i])){
                hs = hs * 10 + temp[i] - '0';
                i++;
            }
            i+=2;//lay sang so mu
            while(i<(int)temp.size() && isdigit(temp[i])){
                sm = sm * 10 + temp[i] - '0';
                i++;
            }
            mp[sm] += hs;
        }
    }
    for(auto it = mp.begin();it!=mp.end();it++){
        cout << it->second << "x^" << it->first ;
        if(*it != *mp.rbegin()) cout << " + ";
    }
}
int main(){
    int t;cin>>t;cin.ignore();
    while(t--){
        string bt;getline(cin,bt);
        solve(bt);
        cout << endl;
    }
}*/


