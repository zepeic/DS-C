#include <stdlib.h>
#include <stdio.h>

struct Array {
	int A[10];
	int length;
	int size;
};

void Display(struct Array arr) {
	int i;
	printf("\nThe elements in this Array are:\n");
	for (i = 0; i < arr.length; i++) {
		printf("%d ", arr.A[i]);
	}
}

void Insert(struct Array* arr, int x) {
	int i;
	if (arr->length >= 0 && arr->length < arr->size) {
		arr->length++;
		arr->A[arr->length-1] = x;



	}
}
void Append(struct Array* arr, int index, int x) {
	int i;
	if (arr->length >= 0 && arr->length < arr->size) {
		arr->length++;
		for (i = arr->length - 1; i > index; i--) 
			arr->A[i] = arr->A[i - 1];
		arr->A[index] = x;

		}
	}

void Delete(struct Array* arr, int index) {
	int i;
	if (arr->length >= 0 && arr->length < arr->size) {
		for (i = index; i < arr->length - 1; i++)
			arr->A[i] = arr->A[i + 1];
		arr->length--;


	}
}

int LinearSearch(struct Array arr, int key) {
	int  i;
	if (arr.length >= 0 && arr.length <arr.size) {
		for (i = 0; i < arr.length; i++) {
			if (arr.A[i] == key) {
				return arr.A[i];
			}
		}
	}
	return -1;
}

int LinearSearch1(struct Array arr, int key) {
	int  i;
	if (arr.length >= 0 && arr.length < arr.size) {
		for (i = 0; i < arr.length; i++) {
			if (arr.A[i] == key) {
				return arr.A[i];
				arr.A[0] = arr.A[i];
			}
		}
	}
	return -1;
}

void main() {
	struct Array arr{{2,4,6,8,10},5,10 };
	Display(arr);
	Insert(&arr,10);
	Display(arr);
	Append(&arr, 2, 5);
	Display(arr);
	Delete(&arr, 2);
	Display(arr);
}