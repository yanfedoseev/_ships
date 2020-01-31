#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

void take_map(char map[64][64], int x, int y){
	char global_map[64][64];
	int a, b;

	ifstream in("mapST");
	if (in.is_open())
		for( int i = 0; i < 64; i++ )
			for( int j = 0; j < 64; j++ )
				in >> global_map[i][j];
	in.close();

	a = rand() % 64 - y;
	b = rand() % 64 - x;

	for (int i = 0; i < y; i++)
	{
		for (int j = 0; j < x; j++)
			map[i][j] = global_map[a][b++];
		a++;
	}
}

void check_shelf(char map[64][64], int x, int y, int i, int j)
{
	char arr[68][68];

	for (int m = 2; m < y+2; m++)
	{
		for (int n = 0; n < x; n++)
			arr[m][n] = map[y][x++];
		y++;
	};

	if (i > 1 && i < y - 1 && j > 1 && j < x - 1 && \
		(map[i-2][j-2] == 'T' || ))
}

void rewrite_map(char map[64][64], int x, int y)
{
	for (int i = 0; i < y; i++)
	{
		for (int j = 0; j < x; j++)
			cout << map[i][j];
		cout << endl;
	}

	for (int i = 0; i < y; i++)
		for (int j = 0; j < x; j++)
			if (map[i][j] == 'T')
				map[i][j] = 'X';
			else if (map[i][j] == 'S')
				map[i][j] = ' ';
			else
				check_shelf(map, x, y, i, j);

	// for (int i = 0; i < 10; i++)
	// 	for (int j = 0; j < 10; j++)
	// 		if (map[i][j] == 'T')
	// 			map[i][j] = 'X';
	// 		else if (map[i][j] == 'd')
	// 			map[i][j] = 'd';
	// 		else
	// 			map[i][j] = ' ';

	for (int i = 0; i < y; i++)
	{
		for (int j = 0; j < x; j++)
			cout << map[i][j];
		cout << endl;
	}
}

int main(){
	char map_1[64][64];
	char map_2[64][64];
	int x, y;

	cout << "X&Y: ";
	cin >> x >> y;
	take_map(map_1, x, y);
	take_map(map_2, x, y);

	rewrite_map(map_1, x, y);
	rewrite_map(map_2, x, y);

	return 0;
}