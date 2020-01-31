#include <iostream>
#include <cstdlib>
#include <iostream>
#include <fstream>
using namespace std;

int main(){
	int arr[64][64];

	for (int i = 0; i < 64; i++)
		for (int j = 0; j < 64; j++)
			arr[i][j] = rand() % 10;

	for (int i = 0; i < 64; i++)
	{
		for (int j = 0; j < 64; j++)
			cout << arr[i][j];
		cout << endl;
	}

	ofstream out;
    out.open("map");
    if (out.is_open())
    {
    	for (int i = 0; i < 64; i++)
		{
			for (int j = 0; j < 64; j++)
				out << arr[i][j];
			out << endl;
		}
    }
	out.close();

	return 0;
}