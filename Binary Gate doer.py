def check(bits):
    if bits is 0 or 1:
        return True
    else:
        return False

def AND(bits1,bits2):
    if bits1 and bits2 is 1:
        print(f'{bits1} AND {bits2} is: {1}')
    else:
        print(f'{bits1} AND {bits2} is: {0}')

def OR(bits1,bits2):
    if bits1 and bits2 is 0:
        print(f'{bits1} OR {bits2} is: {0}')
    else:
        print(f'{bits1} OR {bits2} is: {1}')  

def NAND(bits1,bits2):
    if bits1 and bits2 is 1:
        print(f'{bits1} NAND {bits2} is: {0}')
    else:
        print(f'{bits1} NAND {bits2} is: {1}')

def NOR(bits1,bits2):
    if bits1 and bits2 is 0:
        print(f'{bits1} NOR {bits2} is: {1}')
    else:
        print(f'{bits1} NOR {bits2} is: {0}')

def XOR(bits1,bits2):
    if bits1 == bits2:
         print(f'{bits1} XOR {bits2} is: {0}')
    else:
         print(f'{bits1} XOR {bits2} is: {1}')

def XNOR(bits1,bits2):
    if bits1 == bits2:
         print(f'{bits1} XNOR {bits2} is: {1}')
    else:
         print(f'{bits1} XNOR {bits2} is: {0}')

bit1=int(input("Enter the first bit : "))
bit2=int(input("Enter the second bit : "))
if check(bit1) and check(bit2):
    AND(bit1,bit2)
    OR(bit1,bit2)
    NAND(bit1,bit2)
    NOR(bit1,bit2)
    XOR(bit1,bit2)
    XNOR(bit1,bit2)
else:
    print("Retry must enter the bits in 0 or 1 format. Nothing else!!")