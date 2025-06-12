#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >>n;
		int mini=INT_MAX;
		int mi=-1, mj =-1;
		vector<long long>arr(n);
		for(int i=0;i<n;i++){
			cin >> arr[i];
		}

		bool sorted=true;
		for(int i=1;i<n;i++){
			if(arr[i-1]>arr[i]){
				sorted = false;
				break;
			}
		}

		if(!sorted){
			cout << 0<<endl;
			continue;
		}

		for(int i=1;i<n;i++){
			long long absl = abs(arr[i-1] - arr[i]);
			if(absl < mini){
				mini = absl;
				mi = arr[i - 1];
				mj = arr[i];
			}
		}

		int steps = mj - mi;
		int ans = int(steps)/2 +1;
		cout << ans <<endl;
	}
	return 0;
}
