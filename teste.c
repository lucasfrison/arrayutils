#include "arrayutils.h"

void main() {
	int v[] = {1,2,3,4,3};
	printIntArray(v, length(v));
	updateIntArray(v, length(v), 100, 3);
	printIntArray(v, length(v));
}
