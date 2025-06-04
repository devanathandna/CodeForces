#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin >> s;
	unordered_map<char,int>mpp;
	int n = s.size();
	for(int i=0;i<n;i++){
     mpp[s[i]]++;
	}

	int m = mpp.size();
	if(m%2==0){
		cout << "CHAT WITH HER!";
	}
	else{
		cout << "IGNORE HIM!";
	}

	return 0;
}