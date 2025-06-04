#include <bits/stdc++.h>
using namespace std;


int main(){
	int x;
	cin >> x;
	while(x--){
		int a,k;
		cin >> a >> k;
		int arr[a];
		int sorta[a];
		for(int i=0;i<a;i++){
			cin >> arr[i];
			sorta[i] = arr[i];
		}

		sort(sorta.begin(),sorta.end());
		bool flag = true;
		for(int i=0;i<a;i++){
			if(sorta[i]!=arr[i]){
				flag = false;
			}
		}
		if(k==1){
			if(flag){
				cout << "YES" << endl;
			}
			else{
				cout << "NO" << endl;
			}
		}
		else{
			cout << "YES" << endl;
		}
	}

	return 0;
}
