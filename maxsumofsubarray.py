arr={4,-2,3,-1,5}
n=len(arr)

csum=0
msum=0

for x in arr:
    
    csum+=x
    if csum>msum :
        msum+=csum
    elif csum<0:
        csum=0
    print(f"csum-> {csum},msum-> {msum}")

print("msum->",msum)

