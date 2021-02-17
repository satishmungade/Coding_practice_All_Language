def Print(name):
	icnt =0
	while icnt < 5:
		print(name)	
		icnt=icnt + 1

def main():
	name=input("Enter Your Massage : ")
	Print(name)

if __name__=="__main__":
	main()	