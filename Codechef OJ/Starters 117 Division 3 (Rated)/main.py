def is_prime(num):
    if num < 2:
        return False
    for i in range(2, int(num**0.5) + 1):
        if num % i == 0:
            return False
    return True

def solve(n, arr):
    ans = [0] * n
    for i in range(n):
        for j in range(1, n + 1):
            if not is_prime(j + arr[i]):
                ans[i] = j
                break
    return ans

tc = int(input())

for _ in range(tc):
    n = int(input())
    arr = list(map(int, input().split()))

    result = solve(n, arr)
    if result == -1:
        print(-1)
    else:
        print(*result)
