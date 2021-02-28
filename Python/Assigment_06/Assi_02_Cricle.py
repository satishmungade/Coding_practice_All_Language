class Circle:
	def __init__(self):
		print(" inside Circle Constructor :")
		self.Radius=0.0
		self.Area=0.0
		self.Circumference=0.0
		self.PI=3.14
	def Accept(self):
		self.Radius=float(input("\n\t Enter a Radius with floating point :"))
	
	def CalculateArea(self):
		self.Area=self.PI*self.Radius*self.Radius

	def CalculateCircumference(self):
		self.Circumference= 2 *self.PI*self.Radius

	def Display(self):	
		print("\n\t User Enter Radius value is :",self.Radius)
		print("\n\t Area of Circle is :",self.Area)
		print("\n\t Circumference of circle is ",self.Circumference)


def main():
	print("\n object 1 operation  is :")
	obj1=Circle()
	obj1.Accept()
	obj1.CalculateArea()
	obj1.CalculateCircumference()
	obj1.Display()


	print("\n object 2 operation  is :")
	obj1=Circle()
	obj1.Accept()
	obj1.CalculateArea()
	obj1.CalculateCircumference()
	obj1.Display()

if __name__=="__main__":
	main()
