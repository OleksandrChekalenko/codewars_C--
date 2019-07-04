// Find the smallest integer in the array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

int findSmallest(vector <int> list)
{
	int res = list[0];
	for (int i = 1; i < list.size(); i++)
		if (res > list[i])
			res = list[i];
	return res;
}
int main()
{
	std::cout << findSmallest({ -14,-102,-96,-36,-46,-15,-44 });
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
