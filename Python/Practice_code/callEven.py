'''
import check_Evan
from FileName import ''' 

import check_Evan as CE
def main():
	iNo=int(input("Enter a Number :"))
	iRet=CE.Check(iNo)

	if iRet == True:
		print("its Even".format(iNo))
	else:
		print("its Odd".format(iNo))

if __name__=="__main__":
	main()
