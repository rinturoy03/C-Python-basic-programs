def character(n):
    result=" "
    i=0
    while i<len(n):
        ch=n[i]
        if ch.isalpha():
            if ch in result:
                i=i+1
            else:
                result=result+ch
                i=i+1
        i=i+1
    return result
    sum=sum+n
    return sum
m=input()

print("Og =",character(m))
