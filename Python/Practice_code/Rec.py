# Recursion : Calling the function from same function itself.

def DisplayIF(no):
    for i in range(no):     # Iteration uwing for loop
        print("Hello")
        
def DisplayIW(no):
    while no != 0:          # Iteration using while loop
        print("Hello")
        no = no -1
        
def DisplayR(no):
    if no != 0:
        no = no -1
        print("Hello")
        DisplayR(no)        # Recursive call
        
def main():
    print("Enter the number of iterations")
    value = int(input())
    
    print("Calling iterative function with for loop")
    DisplayIF(value)
    
    print("Calling iterative function with while loop")
    DisplayIW(value)
    
    print("Calling the recursive function")
    DisplayR(value)

if __name__ == "__main__":
    main()
