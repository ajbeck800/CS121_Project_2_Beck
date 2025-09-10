# Algorithm:

constant MAX is max length of array

function printValues (array):\
 print("[")\
 for i from zero to MAX:\
    print values[i]\
 print("]")

function sort (array):\
 create integer variables i and j\
 for i from zero to MAX - 1:\
    for j from zero to MAX - 1:\
        if array[j] > array[j+1]:\
            swap array[j] with array[j+1]\
            printArray(array)

function swap (pointer x, pointer y):\
 integer temp is equal to pointer x\
 pointer x is equal to pointer y\
 pointer y is equal to temp

