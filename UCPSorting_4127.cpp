// UCPSorting_4127.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//1. 
// a. Bagi daftar jadi 2 sublist, diurutkan dan tidak diurutkan
// b. Daftar yang diurutkan punya elemen pertama dan daftar yang tidak diurutkan punya elemen yang tersisa
// c. Variasikan i dari 1 hingga n-1
// d. Buatlah variabel sementara (temp)
// e. Atur temp = arr[i]
// f. Tetapkan j=i-1
// g. Ulangi sampai j >= 0 && arr[j] > temp
// h. Geser nilai indeks j ke indeks j+1
// i. Kurangi j dengan 1
// j. Simpan variabel temp pada indeks j+1
// 
//2.
// a. Variasikan terlebih dahulu j dari 0 hingga n-2 dan ulangi langkah tersebut
// b. Tetapkan min_index = j
// c. Variasikan i dari j+1 hingga n-1 dan ulangi langkah tersebut
// d. Letakkan arr[j] di sebelah kiri, dan arr[min_index] di sebelah kanan
// e. Jika arr[j] lebih kecil dari arr[min_index], tukar kedua posisi nilai tersebut
// f. Jadi arr[min_index] di sebelah kiri, dan arr[j] di sebelah kanan
// 
//3. 
// a. n-1

#include<iostream>
using namespace std;

int iqbal[27]; //Deklarasi array iqbal dengan ukuran 27
int n; //Deklarasi variabel n untuk menyimpan banyaknya elemen pada array

void input() { //Prosedur untuk input
	while (true) { //Looping
		cout << "Masukkan banyaknya elemen pada array : "; //Output ke layar
		cin >> n; //Input dari pengguna
		if (n <= 27) //Jika n kurang dari sama dengan 27
			break; //Keluar dari loop
		else { //Jika n lebih dari 20
			cout << "\nArray maksimal 27 elemen. \n"; //Output ke layar
		}
	}
	cout << endl; //Output baris kosong
	cout << "==========" << endl; //Output ke layar
	cout << "Masukkan elemen array" << endl; //Output ke layar
	cout << "==========" << endl; //Output ke layar

	for (int i = 0; i < n; i++) { //Looping dengan i dimulai dari 0 hingga n-1
		cout << "Data ke-" << (i + 1) << ": "; //Output ke layar
		cin >> iqbal[i]; //Input dari pengguna
	}
}

void SelectionSort() { //Prosedur untuk mengurutkan array dengan SelectionSort
	int min_index, i, j{};
	do {
		for (int j = 0; j <= n - 2; j++) {
			if (iqbal[i] < iqbal[min_index]) {
				int temp;
				temp = iqbal[j];
				iqbal[j] = iqbal[j + 1];
				iqbal[j + 1] = temp;
			}
		}min_index = j;
	} while (i = j + 1 && i <= n - 1);
}

void display() {
	cout << endl;
	cout << "=============" << endl;
	cout << "Element Array yang telah tersusun" << endl;
	cout << "=============" << endl;
	for (int j = 0; j < n; j++) {
		cout << iqbal[j] << endl; //Output each array element on a new line
	}
	cout << "Jumlah Pass = " << n - 1 << endl; //Correctly shows the total number of elements
	cout << endl;
}

int main() {

	input(); //Memanggil procedur input()
	SelectionSort(); //Mengurutkan data dengan algoritma selection sort
	display(); //Memanggil procedur display()
	system("pause");

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file