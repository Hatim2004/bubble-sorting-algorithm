/*
bubble sorting is used to arrange simple data by putting the largest number at first,
the coding done by Hatim.
*/

#include <iostream>
void bubble_sort(float arr[], int); // bubble sorting prototype function
void print_array(float arr[], int); // printing float array prototype function

int main()
{
	float numbers[] = {89.34, 98.345, 32.3, 53.6, 163.23, 4230.234, 120.1, 5434.98};
	int NumSize = sizeof(numbers)/sizeof(float); // counting the array size
	bubble_sort(numbers, NumSize); // calling the bubble sorting function
	print_array(numbers, NumSize); // calling the print array function

}

void bubble_sort(float arr[], int size)
{
	for(int i = 0; i < size - 1; i++) //loop over each element of the array to access them
	{
		for(int j = 0; j < size - 1 - i; j++) //loop over each element of the array to compare them
		{
			if(arr[j] < arr[j + 1]) // cheak if first number is less than the second number
			{
				float temp = arr[j]; // stor the first value
				arr[j] = arr[j + 1]; // first equal second 
				arr[j + 1] = temp; // second equal first
			}
		}
	}

}

void print_array(float arr[], int size)
{
	for(int i = 0; i < size; i++){
		std::cout << arr[i] << " "; // loop over each element of the array and print it
	}
}