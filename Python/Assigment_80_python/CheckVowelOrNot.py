def CheckVowel(ch):
	if ch=='A' or ch =='E' or ch=='I' or ch=='O' or ch=='U':
		print("Its capital vowel ")
	if ch=='a' or ch== 'e' or ch=='i' or ch=='u' or ch=='o':
		print("Its small vowel")
	else:
		print("its Consonants")		


ch=input("enter charactor :")
CheckVowel(ch)