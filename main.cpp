#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

void print_map(char map[68][68], int a, int b, int x, int y)
{
	for (int i = a; i < y; i++)
	{
		for (int j = b; j < x; j++)
			cout << map[i][j];
		cout << endl;
	}
}

void take_map(char map[68][68], int x, int y){
	char global_map[64][64];
	int a, b;

	ifstream in("mapST");
	if (in.is_open())
		for (int i = 0; i < 64; i++ )
			for (int j = 0; j < 64; j++ )
				in >> global_map[i][j];
	in.close();

	a = rand() % 64 - y;
	b = rand() % 64 - x;

	for (int i = 2; i < y+2; i++ )
	{
		for (int j = 2; j < x+2; j++ )
			map[i][j] = global_map[a][b++];
		a++;
	}

	// print_map(map, 0, 0, 20, 20);
}

void check_shelf(char map[68][68], int x, int y, int i, int j)
{
	i -= 2;
	j -= 2;
	for (int m = i; m < i+5; m++)
	{
		for (int n = j; n < j+5; n++)
			if (map[m][n] == 'S' || map[m][n] == '.')
				map[m][n] = '~';
	}
}

void rewrite_map(char map[68][68], int x, int y)
{
	for (int i = 2; i < y+2; i++)
		for (int j = 2; j < x+2; j++)
		{
			if (map[i][j] == 'T')
			{
				map[i][j] = '#';
				check_shelf(map, x, y, i, j);
			}
			else if (map[i][j] == 'S')
				map[i][j] = '.';
		}

	// print_map(map, 0, 0, 20, 20);
}

int main(){
	char map_1[68][68];
	char map_2[68][68];
	int x, y;

	// print_map(map_1, 0, 0, 20, 20);

	cout << "X&Y: ";
	cin >> x >> y;
	take_map(map_1, x, y);
	// take_map(map_2, x, y);

	rewrite_map(map_1, x, y);
	// rewrite_map(map_2, x, y);

	// print_map(map_1, 0, 0, 20, 20);
	print_map(map_1, 2, 2, 18, 18);


	return 0;
}