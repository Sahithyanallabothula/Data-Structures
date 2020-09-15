def selectionsort(lst):
    for i in range(n):
        min=i
        for j in range(i+1,n):
            if(lst[j]<lst[min]):
                min=j
        temp=lst[min]
        lst[min]=lst[i]
        lst[i]=temp
n=int(input("Enter number of elements in the list: "))
lst=[]
print("Enter elements in list:")
for i in range(n):
    e=int(input())
    lst.append(e)
print("Before sorting")
print(lst)
selectionsort(lst)
print("After sorting")
print(lst)

    
