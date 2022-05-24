# A spam comment is defined as a text containing following keywords :
# "make a lot of money" ,"buy now", "subscribe this", "click this". Write a program to detect these spams.

comment = input("Enter the text \n")
# spam = False
if("make a lot of money" in comment):
    spam = True
elif("buy now" in comment):
    spam = True
elif("click this" in comment):
    spam = True
elif("subscribe this" in comment):
    spam = True
else:
    spam = False

if(spam):
    print("This text is spam")
else:
    print("This text is not spam")

