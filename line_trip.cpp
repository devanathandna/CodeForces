#include<bits/stdc++.h>
using namespace std;

int main(){
	int x;
	cin >> x;
	for(int i=0;i<x;i++){
		long long n,dest;
		cin >> n >> dest;
		vector<long long>arr(n);
		for(int i=0;i<n;i++){
			long long a;
			cin >> a;
			arr.push_back(a);
		}
		arr.push_back(dest);

		long long max_value = INT_MIN;
		n = arr.size();

		for(int i=1;i<n;i++){
			if(i==n-1){
				max_value = max(max_value,(arr[i]-arr[i-1])*2);
			}
			else{
				max_value = max(max_value,arr[i]-arr[i-1]);
			}
		}
		cout << max_value << endl;
	}

	return 0;
}