// Counting sheep.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

//int count_sheep(vector<bool> arr)
//{
//	int res = 0;
	//for (bool sheep : arr)
		//if (sheep)
			//res++;
//	return res;
	//std::count(arr.cbegin(), arr.cend(), true);
//}

int count_sheep(std::vector<bool> v) {
	return std::count(v.cbegin(), v.cend(), true);
}

int main()
{
	vector<bool> array1 = { true,  true,  true,  false,
								  true,  true,  true,  true ,
								  true,  false, true,  false,
								  true,  false, false, true ,
								  true,  true,  true,  true ,
								  false, false, true,  true };
    std::cout << count_sheep(array1);
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
