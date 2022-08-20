T = int(input())
Num = []  

for i in range(T):
    A, B = map(int, input().split())
    Num.append(A+B)

for i in range(T):
    print("Case #"+str(i+1)+":", Num[i])