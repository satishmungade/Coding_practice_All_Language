def compareTriplets(a, b):
    a1=0
    b1=0
    for i in range(len(a)):
        if a[i] > b[i]:
            a1+=1 
        elif a[i] < b[i]:
            b1+=1
    return a1,b1 

'''a=[5,6,7]
b=[3,6,10]  '''
a=[17,28,30]
b=[99,16,8 ] 
result = compareTriplets(a, b)
print(result)