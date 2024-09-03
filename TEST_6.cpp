#include<bits/stdc++.h>
using namespace std;
using ll = long long;
/*trING KHAONG L -> R CO BAN NHIEU SNT
int pri[1000001];
void sieve(){
    for(int i=0;i<1000001;i++){
        pri[i] = 1;
        pri[0] = pri[1] = 0;
    }
    for(int i=2;i<=sqrt(1000001);i++){
        if(pri[i]){
            for(int j=i*i;j<1000001;j+=i){
                pri[j] = 0;
            }
        }
    }
}
ll f[1000001] = {0};//mang de luu so luong cac snt tu 0 den 1tr
int main(){
    sieve();
    int t;cin>>t;
    int dem = 0;
    for(int i=2;i<1000001;i++){
        if(pri[i]) ++dem;
        f[i] = dem;
    } 
    while(t--){
        int l,r;cin >> l >> r;
        if(l==0) cout << f[r] << endl;
        else cout << f[r] - f[l-1] << endl;
    }
    return 0;
}*/

//Bai 2:tong sl cap so co tong > k
/*viet ham tra ve chi so dau tien cua phan tu > phan bu
int idx(int a[],int l,int r,int k){//Binary_sort: bien doi 
     int res = -1;
    while(l<=r){
        int m = (l+r)/2;
        if(a[m] > k){
            res = m;
            r = m-1;//chi so dau tien cua phan tu > phan bu(k-a[i])
        }
        else{
            l = m+1;
        }
    }
    return res;
}
int main(){
    int n,k;cin>>n>>k;
    int a[n];
    for(int &x : a) cin >> x;
    ll cnt = 0;
    for(int i=0;i<n;i++){
        int id = idx(a,i+1,n-1,k - a[i]);
        if(id != -1){
            cnt += n-id;
        }
    }
    cout << cnt << endl;
    return 0;
}*/

//Bai 3: dem cac phan tu la snt trne duong cheo chinh va duong cheo phu ma trna vuong,moi gt dem 1 lan
/*bool kt(int n){
    if(n<2) return false;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int n;int a[1005][1005];
void nhap(){
    cin >> n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> a[i][j];
        }
    }
}
int main(){
    nhap();
    set<int> s;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j || j == n-1-i){//duong cheo chinh || duong cheo phu
                if(kt(a[i][j])){
                    s.insert(a[i][j]);
                }
            }
        }
    }
    cout << s.size() << endl;
}*/

/*cho hai xau s1 ,s2 liet ke cac tu chi xh o s1 ma ko xh o s2 ko phan biet hoa thuong,moi tu lk 1 lantheo tt tu dien tang dan
void thuong(string &s){
    for(int i=0;i<(int)s.length();i++){
          s[i] = tolower(s[i]);
    }
}
int main(){
    string S,T;
    getline(cin,S);
    getline(cin,T);
    stringstream ss(S);string tam;
    set<string > s;
    while ( ss >> tam ){
        thuong(tam);
        s.insert(tam);
    }
    stringstream tt(T);
    while(tt >> tam){
        thuong(tam);
        if(s.find(tam) != s.end()){
            s.erase(tam);
        }
    }
    
    for(string x: s){
        cout << x << " ";
    }
}
*/
int main(){
    int a[6];
    for(int &x : a){
        cin >>x;
    }
    sort(a,a+6);
    for(int x :a){
        cout << x << " ";
    }
    return 0;
}