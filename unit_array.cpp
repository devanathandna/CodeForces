#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int neg=0,pos=0;
		int sum = 0;
		for(int i=0;i<n;i++){
			int x;
			cin >> x;
			sum+=x;
			if(x==1){
				pos++;
			}
			else{
				neg++;
			}
		}
		int steps = 0;
		if(sum>=0 && neg%2==0){
			cout << steps << endl;
		}
		else if(sum < 0 && pos==0){
			cout << neg << endl;
		}
		else if(sum < 0){
			if(neg%2!=0){
				cout << abs(sum)/2 << endl;
			}
			else{
				cout << abs(sum)/2 +1 << endl;
			}
		}
	}
	return 0;
}