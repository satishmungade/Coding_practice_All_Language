def EvenNumber(iNo):
	if iNo < 0:
		iNo=-iNo
	iNo=iNo *2
	for x in range(1,iNo):
		if x %2==0:
			print(x)


iNo=int(input('Enter a number'))
EvenNumber(iNo)	