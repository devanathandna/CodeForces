#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int total = 0;
		for(int i=0;i<10;i++){
			for(int j=0;j<10;j++){
				char x;
				cin >> x;
				if(x=='X'){
					int val = min({i,j,9-i,9-j})+1;
					total+=val;
				}
			}
		}
		cout << total << endl;
	}
	return 0;
}