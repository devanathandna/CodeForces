#include<bits/stdc++.h>
using namespace std;


int main(){
	int t;
	cin >> t;
	while(t--){
		int n,j,k;
		cin >> n >> j >> k;
		vector<int>res(n);
		for(int i=0;i<n;i++){
			cin >> res[i];
		}
		int player = res[j-1];
		int big_players = 0;
		for(int i=0;i<n;i++){
			if(res[i] > player){
				big_players++;
			}
		}

		if(big_players < (n-k)){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}
	return 0;
}