#include<bits/stdc++.h>
using namespace std;

int main(){

	int x;
	cin >> x;
	while(x--){
		int n;
		cin >> n;
		vector<char>arr(n);
		for(int i=0;i<n;i++){
			cin >> arr[i];
		}
		bool flag = false;
		int cnt=0;
		for(int i=0;i<n;i++){
			if(i+1<n && arr[i]=='.' && i-1>=0 && arr[i-1]=='.' && arr[i+1]=='.'){
				flag = true;
			}
			if(arr[i]=='.'){
				cnt++;
			}
		}

		if(flag){
			cout << 2 << endl;
		}
		else{
			cout << cnt << endl;
		}

	}

	return 0;
}