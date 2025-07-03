#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int a,x,y;
		cin >> a >> x >> y;
		bool flag = false;
		for(int b=1;b<=100;b++){
			if(a==b) continue;
			if(abs(b-y) < abs(a-y) && abs(b-x) < abs(a-x)){
				flag = true;
				break;
			}
		}

		if(flag){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}
	return 0;
}