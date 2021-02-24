def CheckPrime(Arr,iSize):
	Count = 0
	arr=list()
	for i in range(0,iSize):
		for j in range(2,Arr[i]/2):
			if Arr[i] % j == 0 :
				Count + 1
				break
			if Count == 0 and Arr[i] != 1:
				arr.append(Arr[i])

	return arr 			

