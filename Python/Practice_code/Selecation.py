def Check(iNo):
	if iNo % 2 == 0:
		return True
	else:
		return False	

iNo=int(input("Enter a Number :"))
iRet=Check(iNo)

if iRet == True:
	print("its Even".format(iNo))
else :
	print("its Odd".format(iNo))

print("End Application :")

'''
7->8->1->if Number is Even ->2->3->9 end
? if Number is odd ->4->5 -> 9 end
'''