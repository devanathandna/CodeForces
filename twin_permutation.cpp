#include<bits./stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		vector<long long>arr(n);
		for(int i=0;i<n;i++){
			cin >> arr[i];
		}
		for(int i=0;i<n;i++){
			cout << n + 1 - arr[i] << " ";
		}
	}
	return 0;
}