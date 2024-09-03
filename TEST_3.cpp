#include<bits/stdc++.h>
#include<ostream>
#include<iomanip>
using namespace std;
class sinhvien{
    private:
    string msv,name,date,lop;
    float gpa;
    static int dem;
    public:
    sinhvien();
    friend istream& operator >> (istream& in,sinhvien&a){
        dem++;
        a.msv = "SV" + string(3 - to_string(dem).length(), '0');
        a.msv += dem + '0';
        getline(in, a.name);chuanhoaten(a);
        in >> a.lop >> a.date;chuanhoa_ns(a);
        in >> a.gpa;
        cin.ignore();
        return in;
    }
    friend ostream& operator << (ostream& out,sinhvien a){
        out << a.msv <<" " << a.name << " "<< a.date <<" " << a.lop << " " << fixed << setprecision(2)<< a.gpa << endl;
        return out;
    }
    friend void chuanhoaten(sinhvien&);
    friend void chuanhoa_ns(sinhvien&);
    float get_gpa(){
        return gpa;
    }
    string get_ma(){
        return msv;
    }
};
int sinhvien :: dem = 0;
sinhvien :: sinhvien(){
    msv = name = date = lop = "";
    gpa = 0;
}
void chuanhoaten(sinhvien &a){
    for(int i=0;i<(int)a.name.length();i++){
        a.name[i] = tolower(a.name[i]);
    }
    for(int i=0;i<(int)a.name.length();i++){
        if(a.name[i] != ' ') a.name[i] = toupper(a.name[i]);
        while(a.name[i] != ' ') ++i;
    }
}
void chuanhoa_ns(sinhvien &a){
    string s = a.date;
    if(s[2] != '/') s = "0" + s;
    if(s[5] != '/') s.insert(3,"0");
    a.date = s;
}
bool cmp(sinhvien a,sinhvien b){
    if(a.get_gpa() != b.get_gpa()){
        return a.get_gpa() > b.get_gpa();
    }
    else return a.get_ma() < b.get_ma();
}
int main(){
    int n;cin>>n;cin.ignore();
    vector<sinhvien> v;
    for(int i=0;i<n;i++){
        sinhvien tmp;cin>>tmp;
        v.push_back(tmp);
    }
    sort(v.begin(),v.end(),cmp);
    for(auto x: v){
        cout << x ;
    }
    return 0;
}
    


