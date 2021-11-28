#include <iostream>

using namespace std;

int main()
{
	int** arr = new int* [4];
	arr[0] = new int[1];
	arr[1] = new int[2];
	arr[2] = new int[1];
	arr[3] = new int[4];
	for (int i = 0; i < 4; i++)
	{
		arr[i] = new int[i + 1];
		for (int j = 0; j < 4; j++)
		{
			if (i == 0)
			{

				if (j == 0)
				{
					arr[i][j] = rand() % 10;
					cout << arr[i][j] << " ";
				}
			}
			else if (i == 1)
			{
				if (j == 0 || j == 1)
				{
					arr[i][j] = rand() % 10;
					cout << arr[i][j] << " ";
				}
				
			}
			else if (i == 2)
			{

				if (j == 0)
				{
					arr[i][j] = rand() % 10;
					cout << arr[i][j] << " ";
				}
				
			}
			else if (i == 3)
			{
				if (j == 0 || j == 1 || j = 2 || j = 3 )
				{
					arr[i][j] = rand() % 10;
					cout << arr[i][j] << " ";
				}
				
			}

		}
		cout << endl;
	}
}
