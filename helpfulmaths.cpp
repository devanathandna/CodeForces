#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin >> s;
	vector<char>dp;
	for(int i=0;i<s.size();i++){
		if(isdigit(s[i])){
			dp.push_back(s[i]);
		}
	}

	sort(dp.begin(),dp.end());
	string ans;
	for(int i=0;i<dp.size()-1;i++){
		ans+=dp[i];
		ans+='+';
	}
	ans+=dp[dp.size()-1];

	cout << ans;
	return 0;
}