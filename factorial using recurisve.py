def fact(a):
    if a==0:
        return 1
    else:
        return a*fact(a-1)
m=int(input("a="))
#n=int(input("b="))
print("Factorial =",fact(m))
