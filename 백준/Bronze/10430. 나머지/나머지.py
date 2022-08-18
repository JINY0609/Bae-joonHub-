A, B, C = map(int, input().split())

if A >= 2 and B <= 10000:
    print((A+B) % C)
    print(((A % C) + (B % C)) % C)
    print((A*B) % C)
    print(((A % C) * (B % C)) % C)

else:
    print("Error!")