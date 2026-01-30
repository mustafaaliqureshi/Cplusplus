#include <iostream>
using namespace std;
int main ()
{
	int array[] = {1, 3, 6, 4 ,8};
//	address of an element in array = base address(index*size of element)
	cout << " base address of array " << array << endl;
	cout << "size of int " << sizeof(int) << " and array, i think the index/range must put " << sizeof(array[3])  << endl;
	cout << " address of an element  "<< array + (2 * sizeof(array))<< endl;
	cout << " address of an element  "<< array + (2 * 4)<< endl;

	return 0;
}