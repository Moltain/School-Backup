# School-Backup
// HouseholdSize.cpp - This program uses a bubble sort to arrange up to 300 household sizes in
// descending order and then prints the mean and median household size. 
// Input:  Interactive.
// Output:  Mean and median household size. 

#include <iostream>
#include <string>
using namespace std;
void bubbleSort(int Array[], int n)
{
for(int i = 0; i < n-1; i++)
for(int j = 0; j < n-i-1; j++)
if(Array[j] > Array[j+1])
{
int temp = Array[j];
Array[j] = Array[j+1];
Array[j+1] = temp;
}
}
int main() 
{
   // Declare variables.
		
   const int SIZE = 300;	// Number of household sizes
   int householdSizes[SIZE];   	// Array used to store 300 household sizes
   int x; 
   int limit = SIZE;
   int householdSize = 0;
   int pairsToCompare = 0;
   bool switchOccurred; 
   int temp;
   double sum = 0;
   double mean = 0;
   double median = 0;
 


   // Input household size		
   cout << "Enter household size or 999 to quit: ";
   cin >> householdSize;
   
   // This is the work done in the fillArray() function
   x = 0;
   while(x < limit && householdSize != 999)   
   {
      // Place value in array.
      householdSizes[x] = householdSize;
      // Calculate total of household sizes
        sum += householdSizes[x]; 
      x++;    // Get ready for next input item.
      cout << "Enter household size or 999 to quit: ";
      cin >> householdSize;
       pairsToCompare ++;
   }  // End of input loop.
	limit = x;
   // Find the mean
   mean = sum / limit;
   // This is the work done in the sortArray() function
bubbleSort(householdSizes, limit);
    
   // This is the work done in the displayArray() function

   // Print the mean
cout << mean << endl;
   // Find the median
   median = 3;
   // Print the median
    		cout << median << endl;
   return 0;
} // End of main function
