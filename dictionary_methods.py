from turtle import update


myDict = {
    "fast" : "In A Quick manner",
    "ashish" : "An Entrepreneur",
    "marks" : [1,2,5],
    "anotherdict" : {"ashish" : "player"},
    1 :2
}

# DICTIONARY METHODS
print(list(myDict.keys()))  # Prints the keys of the dictionary
print(myDict.values())      # Prints the keys of the dictionary
print(myDict.items())      # Prints the ( keys, Values ) of the dictionary for all contents
print(myDict)
updateDict = { 
    "Ashish" : "An Innovator",
    "discipline" : "Friend",
    "ashish" : "hehe"
}
myDict.update(updateDict) #update the dictionary by adding key-value pairs from updateDict
print(myDict)

# The difference between .get and []  syntax in the dictionary
print(myDict.get("ashish2"))   #returns none as ashish2 is not present in the dictionary
# print(myDict["ashish"])      # throws an error as ashish2 is not present  in the dictionary
