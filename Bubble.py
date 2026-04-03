def Bubblesorting(arr,n):
    for i in range(n-1):
        for j in range(0,n-1-i):
            if(arr[j]>arr[j+1]):
                arr[j],arr[j+1]=arr[j+1],arr[j]

    print("After sorting : ",arr)


n=int(input("Enter the size of array : "))
arr=[]
for i in range(n):
    num=int(input())
    arr.append(num)

print("Before sorting : ",arr)
Bubblesorting(arr,n)

# for i in range(n-1):
#     for j in range(0,n-1-i):
#         if(arr[j]>arr[j+1]):
#             arr[j],arr[j+1]=arr[j+1],arr[j]

# print("After sorting : ",arr)
