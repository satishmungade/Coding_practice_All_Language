def Fact(iNo):
    if iNo < 0:
        return 1
    elif iNo ==0 or iNo==1:
        return 1
    else :
        return iNo*Fact(iNo -1)


iNo=int(input("ENter a Number :"))
print('Factorial of',iNo,'is',Fact(iNo)) 
