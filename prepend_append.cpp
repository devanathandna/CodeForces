#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		string s;
		cin >> s;
		int count=0;
		int m = (int)n/2;
	for(int i=0;i<m;i++){
		if((s[i]=='1' && s[n-1-i]=='0') || (s[i]=='0' && s[n-i-1]=='1')){
			count++;
		}
		else{
			break;
		}

	}

	cout << n - count*2 << endl;
	}
	return 0;
}