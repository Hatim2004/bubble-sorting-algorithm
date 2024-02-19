/*
bubble sorting is used to arrange simple data by putting the largest number at first
the coding done by Hatim.
*/
#include <iostream>
#include<bits/stdc++.h> 
void bubble_sort(float arr[], int); // bubble sorting prototype function
void array_input(float arr[], int); // printing float array prototype function
void array_output(float arr[], int); // input data to array 

int main()
{
	float floatNumbers[20];	
	int size; // counting the array size 
	std::cout << "Enter how many numbers do you want to sort: ";
	std::cin >> size;
	array_input(floatNumbers,size);
	bubble_sort(floatNumbers, size); // calling the bubble sorting function
	array_output(floatNumbers, size); // calling the print array function
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

void array_output(float arr[], int size)
{
	std::cout << "\nSorting done: ";
	for(int i = 0; i < size; i++){
		std::cout << arr[i] << " "; // loop over each element of the array and print it
	}
}

void array_input(float arr[], int size)
{
	std::cout << "\nEnter " << size << " numbers";
	for (int i = 0; i < size; i++)
	{
		std::cin >> arr[i];
	}
}
