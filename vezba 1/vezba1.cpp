#include <cstdlib>
#include <iostream>
using namespace std;
/*
Ovaa funkcija go zema posledniot element kako pivot, go stava na tocnata pozicija
vo sortiranata niza(pomalite levo, pogolemite desno)	
*/
int partition(int arr[], int low, int high)
{
    int pivot = arr[low];
    int i = low - 1, j = high + 1;
 
    while (true) {
        do {
            i++;
        } while (arr[i] < pivot);
        do {
            j--;
        } while (arr[j] > pivot);
        if (i >= j)
            return j;
 
        swap(arr[i], arr[j]);
    }
}

// Generira sluchaen pivot, gi zamenuva pivot so krajniot element i ja povikuva funkcijata partition kako povratna vrednost
int partition_r(int arr[], int low, int high)
{
    // generira sluchaen broj megju low i high
    int random = low + rand() % (high - low);
 
    swap(arr[random], arr[low]);
 
    return partition(arr, low, high);
}
 
// Najvaznata funkcija koja implementira QuickSort
// arr[] => Niza koja ke se sortira
// low 	 => Poceten indeks
// high  => Kraen indeks
void quickSort(int arr[], int low, int high)
{
    if (low < high) {
        int pi = partition_r(arr, low, high);
 
        // Posebno sortira elementi pred particija i posle particija
        quickSort(arr, low, pi);
        quickSort(arr, pi + 1, high);
    }
}
 
// Funkcija koja ja pecati sortiranata niza
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout<<(char)arr[i]<<" ";
    cout<<"\n";
}
 
// Glavna programa
int main()
{	
    string str = "Sandra Kolevska INKI969";
	int arr[str.length()];
	// gi pretvora karakterite vo ascii kodovi i gi stava vo niza
	for(int i=0; i<str.length(); i++) {
		char x = str.at(i);
		arr[i] = (int)x;
		}
    int n = sizeof(arr) / sizeof(arr[0]);
    quickSort(arr, 0, n - 1);
    cout<<"Sortirana niza: \n";
    printArray(arr, n);
    return 0;
}
