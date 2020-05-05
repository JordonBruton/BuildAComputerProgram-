#include <cstdlib>
#include <iostream>
#include <cmath>
#include <vector>
#include <unordered_map>
#include "PreExistingBuild.h"
#include "Processors.h"
#include "GraphicsCards.h"
#include "LocalVariables.h"
#include "PowerSupply.h"
#include "RAM.h"
#include "Tower.h"

using namespace std;

// 4/28/2020 - 4/29/2020
	// To Do List:
		// Prompting users what their options are DONE
			// Already existing build DONE
			// Create your own pc DONE
		// Create basic builds with different price ranges DONE

// 4/30/20
	// To Do List:
		// Organize Classes into seperate file to make code cleaner DONE
		// Creating data strucutres for:
			// CPU DONE
// remember case:
	// can't have two of the smae prices
// Binary search tree(???)

// 5/4/2020 
	// To Do List:
		// Create GPU & Power supply options DONE
	// Issues: 
		// Can't figure out how to make local variable extend its data to other parts of the program
		// Why my some of my conditonal statements not being considered

// 5/5/2020
	// To Do List:	
		// RAM & Tower DONE

// 5/6/2020
	// To Do List:
		// Mother Board & SSD

// 5/7/2020
	// To Do List:
		// Hard Drive (If I have time)
		

int main()
{
	// Local variables 
	string option;
	string pre_existing = "p";
	string create_new = "c";
	string answer;
	GraphicsCards gpu;
	Processors processor;
	LocalVariables local;
	PowerSupply power;
	RAM ram;
	Tower tower;
	
	
	

	cout << "Welcome to the PC Creation Program!" << endl;
	cout << endl;
	cout << "Options: Pre-existing PC build or Create your own PC" << endl;
	cout << " Enter p for pre-existing build" << endl;
	cout << " Enter c to create your own PC" << endl;
	cin >> option;

	while (option == "p" || option == "c")
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
			
			cout << "Enter your budget to build your pc" << endl;
			cin >> local.budget;
			local.setBudget(local.budget);
			cout << "You're budget is: " << local.getBudget() << endl;
			
			cout << "Lets start your build!" << endl;
			
			processor.PickingOutProcessor(local);

			cout << "Here are the parts you have so far: " << endl;
			for (int i = 0; i < local.final_pc.size(); i++)
			{
				cout << local.final_pc[i] << endl;
			}

			cout << "Now that you got your processor, Lets pick out your GPU!" << endl;
			gpu.findingGPU(local);
			
			cout << "Here are the parts you have so far: " << endl;
			for (int i = 0; i < local.final_pc.size() ; i++)
			{
				cout << local.final_pc[i] << endl;
			}
			
			cout << "Now that you got your GPU, lets pick out your power supply!" << endl;
			power.findingPowerSupply(local);

			cout << "Here are the parts you have so far: " << endl;
			for (int i = 0; i < local.final_pc.size(); i++)
			{
				cout << local.final_pc[i] << endl;
			}

			cout << "Now that you got your Power Supply, Lets pick out your memory/RAM!" << endl;
			ram.findingRam(local);

			cout << "Here are the parts you have so far: " << endl;
			for (int i = 0; i < local.final_pc.size(); i++)
			{
				cout << local.final_pc[i] << endl;
			}

			cout << "Now that you got your Ram, lets pick out your Tower!" << endl;
			tower.findingTower(local);

			cout << "Here are the parts you have so far: " << endl;
			for (int i = 0; i < local.final_pc.size(); i++)
			{
				cout << local.final_pc[i] << endl;
			}

		}
	}
	

	return EXIT_SUCCESS;
}