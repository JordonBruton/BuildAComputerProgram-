#include <cstdlib>
#include <iostream>
#include <cmath>
#include <vector>
#include <unordered_map>
#include <fstream>
#include "PreExistingBuild.h"
#include "Processors.h"
#include "GraphicsCards.h"
#include "LocalVariables.h"
#include "PowerSupply.h"
#include "RAM.h"
#include "Tower.h"
#include "MotherBoard.h"
#include "SolidStateDrive.h"

using namespace std;
		
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
	MotherBoard mobo;
	SolidStateDrive ssd;
	ofstream fout;


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

			cout << endl;

			cout << "Now that you got your processor, Lets pick out your GPU!" << endl;
			gpu.findingGPU(local);
			
			cout << "Here are the parts you have so far: " << endl;
			for (int i = 0; i < local.final_pc.size() ; i++)
			{
				cout << local.final_pc[i] << endl;
			}

			cout << endl;
			
			cout << "Now that you got your GPU, lets pick out your Power Supply!" << endl;
			power.findingPowerSupply(local);

			cout << "Here are the parts you have so far: " << endl;
			for (int i = 0; i < local.final_pc.size(); i++)
			{
				cout << local.final_pc[i] << endl;
			}

			cout << endl;

			cout << "Now that you got your Power Supply, Lets pick out your Memory/Ram!" << endl;
			ram.findingRam(local);

			cout << "Here are the parts you have so far: " << endl;
			for (int i = 0; i < local.final_pc.size(); i++)
			{
				cout << local.final_pc[i] << endl;
			}

			cout << endl;

			cout << "Now that you got your Ram, Lets pick out your Mother Board!" << endl;
			mobo.findingMotherBoard(local);

			cout << "Here are the parts you have so far: " << endl;
			for (int i = 0; i < local.final_pc.size(); i++)
			{
				cout << local.final_pc[i] << endl;
			}

			cout << endl;

			cout << "Now that you got your MotherBoard, Lets pick out your SSD Card!" << endl;
			ssd.findingSolidStateDrive(local);
			
			cout << "Here are the parts you have so far: " << endl;
			for (int i = 0; i < local.final_pc.size(); i++)
			{
				cout << local.final_pc[i] << endl;
			}

			cout << endl;

			cout << "Now that you got your SSD Card, lets get our last part which is the Tower!" << endl;
			tower.findingTower(local);

			cout << endl;

			cout << "Here is your final build!" << endl;
			for (int i = 0; i < local.final_pc.size(); i++)
			{
				cout << local.final_pc[i] << endl;
			}
			cout << "Here is your ending budget: " << local.getNewBudget() << endl;

			cout << endl;

			cout << "Do you want to create a file of this information?" << endl;
			string file_answer;
			cin >> file_answer;
			if (file_answer == "yes" || file_answer == "y")
			{
				cout << "Enter what you want the file name to be: " << endl;
				string desired_file_name;
				cin >> desired_file_name;
				fout.open(desired_file_name);

				for (int i = 0; i < local.final_pc.size(); i++)
				{
					fout << local.final_pc[i] << endl;
				}

				cout << endl;

				fout << "Here is your ending budget: " << local.getNewBudget() << endl;

				return 0;
			}
			else
			{
				return 0;
			}


		}
	}
	

	return EXIT_SUCCESS;
}