#include <cstdlib>
#include <iostream>
#include <cmath>
#include <vector>
#include <unordered_map>
#include "PreExistingBuild.h"
#include "Processors.h"

using namespace std;

// 4/28/2020 - 4/29/2020
	// To Do List:
		// Prompting users what their options are DONE
			// Already existing build DONE
			// Create your own pc DONE
		// Create basic builds with different price ranges DONE
// 4/30/20
	// To Do List:
		// Organize Classes into seperate file to make code cleaner 
		// Creating data strucutres for:
			// CPU & GPU
// remember case:
	// can't have two of the smae prices
// Binary search tree(???)


int main()
{
	// Local variables 
	string option;
	string pre_existing = "p";
	string create_new = "c";
	string answer;
	

	cout << "Welcome to the PC Creation Program!" << endl;
	cout << endl;
	cout << "Options: Pre-existing PC build or Create your own PC" << endl;
	cout << " Enter p for pre-existing build" << endl;
	cout << " Enter c to create your own PC" << endl;
	cin >> option;

	while (option == "p" || "c")
	{

		if (option == pre_existing)
		{
			cout << "Indicate what tier of computer, 1 being the cheapest and 3 being the most expensive and best quality" << endl;
			cout << "Enter '1' for tier 1" << endl;
			cout << "Enter '2' for tier 2" << endl;
			cout << "Enter '3' for tier 3" << endl;
			cin >> answer;

			if (answer == "1")
			{
				PreExistingBuild low;
				low.LowTierBuild();
				cout << "If your happy with your results enter exit" << endl;
				cout << "If you want to change your tier for a pre-existing build enter p" << endl;
				cout << "If you want to create your own PC enter c" << endl;
				cin >> option;
				if (option == "exit")
				{
					return 0;
				}
			}
			else if (answer == "2")
			{
				PreExistingBuild mid;
				mid.MidTierBuild();
				cout << "If your happy with your results enter exit" << endl;
				cout << "If you want to change your tier for a pre-existing build enter p" << endl;
				cout << "If you want to create your own PC enter c" << endl;
				cin >> option;
				if (option == "exit")
				{
					return 0;
				}
			}
			else if (answer == "3")
			{
				PreExistingBuild high;
				high.HighTierBuild();
				cout << "If your happy with your results enter exit" << endl;
				cout << "If you want to change your tier for a pre-existing build enter p" << endl;
				cout << "If you want to create your own PC enter c" << endl;
				cin >> option;
				if (option == "exit")
				{
					return 0;
				}
			}

		}
		else
		{
			Processors processor;
			cout << "Enter your budget to build your pc" << endl;
			cin >> processor.budget;
			cout << "You're budget is: " << processor.budget<< endl;
			cout << "Lets start your build!" << endl;
			
			processor.PickingOutProcessor();

			cout << "Here are the parts you have so far: " << endl;
			for (int i = 0; i < processor.final_pc.size(); i++)
			{
				cout << processor.final_pc[i] << endl;
			}

			cout << "Now that you got your processor, Lets pick out your GPU!" << endl;

		}
	}
	
	
	
	



	return EXIT_SUCCESS;
}