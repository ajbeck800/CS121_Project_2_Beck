# Algorithm:

constant MAX is max length of array

function printValues (array):\
&nbsp;&nbsp;print("[")\
&nbsp;&nbsp;for i from zero to MAX:\
&nbsp;&nbsp;&nbsp;&nbsp;print values[i]\
&nbsp;&nbsp;print("]")

function sort (array):\
&nbsp;&nbsp;create integer variables i and j\
&nbsp;&nbsp;for i from zero to MAX - 1:\
&nbsp;&nbsp;&nbsp;&nbsp;for j from zero to MAX - 1:\
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;if array[j] > array[j+1]:\
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;swap array[j] with array[j+1]\
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;printArray(array)

function swap (pointer x, pointer y):\
&nbsp;&nbsp;integer temp is equal to pointer x\
&nbsp;&nbsp;pointer x is equal to pointer y\
&nbsp;&nbsp;pointer y is equal to temp

