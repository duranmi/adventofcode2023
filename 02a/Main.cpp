#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int max(const int a, const int b)
{
	return (a >= b) ? a : b;
}

int main(int argc, char** argv)
{
	int total = 0;

	ifstream fin;
	string line;

	fin.open("input.txt");

	while (getline(fin, line))
	{
		size_t colon = line.find(":");
		string ID = line.substr(5, colon - 5);

		std::cout << ID << endl;

		string str = line.substr(colon + 1, string::npos);

		bool flagNumber = false, flagColor = false, flagNextHand = false;
		int red = 0, green = 0, blue = 0;
		string tmp = "";

		std::cout << str << endl;

		for (string::size_type i = 0; i < str.size(); ++i)
		{
			if (isdigit(str[i]))
			{
				flagNumber = true;
				tmp += str[i];
				continue;
			}

			if (str[i] == 'r')
			{
				red = max(red, stoi(tmp));
				tmp = "";
				i += 2;
				continue;
			}

			if (str[i] == 'g')
			{
				green = max(green, stoi(tmp));
				tmp = "";
				i += 4;
				continue;
			}

			if (str[i] == 'b')
			{
				blue = max(blue, stoi(tmp));
				tmp = "";
				i += 3;
				continue;
			}
		}

		std::cout << "red " << red << " green " << green << " blue " << blue << endl;

		total += (red * green * blue);
	}

	fin.close();

	std::cout << "Total is " << total << endl;

	return EXIT_SUCCESS;
}