// C++ program to demonstrate bubble sort

#include <iostream>
using namespace std;


void printarr(int arr[], int size);


int main(){


int arr[6] = {6,5, 2, 1, 4, 3};

int size = sizeof(arr) / sizeof(arr[0]);

// Inatialize a bool flage with ture as a default value 
bool flag = true;

// Capture the start time of the Algorithm
clock_t start, end;
start = clock();
// Bubble sort implementation
for(int i = 0; i< size-1; i++)
{
	for(int j =0; j < size -1 -i; j ++)
	{
		if(arr[j] > arr[j + 1])
		{	
			
			swap(arr[j], arr[j + 1]);
			
			// Change the flag to false when we swap
			flag = false;
		}
		
	}
	
	// Check if the flag is still ture (No swap happend "the arr is already sorted")
	if (flag == true)
	
		break;
	
}

// Capture the end time of the Algorithm
end = clock();

// Print Algorithm time
double Algo_time = (end - start) / (double)CLOCKS_PER_SEC;
cout<<"Time taken: "<< Algo_time<<endl;

printarr(arr, size);
}

// Print the sorted array
void printarr(int arr[], int size){
	
	
	for(int i = 0; i < size; i ++){
		cout<<arr[i]<< " ";
	}
	
	cout<<endl;
}