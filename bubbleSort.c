/* Algorithm:
 *
 * constant MAX is max length of array
 * 
 * function printValues (array):
 * 	print("[")
 * 	for i from zero to MAX:
 * 		print values[i]
 * 	print("]")
 *
 * function sort (array):
 * 	create integer variables i and j
 * 	for i from zero to MAX - 1:
 * 		for j from zero to MAX - 1:
 * 		if array[j] > array[j+1]:
 * 			swap array[j] with array[j+1]
 * 			printArray(array)
 *
 * function swap (*x, *y):
 * 	integer temp is equal to *x
 * 	integer *x is equal to *y
 * 	integer *y is equal to temp
*/

#include <stdio.h>
const int MAX = 9;

void printValues(int*);
void sort(int*);
void swap(int*, int*);

int main(){
	int values[] = {7, 3, 9, 4, 6, 1, 2, 8, 5};
	printf("Before: \n");
	printValues(values);
	
	// test swap
	int x = 3;
	int y = 5;
	printf("x: %d, y: %d \n", x, y);
	swap(&x, &y);
	printf("x: %d, y: %d \n", x, y);
	
	sort(values);
	printf("After: \n");
	printValues(values);
	
	return(0);
} // end main

void printValues(int* values){
	printf("[");
	for (int i = 0; i < (MAX-1); i++){
		printf("%d, ", values[i]);
	} // end for
	printf("%d", values[(MAX-1)]);
	printf("] \n");
} // end printValues

void sort(int* values){
	int i, j;
	for (i = 0; i < (MAX-1); i++){
		for (j = 0; j < (MAX-1); j++){
			if (values[j] > values[j+1]){
				swap((values+j), (values+j+1));
				printValues(values);
			} // end if
		} // end for j
	} // end for i
} // end sort

void swap(int* pA, int* pB){
	int temp = *pA;
	*pA = *pB;
	*pB = temp;
} // end swap
