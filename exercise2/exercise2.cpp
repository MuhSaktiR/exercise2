#include <iostream>
using namespace std;

int sakti[121];
int n;
int i;

void input() 
{
	while (true)
	{
		cout << "Masukkan jumlah elemen dalam Array : ";
		cin >> n;
		if ((n > 0) && (n <= 121))
			break;
		else
			cout << "\nArray harus mempunyai minimum 1 dan maksimum 121 elemen.\n\n";
	}

	//Terima elemen Array
	cout << "\n-----------------------------------\n";
	cout << " Accept the element to be searched \n";
	cout << "-----------------------------------\n";
	for (i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << "> ";
		cin >> sakti[i];
	}
}

void prosedur() 
{
	int muhamad = 0;
	int ramadhan = n - 1;
	int mid;

	while (muhamad <= ramadhan) 
	{
		mid = (muhamad + ramadhan) / 2;

		if (sakti[mid] == i) {
			cout << "Found" << endl;
			break;
		}
		else if (i < sakti[mid]) {
			ramadhan = mid - 1;
			cout << "Element Not Found" << endl;
			break;
		}
		else if (i > sakti[mid]) {
			muhamad = mid + 1;
			cout << "Element Not Found" << endl;
			break;
		}
		else {
			break;
		}
	}
}

int main() 
{
	input();
	prosedur();

	return 0;
}