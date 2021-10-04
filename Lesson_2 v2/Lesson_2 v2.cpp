// Lesson_2 v2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

//prototype classes (whatever happened to the prototype game? that was pretty fun.)
void menu();
void help();
void settings();
void exit();



void menu()
{
    std::string choice;
    int ichoice = 0;
    std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n" << std::endl;
    std::cout << "@~~~~~~~~~~~~~~~~~~~@" << std::endl;
    std::cout << "|THE GAME: MAIN MENU|" << std::endl;
    std::cout << "|1. Play            |" << std::endl;
    std::cout << "|2. Settings        |" << std::endl;
    std::cout << "|3. Help            |" << std::endl;
    std::cout << "|4. Quit            |" << std::endl;
    std::cout << "@~~~~~~~~~~~~~~~~~~~@" << std::endl;

    try
    {
        std::cin >> choice;
        ichoice = std::floor(std::stof(choice));
    }
    catch (std::exception ex)
    {
        std::cout << "Please Enter An Integer Value" << std::endl;
        return;
    }

    switch (ichoice)
    {
    case 1:
        std::cout << "You have chosen play." << std::endl;
        system("pause");
        menu();
        break;
    case 2:
        settings();
        break;
    case 3:
        help();
        break;
    case 4:
        exit();
        break;
    default:
        std::cout << "Invalid choice. Please try again." << std::endl;
        break;
    }


}

void settings()
{
    int choice = 0;
    std::cout << "THE GAME: SETTINGS MENU \n \n \n" << std::endl;
    std::cout << "1. Settings Option" << std::endl;
    std::cout << "2. Return to main menu" << std::endl;

    std::cin >> choice;

    if (choice == 1)
    {
        std::cout << "Setting adjusted." << std::endl;
        system("pause");
        settings();
    }
    else if (choice == 2)
    {
        menu();
    }
    else
    {
        std::cout << "Invalid choice, returning to main menu..." << std::endl;
        system("pause");
    }
}

void help()
{
    int choice = 0;
    std::cout << "THE GAME: HELP MENU \n \n \n" << std::endl;
    std::cout << "1. Help" << std::endl;
    std::cout << "2. Return to main menu" << std::endl;

    std::cin >> choice;

    if (choice == 1)
    {
        std::cout << "get good lol." << std::endl;
        system("pause");
        help();
    }
    else if (choice == 2)
    {
        menu();
    }
    else
    {
        std::cout << "Invalid choice, returning to main menu..." << std::endl;
        system("pause");
    }
}

void exit()
{
    char choice;
    std::cout << "You are attempting to exit the menu. Are you sure? Y/N" << std::endl;
    std::cin >> choice;

    if (choice == 'y' || 'Y')
    {
        std::cout << "Exiting application..." << std::endl;
        system("pause");
        exit(0);
    }
    else if (choice == 'n' || 'N')
    {
        std::cout << "Returning to menu..." << std::endl;
        system("pause");
        menu();
    }
    else
    {
        std::cout << "Invalid choice, returning to main menu..." << std::endl;
        system("pause");
    }
}

int main()
{
    while (1)
        menu();
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
