R1, S = map(int, input().split())

if R1>=-1000 and R1<=1000 and S<=1000 and S>=-1000 :
    R2 = S*2-R1
    print(R2)
    
else :
    print("Error!")
