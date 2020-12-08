def Fibo(iNum):
    iNo=0
    iNo1=1
    iNo2=0
    print(iNo,"\n",iNo1)
    for i in range(2,iNum):
        iNo2=iNo+iNo1
        print(iNo2)
        iNo=iNo1
        iNo1=iNo2

iNum=int(input("ENter a number :"))
Fibo(iNum)
        
        
    
