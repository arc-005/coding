from distutils.dir_util import copy_tree


for i in range(10):
    if i == 5:
        continue
    print(i)