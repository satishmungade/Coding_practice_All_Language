def Add(ino,ino2):
    iSum=ino + ino2
    print("Addition is :",iSum)

def sub(ino,iNo1):
	iSub=ino-iNo1;
	print("Substraction is :",iSub)

def mult(ino,iNo1):
	iMult=ino*iNo1;
	print("multipaction  is :",iMult)

print("1.Addition\n2.Substraction \n3.multipaction \n4.break")
iChoice=int(input('enter Your choice :'))	
if iChoice == 1:
    iNo=int(input("enter first Number :"))
    iNo1=int(input("enter Scound Number :"))
    Add(iNo,iNo1)
if iChoice == 2:	
    iNo=int(input("enter first Number :"))
    iNo1=int(input("enter Scound Number :"))
    sub(iNo,iNo1)
if iChoice == 3:	
    iNo=int(input("enter first Number :"))
    iNo1=int(input("enter Scound Number :"))
    mult(iNo,iNo1)	
if iChoice ==4:
    print('Thanku to use my calculater')
    exit(0)	
