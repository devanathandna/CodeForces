#include <bits/stdc++.h>
using namespace std;


int main(){
	int n,m;
	cin >> n >> m;
	int arr[n];
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}

	int maxi = arr[m-1];
	int cnt=0;
	for(int i=0;i<n;i++){
		if(arr[i] >=maxi && arr[i] >0){
			cnt++;
		}
	}

	cout << cnt;
	return 0;
}
