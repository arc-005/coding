# write a program to fill in a letter template given below with name and date
letter = '''Dear <|Name|>,
You are selectd !
Thanks and regards
Harry
date: <|DATE|>

'''
name = input("Enter your name \n")
date = input("Enter date \n")
letter = letter.replace("<|Name|>", name)
letter = letter.replace("<|DATE|>", date)
print(letter)