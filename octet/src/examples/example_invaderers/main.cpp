////////////////////////////////////////////////////////////////////////////////
//
// (C) Andy Thomason 2012-2014
//
// Modular Framework for OpenGLES2 rendering on multiple platforms.
//
// Invaderers - will space be free of 'em?
//
#include <iostream>
#include <fstream>
#include <vector>
#include "../../octet.h"
#include namespace std;
#include "invaderers_app.h"

/// Create a box with octet
//int main(int argc, char **argv)


	int main()
	{
		int choice;
		bool gameOn = true;
		while (gameOn != false) {
			cout << "*******************************\n";
			cout << " 1 - Start the game.\n";
			cout << " 2 - Story.\n";
			cout << " 3 - Help.\n";
			cout << " 4 - Exit.\n";
			cout << " Enter your choice and press return: ";

			cin >> choice;

			switch (choice)
			{
			case 1:
				cout << "game start!\n";
					// set up the platform.
					octet::app::init_all(argc, argv);

					// our application.
					octet::invaderers_app app(argc, argv);
					app.init();

					// open windows
					octet::app::run_all_apps();
				// rest of code here
				break;
			case 2:
				cout << "Story so far....\n";
				// rest of code here
				break;
			case 3:
				cout << "Ahahah, you really think I will help you?\n";
				// rest of code here
				break;
			case 4:
				cout << "End of Program.\n";
				gameOn = false;
				break;
			default:
				cout << "Not a Valid Choice. \n";
				cout << "Choose again.\n";
				cin >> choice;
				break;
			}

		}
		return 0;
	}
}