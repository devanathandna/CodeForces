#include<bits./stdc++.h>
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
		bool flag = false;
		int prev = INT_MIN;

		for(int i=0;i<n;i++){
			if(arr[i]+(i+1) <= prev){
				flag = true;
				break;
			}
			else{
				prev = arr[i]+i+1;
			}
		}
		if(flag){
			sort(arr.begin(),arr.end());
		}
		for(int i=0;i<n;i++){
			cout << arr[i] << " ";
		}
		cout << endl;
	}
	return 0;
}