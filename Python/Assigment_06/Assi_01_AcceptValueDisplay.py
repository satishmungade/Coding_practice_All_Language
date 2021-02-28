class Demo:
	def __init__(self,iNo,iNo1):
		print("inside Constructor ")
		self.value=iNo
		self.value1=iNo1
	
	def Fun(self):
		print("value one is    :",self.value)
		print("value Scound is :",self.value1)
	def Gun(self):
		print("value one is    :",self.value)
		print("value Scound is :",self.value1)		

def main():
	obj=Demo(10,20)
	print("first object value is :")
	obj.Fun()
	obj.Gun()		

	obj1=Demo(55,66)
	print("Secounf object value is :")
	obj1.Fun()
	obj1.Gun()

if __name__=="__main__":
	main()	