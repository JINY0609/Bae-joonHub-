A = int(input())
B = int(input())

if A>99 and B>99 :
    H = (B//100)*A
    T = ((B%100)//10)*A
    N = ((B%100)%10)*A
    sum = H*100 +T*10 + N
    print(N)
    print(T)
    print(H)
    print(sum)

else : 
    print("Error!")