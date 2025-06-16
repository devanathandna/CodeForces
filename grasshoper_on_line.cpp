#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int x,k;
		cin >> x >> k;
		if(x%k!=0){
			cout << 1 << endl << x << endl;
		}
		else{
			int fhalf = (int)x/2;
			int shalf = x - fhalf;
			while(fhalf %k==0 || shalf %k==0){
				fhalf++;
				shalf--;
			}
			cout << 2 << endl;
			cout << fhalf << " " << shalf << endl;

		}
	}
	return 0;
}