#include <iostream>

using namespace std;

/*
void SelectionSort(int a[], int n)
{
 	int min; 
 	for(int i = 0; i < n-1; i++)
 	{
		min = i;
		for(int j = i+1; j < n; j++)
		{
			if (a[j] < a[min])
		 	min = j;
		} 
		 if (i != min) 
		{
		 	swap(a[min],a[i]);
		}
 	}
}

*/

/*
void Bubblesort (int a[],int n)
{
	for(int i = 0; i < n - 1;i++)
	{
		for(int j = n - 1; j > i; j--)
		{
			if(a[j] < a[j-1])
			{
				swap(a[j],a[j-1]);
			}
		}
	}
}

*/

void insertionSort(int a[], int n)
{
   int i, key, j;
   for (i = 1; i < n; i++)
   {
       key = a[i];
       j = i-1;
       while (j >= 0 && a[j] > key)
       {
           a[j+1] = a[j];
           j = j-1;
       }
       a[j+1] = key;
   }
}


/*
	void QuickSort(int a[],int left,int right)
	 {
 		int i, j, x;
		x = a[(left+right)/2];
	 	i = left; j = right;
	 	do {
	 	while (a[i] < x) i++;
	
	 	while (a[j] > x) j--;
		
	 	if ( i <= j)
		 { 
		 	swap(a[i], a[j]);
			 i++; 
			 j--; 
		 }
	 } while (i<j);
	 
	 	cout <<"[" <<  x << "]" << endl;
	 	for(int i  = 0 ; i < 10;i++)
		{
			cout << a[i] << "\t";
		}
		cout << endl;
	
	 	if (left < j) 
	 	QuickSort(a, left, j);
	 	if (right > i) 
	 	QuickSort(a, i, right);
	 }
	 
	 */
int main()
{
	int a[100];
	int n;
	cout << "Nhap vao so luong: ";
	cin >> n;
	
	for(int i = 0; i < n; i ++)
	{
		cin >> a[i];
	}
	//SelectionSort(a,n);
//	Bubblesort(a,n);
	InsertionSort(a,n);
	for(int i = 0; i < n; i ++)
	{
		cout << a[i] << "\t";
	}
	
}