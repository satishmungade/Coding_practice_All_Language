# Defination of Addition function
def Addition(no1,no2):
    ans = no1 + no2
    return ans

# Defination of Substraction function
def Substraction(no1,no2):
    ans = no1 - no2
    return ans

# Entry point function
def main():
    print("Enter first number : ")
    value1 = int(input())
    
    print("Enter second number : ")
    value2 = int(input())
    
    ret1 = Addition(value1,value2)
    ret2 = Substraction(value1,value2)
    
    print("Addition is :",ret1)
    print("Substraction is : ",ret2)

# Code starter
if __name__ == "__main__":
    main()
