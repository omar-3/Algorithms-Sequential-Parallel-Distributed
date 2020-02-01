# this is just an implementation for horner rule
# check my answer on stackoverflow explaining the procedure
# https://stackoverflow.com/a/59895510/7644243
# this is the implementation of the question ... very clean and concise

def binary_to_decimal(binary):
    if len(binary) == 0:
        return 0
    return binary_to_decimal(binary[:-1]) * 2 + int(binary[-1]) # in c++ you can do the same "partitioning" with iterators



    