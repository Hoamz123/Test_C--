#include<bits/stdc++.h>
using namespace std;
int main(){
    //tim day con co k phan tu sao cho tong nho nhat
    int n,k;
    cin >> n >> k;
    int a[n];
    for(int &x : a){
        cin >> x;
    }
    int sum = 0;
    for(int i=0;i<k;i++){
        sum += a[i];
    }
    int res = sum;
    int index = 0;
    for(int i=k;i<n;i++){
        sum  = sum - a[i - k] + a[i];
        if(sum < res){
            res = sum;
            index = i - k + 1;
        }
    }

    for(int i=0;i<k;i++){
        cout << a[i + index] << " ";
    }
    return 0;
}