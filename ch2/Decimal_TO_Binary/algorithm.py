def _decimal_to_binary(number,binary = ""):
    if number == 0:
        print(binary); return
    binary = str(number%2) + binary #binary = "1" + binary if number & 1 else "0" + binary  
    _decimal_to_binary(number//2, binary=binary)

# if I did return binary
# It returns None value which is really weird ... maybe because it is the top of the stack
# but this version is very much cleaner

_decimal_to_binary(108)


#######################################################################################
#######################################################################################
#   this version returns a value ... I just returns the value from the top of the stack 
#   until the end


def decimal_to_binary(number,binary = ""):
    value = None
    if number == 0:
        value = binary
        return value
    binary = str(number%2) + binary #binary = "1" + binary if number & 1 else "0" + binary  
    value = decimal_to_binary(number//2, binary=binary)
    return value

# if I did return binary
# It returns None value which is really weird ... maybe because it is the top of the stack

