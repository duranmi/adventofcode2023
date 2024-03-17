#include <iostream>
#include <fstream>
#include <string>

using namespace std;



int main(int argc, char** argv)
{
	unsigned int total = 0;

	ifstream fin;
	string line;

	fin.open("input.txt");

	while (getline(fin, line))
	{
		// TODO
	}

	fin.close();

	cout << "Total is " << total << endl;

	return EXIT_SUCCESS;
}