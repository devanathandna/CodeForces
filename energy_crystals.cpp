#include<bits/stdc++.h>
using namespace std;

int main(){
	int x;
	cin >> x;
	while(x--){
		int n;
		cin >> n;
		int cnt=0;
		long long a=0,b=0,c=0;
		if(n==1){
			cout << 3 << endl;
			continue;
		}
		while(a!=n&& b!=n && c!=n){
			if(a==0){
				cnt++;
				a=1;
			}
			if(b<=a && (b*2) < n){
				cnt++;
				b = b*2;
			}
			else if((b*2)>=n){
				cnt++;
				b =n;
			}

			if(c<=b && (c*2)<n){
				cnt++;
				c = c*2;
			}
			else if((c*2)>=n){
				cnt++;
				c=n;
			}

			if(a<c){
				cnt++;
				a=c;
			}


		}
		cout << cnt << endl;
	}
}