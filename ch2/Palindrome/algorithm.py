def palindrome(s,a=0,b=None):                           # so the user can invoke the function with only the string without specify neither a nor b
    if b == None:                                       # I can't do palindrome(s,a=0,b=len(s)-1) 
        b = len(s) - 1                                  # check this https://stackoverflow.com/questions/17157272/is-there-a-way-to-set-a-default-parameter-equal-to-another-parameter-value
    if a>=b:
        return True
    return s[a] == s[b] and palindrome(s,a=a+1,b=b-1)


    