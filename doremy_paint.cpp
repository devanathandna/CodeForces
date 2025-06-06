#include<bits/stdc++.h>
using namespace std;

int main(){
	int x;
	cin >> x;
	while(x--){
		int n;
		cin >> n;
		map<long long,long long>mpp;
		for(int i=0;i<n;i++){
			int x;
			cin >> x;
			mpp[x]++;
		}

		if(mpp.size()>=3){
			cout << "No" << endl;
		}
		else{
			long long f1 = mpp.begin()->second;
			long long f2 =mpp.rbegin()->second;

			if(f1==f2){
				cout << "Yes" << endl;
			}
			else if(n%2!=0 && abs(f1 - f2)==1){
				cout << "Yes" << endl;
			}
			else{
				cout << "No" << endl;
			}
		}

	}

	return 0;
}