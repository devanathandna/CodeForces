#include<bits/stdc++.h>

using namespace std;

int main() {
	int a,b;
	a=b=2;
	int arr[5][5];
	int c,d;
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			cin >> arr[i][j];
		}
	}

	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			if(arr[i][j]==1){
				c=i;
				d=j;
			}
		}
	}


	int cnt=0;
	if(c >= a){
		while(c!=a){
			c--;
			cnt++;
		}
	}
	else{
		while(c!=a){
			c++;
			cnt++;
		}
	}

	if(d <=b){
		while(d!=b){
			d++;
			cnt++;
		}
	}
	else{
		while(d!=b){
			d--;
			cnt++;
		}
	}

	cout << cnt;
	return 0;
}