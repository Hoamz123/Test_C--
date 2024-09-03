#include<bits/stdc++.h>
using namespace std;

/*bai 1:so dem la so ma caca so o vt chan la so chan ,so o vt le la so le (tinh ca so am)
bool check(string s){
    for(int i=1;i<(int)s.length();i+=2){
        if( (i % 2) != (s[i] - '0') % 2 ) return false;
    }
    return true;
}
void chuanhoa(string &s){
    if(s[0] == '-') s.erase(0);//xoa phan tu o chi so 0 di
}
int main(){
    int t;cin>>t;cin.ignore();
    while(t--){
       string s;getline(cin,s);
       chuanhoa(s);
       s = "a" + s;
       if(check(s)) cout<< "Yes" <<endl;
       else cout<< "No" << endl;
    }
    return 0;
}*/

/*truy van tren mang : 
int main(){
    int n;cin>>n;
    multiset < int > mp;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        mp.insert(x);
    }
    int q;cin >> q;//nhap sl truy van
    while(q--){
        int x,y;cin>>x>>y;//neu x = 1 thi them y vao
        if(x == 1){
            mp.insert(y);
        }
        if(x == 2 && mp.find(y) != mp.end()){//neu x = 2 va y tt thi xoa y
            mp.erase(mp.find(y));
        }
        if(x == 3){//neu x =3 thi kt xem y co tt tring mng hay khong
            if(mp.find(y) == mp.end()) cout<<"No" <<endl;
            else cout<< "Yes" << endl;
        }
    }
    return 0;
}*/
/*
int dx[8] = {-1,-1,-1,0,0,1,1,1};
int dy[8] = {-1,0,1,-1,1,-1,0,1};

int n,m,a[100][100];
void nhap(){
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>a[i][j];
        }
    }
}
int demdt = 0;
void Try(int i,int j,int x){
    demdt++;
    a[i][j] = 1000;//danh dau
    for(int k=0;k<8;k++){
        int i1 = i + dx[k],j1 = j + dy[k];
        if(i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= n && a[i1][j1] == x){
            Try(i1,j1,x);
        }
    }
}
int main(){
    nhap();
    map < int,vector<int> > mp;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(a[i][j] != 1000){
                //chua duoc danh dau
                int tmp = a[i][j];
                demdt = 0;
                Try(i,j,tmp);
                mp[tmp].push_back(demdt);//luu dien tich cua cac o co in so tmp vao 1 vector
            }
        }
    }
    for(auto it: mp){
        sort(it.second.begin(),it.second.end());
        cout << it.first <<" : ";
        for(int x : it.second){
            cout << x << " ";
        }
        cout<<endl;
    }
}*/
/*chong gian lan
int main(){
    int n;cin>>n;cin.ignore();
    map< string,pair<string,bool> > mp;
    for(int i=0;i<n;i++){
        string s;getline(cin,s);
        stringstream ss(s);
        vector<string> v;string tmp;
        while( ss >> tmp){
            v.push_back(tmp);
        }
        string msv = v[0];
        string name = "";
        for(int i=1;i<(int)v.size();i++){
            name += v[i];
            name += " ";
        }
        name.erase(name.length() - 1);
        mp[msv].first = name;
        mp[msv].second = true;
    }
    int m;cin>>m;cin.ignore();
    set<string> duthi;
    for(int i=0;i<m;i++){
        string x,y,z,t;cin >> x >> y >> z >> t;
        if(t != "code.ptit.edu.vn"){
            mp[z].second = false;
        }
        else{
            duthi.insert(z);
        }
    }
    for(auto it : mp){
        cout << it.first << " " << it.second.first << ": ";
        if(it.second.second == true && duthi.count(it.first) != 0){
            cout << "Ok" << endl;
        }
        else{
            cout << "FAIL" << endl;
        }
    }
    return 0;
}*/

//bai 4quan ly kho hang
struct mh{
    string ma,name,hang,dv;
    int nhap,ban;
};
string get_xau(string s){
    string res = "";
    stringstream ss(s);
    string temp;
    while(ss >> temp){
        res += toupper(temp[0]);
    }
    return res;
}
bool cmp(mh a,mh b){
    int cl1 = a.ban - a.nhap;
    int cl2 = b.ban - b.nhap;
    if(cl1 != cl2) return cl1 > cl2;
    else return a.ma < b.ma;
}
int main(){
    int n;cin>>n;cin.ignore();
    vector< mh > v;
    map < string , int > mp;
    for(int i=0;i<n;i++){
        string ten;getline(cin,ten);
        string hang;getline(cin,hang);
        string dv;getline(cin,dv);
        int nhap,xuat;cin>>nhap>>xuat;cin.ignore();
        //cap ma mat hang
        string ma = get_xau(ten);
        mp[ma]++;int dem = mp[ma];
        string tmp = string(4 - to_string(mp[ma]).length(),'0');ma += tmp;ma += dem + '0';
        mh x{ma,ten,hang,dv,nhap,xuat};
        v.push_back(x);
    }
    sort(v.begin(),v.end(),cmp);
    for(auto x: v){
        cout << x.ma << "  " << x.name << "  " << x.hang << "  " << x.dv << "  " << x.nhap << "  " << x.ban << endl;
    }
    cout << "hello world"<< endl;
    return 0;
}
