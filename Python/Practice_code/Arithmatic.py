'''multiply way addition program'''
'''
#first way
No=11
No1=21
ans= No + No1
print("addition is",ans) //32
'''
'''
#Scound way
print("enter first Number")#11
No=input()
print("Enter a Scound number")#21
No1=input()
ans= No + No1
print("addition is",ans) #output=1121 string concat zali
'''

'''
#3way
print("enter first Number")#11
No=input()
print("Enter a Scound number")#21
No1=input()
ans= int(No) + int(No1) #type casting or type convertion
print("addition is",ans)#32
'''

'''
#4way
print("enter first Number")#11
No=int(input()) #taking input time type cast
print("Enter a Scound number")#21
No1=int(input()) ##taking input time type cast
ans= No + No1 
print("addition is",ans)#32

'''
'''
#5way

iNo=int(input("Enter First Number"))
iNo1=int(input("Enter Scound Number"))
Ans= iNo + iNo1
print("addition is :",Ans)

'''
#6way using function concept
'''
def Addition(iValue1,iValue2):
	iRet=iValue1 + iValue2
	return iRet

iNo=int(input("Enter First Number"))
iNo1=int(input("Enter Scound Number"))
iAns=Addition(iNo,iNo1)
print("Addition is :",iAns)	

'''

def Addition(iValue1,iValue2):
	iRet=iValue1 + iValue2
	return iRet

def main():
	iNo=int(input("Enter First Number"))
	iNo1=int(input("Enter Scound Number"))
	iAns=Addition(iNo,iNo1)
	print("Addition is :",iAns)	

if __name__=="__main__":
	main()

#line execution 71 72 65 66 67 68 61 62 63 68 69

''' print(__name__)program kuthun run hoto tylach nav kad ch asel __Name__n kalte
tumcha program  jithun run hoto tyla modul la main as manto kont pn nav dya
tyach khi sambad nsto  '''
#main()