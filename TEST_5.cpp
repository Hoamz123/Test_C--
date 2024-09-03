#include<bits/stdc++.h>
using namespace std;
#define ll long long

/*kiem tra so dep:neu tt 1 so nguyen to x: sao cho n%x==0 va n%(x^3)==0
bool ck(ll n){
    for(int i=2;i<=sqrt(n);i++){
        int dem = 0;
        while(n%i==0){
            dem++;
            n/=i;
            if(dem == 3){
                return true;
            }
        }
    }
    return false;
}
int main(){
    ll n;cin>>n;
    if(ck(n)) cout << "YES";
    else cout << "No";
   return 0;
}*/

//voi moi phan tu trong mang hay tim ra pt lon nhat < no (ko co in #)
/*int main(){
    int n;cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++) {
        cin>>a[i];
        b[i] = a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n;i++){
        //lon nhat < b[i]
        auto it = lower_bound(a,a+n,b[i]);
        //tim ra vt dau tien cau phan tu <= b[i];
        if(it == a){
            cout << "# ";
        }
        else {
            --it;
            cout << *it << " ";
        }
    }
    return 0;
}*/
int bs(int a[],int l,int r,int x){
    int res = -1;
    while(l<=r){
        int m = (l+r)/2;
        if(a[m] < x){
           res = m;
           l = m+1;
        }
        else{
            r = m-1;
        }
    }
    return res;
}
int main(){
    int n;cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        b[i] = a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n;i++){
        int id = bs(a,0,i,b[i]);
        if(id != -1){
            cout << a[id] << " ";
        }
        else cout <<"# ";
    }
    return 0;
}
/*
struct db{
    int diem,hs;
};
bool cmp(pair<string,db> a,pair<string,db> b){
    if(a.second.diem != b.second.diem){
        return a.second.diem > b.second.diem;
    }
    if(a.second.hs != b.second.hs){
        return a.second.hs > b.second.hs;
    }
    return a.first < b.first;
}
int main(){
    string s;
    map<string,db> mp;
    int n = 5;
    while(n--){
        getline(cin,s);
        //doc tat ca dong trong luong vao
        string team1,team2;int i=1;
        while(s[i] != ']'){
            team1 += s[i];
            i++;
        }
        //tach thanh cong ten team 1
        i += 2;int x = 0,y = 0;//luu ti so
        while(s[i] != ' '){
            x = x*10 + (s[i] - '0');
            i++;
        }
        i +=3;
        while(s[i] != ' '){
            y = y*10 + (s[i] - '0');
            i++;
        }
        i+=2;
        while(i < (int)s.size() - 1){
            team2 += s[i];
            i++;
        }
         if(mp.count(team1) == 0){
            mp[team1].diem = mp[team2].hs = 0;
         }
         if(mp.count(team2) == 0){
            mp[team2].diem = mp[team2].hs = 0;
         }
         if(x > y){
            mp[team1].diem += 3;
         }
         else if(x < y){
            mp[team2].diem += 3;
         }
         else {
            mp[team1].diem += 1;
            mp[team2].diem += 1;
         }
         mp[team1].hs += x - y;
         mp[team2].hs += y - x;
    }
    vector<pair<string,db>> v;
    for(auto it: mp){
        v.push_back(it);
    }
    sort(v.begin(),v.end(),cmp);
    for(auto it : v){
        cout << it.first << " " << it.second.diem << " " << it.second.hs << endl;
    }
}*/