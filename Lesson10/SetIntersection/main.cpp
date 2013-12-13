#include <iostream>


using namespace std;


void error();


int main(int argc, char *argv[])
{
	int sizeA, sizeB;
	double *array1, *array2, *intersection;
	
	
	
	cout << "Enter size of set A:" << endl;
	cin >> sizeA;
	
	if (cin.fail() || sizeA < 1) {
		error();
	}
	array1 = (double *) malloc(sizeA * sizeof(double));
	
	cout << "Enter members of set A:" << endl;
	for (int i = 0; i < sizeA; i++) {
		cin >> array1[i];
		
		if (cin.fail() || array1[i] < 0) {
			error();
		}
		
		for (int j = 0; j < i; j++) {
			if (array1[i] == array1[j]) {
				error();
			}
		}
	}
	
	
		
	cout << "Enter size of set B:" << endl;
	cin >> sizeB;
	
	if (cin.fail() || sizeB < 1) {
		error();
	}
	array2 = (double *) malloc(sizeB * sizeof(double));
	
	cout << "Enter members of set B:" << endl;
	for (int i = 0; i < sizeB; i++) {
		cin >> array2[i];
		
		if (cin.fail() || array2[i] < 0) {
			error();
		}
		
		for (int j = 0; j < i; j++) {
			if (array2[i] == array2[j]) {
				error();
			}
		}
	}
	
	
	
	intersection = (double *) malloc((sizeA > sizeB ? sizeA : sizeB) * sizeof(double));
	bool render_comma = false;
	
	cout << "Set intersection:" << endl;
	cout << "{";
	for (int i = 0; i < sizeA; i++) {
		for (int j = 0; j < sizeB; j++) {
			if (array1[i] == array2[j]) {
				if (render_comma) {
					cout << ", ";
				} else {
					render_comma = true;
				}
				
				cout << array1[i];
			}
		}
	}
	cout << "}\n";
	
	return 0;
}


void error()
{
	cout << "Invalid input." << endl;
	exit(1);
}
