#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        
        int counter = 0;
        bool flag = false;
        while(n>2){
        for(int i=0;i<n-1;i++){
            if(abs(arr[i]-arr[i+1]) <=1){
                flag = true;
                break;
            }
            if(i!=n){
            arr[i] = abs(arr[i]-arr[i+1]);
        }
        else{
            arr.pop_back();
        }
        }
        counter++;
        if(n==2 || flag){
            break;
        }
    }

    counter-=1;
        if(flag){
            cout << counter << endl;
        }
        else if(n==2){
            cout << -1 << endl;
        }
        else{
            cout << counter << endl;
        }
    }
    
    return 0;
}