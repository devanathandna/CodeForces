#include<bits/stdc++.h>
using namespace std;

int function(int i,int n,vector<int>&dp){
	if(i==0) return 1;

	int one = 1+function(i-1,n,dp);
	int two = 2+function(i-2,n,dp);
	int three = 3 + function(i-3,n,dp);
	int four
}


int main(){
	int n;
	cin >> n;
	vector<int>dp;
	cout << function(n-1,n,dp);
	return 0;
}