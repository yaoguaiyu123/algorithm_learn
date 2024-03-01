#include <bits/stdc++.h>
using namespace std;
int gcd(int m, int n)
{
    if (n) {
        return gcd(n, m % n);
    } else {
        return m;
    }
}
const int MAXN = 105, MAX_DP = 100005; // 又来定义
int n, a[MAXN], dp[MAX_DP], ans;
bool notCoprime(int* arr) // 返回arr数组中所有数的最大公约数是否大于1
{
    int g = arr[0];
    for (int i = 1; i < n; i++) {
        g = gcd(g, arr[i]);
        if (g == 1) {
            return false; // 如果g已经为1，不用再循环，直接返回
        }
    }
    return g > 1;
} // 定义函数，运行更快
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    if (notCoprime(a)) // 如果gcd({A_i})>1
    {
        cout << "INF";
        return 0; // 直接结束
    }
    dp[0] = 1; // 注意0是被认为能被凑出的
    for (int i = 0; i < n; i++) {
        for (int j = a[i]; j < MAX_DP; j++) {
            dp[j] = std::max(dp[j], dp[j - a[i]]); // 状态转移方程
        }
    }
    for (int i = 1; i < MAX_DP; i++) {
        if (!dp[i]) {
            ans++; // 如果dp[i]=0,多一个凑不出的数
        }
    }
    cout << ans << endl;
    return 0;
}
