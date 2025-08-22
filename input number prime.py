n=int(input())
if n<=1:
    print("not prime")
else:
    flag=0
    for i in range(2,int(n**0.5)+1):
        if n%i==0:
            flag = 1
            break
        else:
            flag=0
if (flag==0):
    print("Prime")
else:
    print("Not Prime")
