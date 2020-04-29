#include <cstdlib>
#include <iostream>
#include "PreExistingBuilds.h"
using namespace std;

// 4/28/2020
	// To Do List:
		// Prompting users what their options are DONE
			// Already existing build DONE
			// Create your own pc 
		// Create basic builds with different price ranges 
		// Creating data strucutres for:
			// CPU & GPU

int main()
{
	// Local variables 
	string option;
	string pre_existing = "p";
	string create_new = "c";
	int amount_on_pc = 0;

	cout << "Welcome to the PC Creation Program!" << endl;
	cout << endl;
	cout << "Options: Pre-existing PC build or Create your own PC" << endl;
	cout << " Enter p for pre-existing build" << endl;
	cout << " Enter c to create your own PC" << endl;
	cin >> option;

	if (option == pre_existing)
	{
		cout << "How much do you want to spend on your computer" << endl;
		cin >> amount_on_pc;

		if (amount_on_pc <= 500)
		{
				
		}
		else if (amount_on_pc <= 1000)
		{

		}
		else
		{

		}
		
	}
	else if (option == create_new)
	{

	}
	
	



	return EXIT_SUCCESS;
}