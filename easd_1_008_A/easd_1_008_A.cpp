// karena Algoritma menyelesaikan masalah secara terurut
// Statis dan Dinamis
// faktor waktu, faktor diri sendiri, faktor 
// Quick Short karena Quick Sort adalah algoritma sorting yang sangat cepat dan efisien. Algoritma ini bekerja dengan membagi array menjadi dua bagian, dengan satu bagian memuat elemen yang lebih kecil dari pivot, dan bagian lain memuat elemen yang lebih besar dari pivot. Kemudian, algoritma dijalankan secara rekursif pada kedua bagian array tersebut hingga seluruh array terurut. Quick Sort dapat mengurutkan array dengan sangat cepat dan cocok untuk pengurutan array yang sangat besar. 
// -
// 

#include <iostream>  
using namespace std;


int dzar[28];
int cmp_count = 0;
int mov_count = 0;
int n;

void input() {
	while (true)
	{
		cout << "Masukkan panjang elemen array: ";
		cin >> n;

		if (n <= 28)
			break;
		else
			cout << "\nMaksium panjang array adalah 28" << endl;
	}

	cout << "\n------------------" << endl;
	cout << "\nEnter Array Element" << endl;
	cout << "\n------------------" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << ">";
		cin >> dzar[i];
	}
}


void swap(int x, int y)
{
	int temp;

	temp = dzar[x];
	dzar[x] = dzar[y];
	dzar[y] = temp;
}

void merge_sort(int low, int high)
{
	int pivot, i, DZ = 0;
	if (low > high)
		return;

	pivot = dzar[low];

	i = low + 1;
	DZ = high;

	merge_sort(low, mid)
		merge_sort(mid + 1, high) {

		Set i = low;
		Set DZ = mid + 1;
		Set k = low
	}

	{
		repeat until i > mid or DZ > high

			if (dzar[i] <= dzar[i])
				store dzar[i] at index k in array B
				increment i by 1

			else
				store dzar[i]at index k in array B
				increment DZ by 1
				increment k = low
	}

	{
		repeat until D > high
			store DZ[i] at index k in array B
			increment DZ by 1
			increment k by 1
	}

	{
		repeat until DZ mid
			store DZ[i] at index array B
			increment i by 1
			increment k by 1
	}



	if (low < DZ)
	{

		swap(low, DZ);
		mov_count++;
	}

	merge_short(low, DZ - 1);


	merge_short(DZ + 1, high);


}

void display() {
	cout << "\n-------------------" << endl;
	cout << "\Sorted Array" << endl;
	cout << "\------------------" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << dzar[i] << " ";
	}

	cout << "\n\nNumber of comprasions: " << cmp_count << endl;
	cout << "Number of data movements: " << mov_count << endl;
}
