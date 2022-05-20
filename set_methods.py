# Creating an empty set
a = set()
print(type(a))

# Adding values to an empty set
a.add(4)
# a.add(4)
# a.add([1,2,3,5])     ----> lists cannot be added to sets bcoz lists can be changed
# a.add({1:3})     ----> dictionaries cannot be added to sets bcoz lists can be changed
a.add("ashish")
a.add((1,2,3,5))     #----> tuples can be added to sets bcoz lists can be changed
print(a)