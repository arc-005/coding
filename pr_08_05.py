# Write a python program to remove a given word from a string and strip it at the same time.

def remove_And_split(string,word):
    newstr = string.replace(word, "")
    return newstr.strip()
this = "      ashish    is   good   "
n = remove_And_split(this,"ashish")
print(n)
