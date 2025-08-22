def dectobin(n):
    s=" "
    while(n>0):
        m=n%2
        n=n//2
        s=str(m)+s
    return s
m=int(input())
print("Binary =",dectobin(m))
