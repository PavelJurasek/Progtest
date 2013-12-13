#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
	if (argc < 2) {
		cout << "Usage: win2unix <filename> [filename, ...]";
		return 0;
	}

	ifstream in;
	ofstream out;
	
	for (int i = 1; i < argc; i++) {
		string filename = argv[i];
		
		in.open(filename);
		if (!in.is_open()) {
			cout << "Error opening input file." << endl;
			return 1;
		}
		
		out.open(filename + ".tmp");
		if (!in.is_open()) {
			cout << "Error opening output file." << endl;
			return 1;
		}	
		
		int count = 0;
		char c;
		do {
			if ((c = in.get()) == '\r') {
				count++;
			} else if (c != EOF) {
				out << c;
			}
		} while (!in.eof());
		
		cout << filename << ": " << count << " occurences of \\r found and removed." << endl;
		
		in.close();
		out.close();
		
		if (rename((filename + ".tmp").c_str(), filename.c_str())) {
			perror(("Error renaming file " + filename).c_str());
//			return 1;
		}
	}
	
	return 0;
}
