#include<bits/stdc++.h>
using namespace std;
#define ll long long
/*Bai 1:liet ke nhung so nguyen to + tribonaci trong doan a-> b
int prime[1000001];
void sieve(){
    for(int i=0;i<1000001;i++){
        prime[i] = 1;
        prime[0] = prime[1] = 0;
    }
    for(int i=2;i<=1000;i++){
        if(prime[i]){
            for(int j=i*i;j<1000001;j+=i){
                prime[j] = 0;
            }
        }
    }
}
//check xem 1 so co tong cac chu so co phai la tribonaci hay ko
bool check(int n){
    int res = 0;
    while(n!=0){
        res += n%10;
        n/=10;
    }
    ll tribo[90];
    tribo[0] = 0;
    tribo[1] = tribo[2] = 1;
    for(int i=3;i<30;i++){
        tribo[i] = tribo[i-1] + tribo[i-2] + tribo[i-3];
    }
    for(int i=0;i<30;i++){
        if(res == tribo[i]){
            return true;
        }
    }
    return false;
}

int main(){
    sieve();
    int a,b;cin >> a >> b;
    bool ok = false;
    for(int i = min(a,b);i<=max(a,b);i++){
        if(prime[i]){
            if(check(i)){
                ok = true;
                cout << i << " ";
            }
        }
    }
    if(!ok) cout << "28tech";
    return 0;
}*/

/*Bai 2:cho mang A[n] voi moi a[i] in ra chi so lon hon a[i] xa nhat ve ben phai;ko co in -1
int main(){
    int t;cin >> t;
    while(t--){
        int n;cin >> n;
        int a[n],b[n];
        for(int i=0;i<n;i++){
            cin >>a[i];
            b[i] = -1;
        }
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(a[i] < a[j]){
                    b[i] = j;
                }
            }
        }
        for(int i=0;i<n;i++){
            cout << b[i] << " ";
        }
        cout << endl;
    }
    return 0;
}*/

/*Bai 3: xoa hang ,cot co nhieu snt nhat
bool snt(int n){
    if(n<2) return false;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
void nhap(int n,int a[][200]){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> a[i][j];
        }
    }
}
int main(){
    int n;cin >> n;
    int a[200][200];
    nhap(n,a);
    int cot = 0;int hang = 0;//luu so luong snt nhieu nhat tren hang ,cot co nhieu snt nhat
    int cs_h,cs_c;
    for(int i=0;i<n;i++){
        int dem=0;//dem sl so snt tren tung hang
        for(int j=0;j<n;j++){
            if(snt(a[i][j])){
                ++dem;
            }
        }
        if(dem >= hang){//TH = thi lay chi so hang lon hon
            hang = dem;
            cs_h = i;
        }
        //tim dc chi so hang co nhieu snt nhat
    }
    for(int j=0;j<n;j++){
        int dem=0;//dem sl so snt tren tung cot
        for(int i=0;i<n;i++){
            if(snt(a[i][j])){
                ++dem;
            }
        }
        if(dem >= cot){//TH = thi lay chi so hang lon hon
            cot = dem;
            cs_c = j;
        }
        //tim dc chi so hang co nhieu snt nhat
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=cs_h && j!= cs_c){
                cout << a[i][j] << " ";
            }
        }
        if(i!=cs_h){
            cout << endl;
        }
    }
    return 0;
}*/

/*Bai 4:Tim nhung tu xuat hien o ca S va T in ra theo thu tu trong xau S,ko co in ra not found
void vtthuong(string &s){
    for(int i=0;i<(int)s.length();i++){
        s[i] = tolower(s[i]);
    }
}
int main(){
    string s,t;
    getline(cin,s);vtthuong(s);
    getline(cin,t);vtthuong(t);
    stringstream ss(t);
    string tmp;
    set<string> se;//luu cac tu khac nhau trong xau t
    while(ss >> tmp){
        se.insert(tmp);
    }
    stringstream xx(s);//tach cac tu trong xau s 
    bool ok = false;
    while(xx >> tmp){
        //tu nao tim thay trong set (tuc xh ca trong xau t)
        if(se.find(tmp) != se.end()){
            ok = true;
            cout << tmp << " ";
        }
    }
    if(!ok) cout << "Not found" << endl;
    return 0;
}
*/

//Bai 5:in ra cac so thuan nghich va tan xuat cua no
bool stn(int n){
    int res =  0;
    int cp = n;//luu lai gia tri cau n
    while(n!=0){
        res = res * 10 + n%10;
        n/=10;
    }
    if(res == cp){
        return true;
    }
    return false;
}
int main(){
    vector<int>v;
    map<int,int> mp;int x;
    while(cin >> x){
        if(stn(x)){
            v.push_back(x);
            mp[x]++;  
        }
    }
    for(int x: v){
        if(mp[x]){
            cout << x << " " << mp[x] << endl;
        }
        mp[x] = 0;
    }
    return 0;
}