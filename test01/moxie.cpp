#include <bits/stdc++.h>
using namespace std;

//积木画
int N;  //画布大小
long long dp[10000005][3];
long long mod = 1000000007;
// dp[i][0]表示填充到i但是上面缺一块
// dp[i][1]表示正好
// dp[i][2]表示下面缺一块
// dp[i][0] = dp[i - 2][1] + dp[i - 1][2]
// dp[1][1] = dp[i - 1][1] + dp[i - 2][1] + dp[i - 1][0] + dp[i - 1][2]
// dp[i][2] = dp[i - 2][1] + dp[i - 1][0]


int main(){
	cin >> N;
	dp[1][1] = 1;
	dp[2][1] = 2;
	dp[2][0] = 1;
	dp[2][2] = 1;
	for(int i  =3;i<=N;++i){
		dp[i][1] = (dp[i - 1][1] + dp[i - 2][1] + dp[i - 1][0] + dp[i - 1][2])%mod;
		dp[i][0] = (dp[i - 2][1] + dp[i - 1][2]) % mod;
		dp[i][2] = (dp[i - 2][1] + dp[i - 1][0]) % mod;
	}
	cout << dp[N][1] <<endl;

	return 0;
}



	
































