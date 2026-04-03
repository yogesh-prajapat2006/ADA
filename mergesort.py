def mergesorting(arr[],l,h):
    while(l<h):
        

n=int(input("Enter the size of array : "))
arr=[]
for i in range(n):
    num=int(input())
    arr.append(num)

print("Before sorting : ",arr)
mergesorting(arr,1,n)