def prefix(pref,n):
    arr=[0]*n
    arr[0]=pref[0]
    for i in range(1,n):
        arr[i]=pref[i]^pref[i-1]
    return arr
n=int(input())
print("pref xor")
pref=[0]*n
for i in range(n):
    pref[i]=int(input())
print("Org Array =", prefix(pref,n))
'''
The logic to reconstruct the original array from its prefix XOR is based on the property of XOR cancellation.
In a prefix XOR array, each element pref[i] represents the XOR of all elements from the start up to index i. 
The first element of the original array is simply pref[0]. 
For every other index i, the original element can be found by taking pref[i] ^ pref[i-1], since all the earlier elements cancel out due to XOR. 
This way, we can recover the full original array in a single pass.
'''
