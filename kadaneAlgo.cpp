// C++ program to print maximum contiguous array sum 
#include<iostream> 
#include<climits> 
using namespace std; 

int kadane(int a[], int size) 
{ 
	int max= INT_MIN, sum = 0; 

	for (int i = 0; i < size; i++) 
	{ 
		sum += a[i]; 
		if (max < sum) 
			max = sum; 

		if (sum< 0) 
			sum = 0; 
	} 
	return max; 
} 


int main() 
{ 
    int t;
    cin>>t;
    while (t--)
 {
     int n;
      cin>>n;
	  int a[n];
      for (int i = 0; i < n; i++)
      {
          cin>>a[i];
      }
	int max_sum = kadane(a, n); 
	cout<< max_sum<<endl;
 }
	return 0; 
} 
