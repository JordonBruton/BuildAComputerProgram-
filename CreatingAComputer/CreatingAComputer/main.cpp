#include <cstdlib>
#include <iostream>
#include <cmath>
using namespace std;

// 4/28/2020
	// To Do List:
		// Prompting users what their options are DONE
			// Already existing build DONE
			// Create your own pc 
		// Create basic builds with different price ranges 
		// Creating data strucutres for:
			// CPU & GPU

class PreExistingBuilds
{
public:

	// Low Tier pre-existing build
	void CheapestBuild()
	{
		cout << "cheap" << endl;
	}
	// Mid tier pre-existing build
	void MidTierBuild()
	{
		cout << "mid" << endl;
	}
	// High tier pre-existing build 
	void HighTierBuild()
	{
		cout << "High" << endl;
	}

};


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
				PreExistingBuilds cheap;
				cheap.CheapestBuild();
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
				PreExistingBuilds mid;
				mid.MidTierBuild();
			}
			else if (answer == "3")
			{
				PreExistingBuilds high;
				high.HighTierBuild();
			}

		}
	}
	
	
	
	



	return EXIT_SUCCESS;
}