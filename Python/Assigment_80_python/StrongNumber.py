def storng(iNo):
    iTemp=iNo
    iFact=0
    if iNo < 0:
        iNo= -iNo
    while iNo !=0:
        iDigit=iNo%10
        while(iDigit != 0):
            iFact=iFact *iDigit
            iDigit -1
        iSum=iSum +iFact;
        iNo=iNo//10
        iFact=1
    if iTemp == iSum :
        return True
    else:
        return False
        
iNo=int(input('Enter number to check storng or not :'))
t=False
t=storng(iNo)
if t ==True:
    print('Number is storng')
else:
    print('Number is not storng')

