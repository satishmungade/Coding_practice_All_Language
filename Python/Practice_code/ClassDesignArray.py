class ArrayOperation:
	def __init__(self,iNo):
		self.iSize=iNo
		self.Arr=list()

	def Accept(self):
		print("Enter A Element ")
		for i in range(self.iSize):
			No=int(input("Element :"))	
			self.Arr.append(No)

	def Display(self):
		print("\n\t Your Element is :",self.Arr)

	def EvenElement(self):
		print("\n\t Even Element is :",end=' ')
		for i in range(self.iSize):
			if self.Arr[i] % 2 == 0:
				print(self.Arr[i],end=' ')
	
	def SumElement(self):
		Sum=0
		for i in range(self.iSize):
			Sum=Sum + self.Arr[i];
		return Sum	

	def MaxValue(self):
		Max=self.Arr[0]
		for i in range(self.iSize):
			if self.Arr[i] > Max :
				Max=self.Arr[i]
		return Max

	
	def MinValue(self):
		Min=self.Arr[0]
		for i in range(self.iSize):
			if self.Arr[i] < Min :
				Min=self.Arr[i]
		return Min	


	def SearchElement(self,No):
		for i in range(self.iSize):
			if No == self.Arr[i]:
				break
		if No == self.Arr[i]:
			return True
		elif i == self.iSize :     
			return False				


				
def main():
	iNo=int(input("Enter A Size for Array : "))
	obj=ArrayOperation(iNo)
	obj.Accept()
	obj.Display()
	obj.EvenElement()
	iRet=obj.SumElement()
	print("\n\n\t Addition oF All Element :",iRet)
	iRet=obj.MaxValue()
	print("\n\n\t Max Value is Give List :",iRet)
	iRet=obj.MinValue()
	print("\n\n\t Min Value is Give List :",iRet)
	No=int(input("\n\tEnter Value Which You want Search :"))
	iRet=obj.SearchElement(No)
	if iRet == True :
		print("\n\tElement is Aviable :")
	else :
		print(" \n\tElement is Not Aviable :")	
if __name__=="__main__":
	main()			
	

