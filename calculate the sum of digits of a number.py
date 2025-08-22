def sum(n):
    sum=0
    while n>9:
        m=n%10
        n=n//10
        sum=sum+m
    sum=sum+n
    return sum
m=int(input("a="))
#n=int(input("b="))
print("Sum =",sum(m))
