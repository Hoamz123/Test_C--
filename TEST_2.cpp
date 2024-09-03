#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
using namespace std;
/*Bai 1:chu so cuoi cung lon nhat

bool kt(int n){
    int last = n%10;
    while(n){
        if(n%10 > last){
            return false;
        }
        n/=10;
    }
    return true;
}
int prime[10000001];
void sieve(){
    for(int i=0;i<10000001;i++){
        prime[i] = 1;
        prime[0] = prime[1] = 0;
    }
    for(int i=2;i<=sqrt(10000001);i++){
        if(prime[i]){
            for(int j=i*i;j<10000001;j+=i){
                prime[j] = 0;
            }
        }
    }
}
int main(){
    sieve();
    int n;cin>>n;int cnt = 0;
    for(int i=2;i<=n;i++){
        if(prime[i] && kt(i)){
            cnt++;
            cout << i << " ";
        }
    }
    cout <<endl<< cnt;
    return 0;
}*/
//cap email ,ngay sinsh
int main(){
    int n;cin>>n;
    cin.ignore();
    map<string,int> mp;
    for(int i=0;i<n;i++){
        string xau;
        getline(cin,xau);
        stringstream ss(xau);string tmp;
        vector<string> v;
        while(ss >> tmp){
            v.push_back(tmp);
        }
        string date = v[v.size() - 1];
        string email = v[v.size() - 2];
        for(int i=0;i<(int)v.size() - 2;i++){
            email += v[i][0];
        }
        for(int i=0;i<(int)email.length();i++){
            email[i] = tolower(email[i]);
        }
        
        if(mp[email] == 0){
            cout << email << "@gmail.com" << endl;
        }
        else{
            cout << email << mp[email] + 1 << "@gmail.com" <<endl;
        }
        mp[email]++;

        stringstream ss2(date);
        while(getline(ss2,tmp,'/')){
            //tach boi dau /
            cout << stoi(tmp);
        }
        cout<<endl;
    }
    return 0;
}


