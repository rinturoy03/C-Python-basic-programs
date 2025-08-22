def hcf(a,b):
    while(b!=0):
        a , b= b, a % b
    return a
m=int(input("a="))
n=int(input("b="))
print("HCF=",hcf(m,n))
