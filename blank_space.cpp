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

		int max_zero= 0;;
		int zero_cnt = 0;
		for(int i=0;i<n;i++){
			if(arr[i]==0){
				zero_cnt++;
				max_zero = max(max_zero,zero_cnt);
			}
			else{
				zero_cnt = 0;
			}
		}

		cout << max_zero << endl;
	}
	return 0;
}