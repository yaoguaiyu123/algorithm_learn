#include <iostream>
#include <vector>
#include <string>
using namespace std;

void solve() {
    int t;
    cin >> t;
    vector<int> nums(t);
    int max_n = 0;
    
    // 读取输入并找到最大值
    for(int i = 0; i < t; i++) {
        cin >> nums[i];
        max_n = max(max_n, nums[i]);
    }
    
   
    vector<bool> is_prime(max_n + 1, true);
    vector<int> primes;
    is_prime[0] = is_prime[1] = false;
    
    for(int i = 2; i <= max_n; i++) {
        if(is_prime[i]) {
            primes.push_back(i);
        }
        
        for(int j = 0; j < primes.size() && i * primes[j] <= max_n; j++) {
            is_prime[i * primes[j]] = false;
            if(i % primes[j] == 0) {
                break;
            }
        }
    }
    
    // 博弈DP
    vector<int> dp(max_n + 1, 0);
    for(int i = 0; i <= max_n; i++) {
        for(int p : primes) {
            if(i - p < 0) {
                break;
            }
            if(dp[i - p] == 0) {
                dp[i] = 1;
                break;
            }
        }
    }
    
    // 输出结果
    for(int n : nums) {
        cout << dp[n] << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();
    return 0;
}