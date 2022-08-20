N, M = map(int, input().split())
if 1 <= N and M <= 300:
    sum = (M-1) + (N-1)*M
    print(sum)

else:
    print("Error!")
