#include "stdio.h"
#include "stdlib.h"
#include "DynamicArray/dynamic_array.h"
int main()
{
	struct dArray* arr = arrayConstructor(sizeof(double));
	arrayWrite(arr, 0, 200);
	//arrayWrite(arr, 1, 1);
	//arrayWrite(arr, 2, 2);
	//arrayWrite(arr, 3, 2);

	//arrayExtend(arr);
	//arrayWrite(arr, 3, 2);
	//arrayWrite(arr, 4, 100);
	//arrayWrite(arr, 5, 2);


	double* res = arrayRead(arr,0);
	printf("%d", res);
}