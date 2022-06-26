def main():
    n = int(input())
    str = 'codeforces'
    arr = [1] * len(str)
    idx = 0
    ans = ""
    product = 1
    while product < n:
        product /= arr[idx]
        arr[idx] += 1
        product *= arr[idx]
        idx += 1
        idx %= len(str)
    for i in range(len(str)):
        ans += str[i]*arr[i]
    print(ans)
 
if __name__ == '__main__':
    main()