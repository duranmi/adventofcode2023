#include <iostream>
#include <fstream>
#include <string>

#define ROWS 139
#define COLS 141

using namespace std;

void print_matrix(char mat[][COLS])
{
	for (int i = 0; i < ROWS; ++i)
	{
		for (int j = 0; j < COLS; ++j)
		{
			printf("%c ", mat[i][j]);
		}
		printf("\n");
	}
}

int main(int argc, char** argv)
{
	int total = 0;
	char mat[ROWS][COLS]{};

	ifstream fin;
	string line;

	fin.open("input.txt");

	int numl = 0;
	while (getline(fin, line))
	{
		for (int i = 0; i < line.size(); ++i)
		{
			mat[numl][i] = line[i];
		}
		++numl;
	}

	fin.close();

	//TODO: fix loading, implement search
	//print_matrix(mat);

	std::cout << "Total is " << total << endl;

	return EXIT_SUCCESS;
}