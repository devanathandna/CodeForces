#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int odd = 0;
		for(int i=0;i<n;i++){
			int x;
			cin >> x;
			if(x%2){
				odd++;
			}
		}

		if(odd==0 || odd%2==0){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}
	return 0;
}