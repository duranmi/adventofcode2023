#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char** argv)
{
	string num;
	unsigned int total = 0;
	
	ifstream fin;
	string line;

	fin.open("input.txt");

	while (getline(fin, line))
	{
		num = "xx";

		for (string::size_type i = 0; i < line.size(); ++i)
		{
			if (!isdigit(line[i]))
				continue;

			if (num[0] == 'x')
				num[0] = line[i];

			num[1] = line[i];
		}

		total += stoi(num);
	}

	fin.close();

	cout << "Total is " << total << endl;

	return EXIT_SUCCESS;
}