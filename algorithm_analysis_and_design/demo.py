def solve():
    import sys
    input = sys.stdin.read
    data = input().split()

    t = int(data[0])  
    nums = list(map(int, data[1:t + 1])) 
    max_n = max(nums)  

    # 欧拉筛法生成质数
    is_prime = [True] * (max_n + 1)
    primes = []
    is_prime[0] = is_prime[1] = False
    
    for i in range(2, max_n + 1):
        if is_prime[i]:
            primes.append(i)
        
        for p in primes:
            if i * p > max_n:
                break
            is_prime[i * p] = False
            
            if i % p == 0:
                break

   
    dp = [0] * (max_n + 1)
    for i in range(max_n + 1):
        for p in primes:
            if i - p < 0:
                break
            if dp[i - p] == 0:
                dp[i] = 1
                break

   
    results = [dp[n] for n in nums]
    sys.stdout.write("\n".join(map(str, results)) + "\n")

if __name__ == '__main__':
    solve()