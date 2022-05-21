# Write a program to create a dictionary of hindi words with values as their english translation. Provide user with an option to look it up ! 


myDict = {
    "pankha" :"fan",
    "dabba" : "box",
    "vastu" : "Item"
}
print("Options are ", myDict.keys())
a = input("Enter the hindi word \n")
# print("The meaning of your word is :", myDict[a])
print("The meaning of your word is :", myDict.get(a))
