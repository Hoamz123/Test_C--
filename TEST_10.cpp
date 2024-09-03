#include<bits/stdc++.h>
using namespace std;
void xx(int a[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n - 1 - i;j++){
            if(a[j] > a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }
}
int main(){
    int a[10];
    for(int &x : a){
        cin >> x;
    }
    xx(a,10);
    for(int x: a){
        cout << x<< " ";
    }
    return 0;
}