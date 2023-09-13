#include <stdio.h>
#include <assert.h>


float area(length, width)
{
	float area = length * width;
	return area;
}



float perimeter(length, width)
{
	float perimeter = length + width + length + width;
	return perimeter;
}


int main()
{
	float length = 0.0, width = 0.0;
	printf("\nTesting area function");
	assert(area(length = 10.0, width = 10.0) == 100.0);
	assert(area(length = 0.0, width = 9999.0) == 0.0);
	assert(area(length = 5.0, width = 8.0) == 40.0);
	printf("\nArea function is working");
	printf("\nTesting perimeter function");
	assert(perimeter(length = 10.0, width = 10.0) == 40.0);
	assert(perimeter(length = 0.0, width = 9999.0) == 19998.0);
	assert(perimeter(length = 5.0, width = 8.0) == 26.0);
	printf("\nPerimeter function is working");
	return 0;
}
