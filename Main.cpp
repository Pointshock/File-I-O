#include <string>
#include <iostream>
#include <fstream>
using namespace std;

// loadFile function for loading a saved file.
int loadFile() {
	string readResults;
	ifstream readFile("newFile.txt", ios::in);

	if (readFile.is_open()) {
		while (getline(readFile, readResults)) {
			cout << readResults << '\n';
		}
		readFile.close();
	}
	else
		cout << "Can't find the file.";
	return 0;
}

//place all functions besides main here
int main() {
	cout << "Would you like to open the saved file?\n";
	std::string userChoice; //creates the userChoice string
	cout << "Enter 1 for yes and 2 for no.\n";
	getline(cin, userChoice); //promps user
	std::string name = userChoice; //takes user input
	if (userChoice == "1") {
		loadFile(); //calls loadFile function if user entered 1
	}
	else {
		cout << "\nYou Choose not to open a saved file."; //if user enters anything else besides 1 then it displays text
	}

	ofstream newFile; //creates newFile
	newFile.open("NewFile.txt", ios::out); //defines newFile
	cout << "The file was saved successfully.";
	//Title
	std::cout << "\n\n\n\t *** Dog Petting Simulator ***\n\n";
	newFile << "\n\n\n\t *** Dog Petting Simulator ***\n\n";
	



	//Description for user
	std::cout << "\nWelcome weary traveler, you just stumbled out of the forest into this small village.\n";
	newFile << "\nWelcome weary traveler, you just stumbled out of the forest into this small village.\n";
	std::cout << "\nYou can see no humans, only lots of dogs all happy to see you!\n";
	newFile << "\nYou can see no humans, only lots of dogs all happy to see you!\n";
	std::cout << "\nA fluffy golder retriever walks up to you wagging its tail and sits at your feet.\n";
	newFile << "\nA fluffy golder retriever walks up to you wagging its tail and sits at your feet.\n";
	std::cout << "\nWhat would you like to do to it?\n";
	newFile << "\nWhat would you like to do to it?\n";
	//First dog encounter
	std::cout << "\nEnter 1 to pet his head and 2 to boop his nose.\n";
	newFile << "\nEnter 1 to pet his head and 2 to boop his nose.\n";
	//Make a var to hold user choice
	
	//Collect user choice here
	getline(std::cin, userChoice);
	//Gets results based on the user choice
	
	//If the user enters 1 it will show the following text
	if (userChoice == "1")
	{
		std::cout << "\n\nYou have chosen to pet his head!\n";
		newFile << "\n\nYou have chosen to pet his head!\n";
		std::cout << "\nHis tail starts wagging even faster and he looks at you and smiles.\n";
		newFile << "\nHis tail starts wagging even faster and he looks at you and smiles.\n";
		std::cout << "\nGreat Job! You have made a friend.\n";
		newFile << "\nGreat Job! You have made a friend.\n";
	}
	//If the user enters 2 it will show the following text
	else if (userChoice == "2")
	{
		std::cout << "\n\nYou have chosen to boop his nose!\n";
		newFile << "\n\nYou have chosen to boop his nose!\n";
		std::cout << "\nHe grunts and stops wagging his tail.\n";
		newFile << "\nHe grunts and stops wagging his tail.\n";
		std::cout << "\nHe still sits at your feet but doesn't seem to be as interested in you anymore.\n";
		newFile << "\nHe still sits at your feet but doesn't seem to be as interested in you anymore.\n";
	}
	//If the user enters nothing it will show the following text
	else
	{
		std::cout << "\n\nYou are confused and look at him.\n";
		newFile << "\n\nYou are confused and look at him.\n";
	}




	//Description for user
	std::cout << "\nAfter seeing your interaction with the golden retriever, the other dogs start to make their way over to you.\n";
	newFile << "\nAfter seeing your interaction with the golden retriever, the other dogs start to make their way over to you.\n";
	std::cout << "\nYou count 7 total, each a different breed.\n";
	newFile << "\nYou count 7 total, each a different breed.\n";
	std::cout << "\nWhat would you like to do?\n";
	newFile << "\nWhat would you like to do?\n";
	//Second dog encounter
	std::cout << "\nEnter 1 to run away and 2 to pet them all.\n";
	newFile << "\nEnter 1 to run away and 2 to pet them all.\n";
	//Make a var to hold user choice

	//Collect user choice here
	getline(std::cin, userChoice);
	//Gets results based on the user choice
	//std::string name = userChoice;
	//If the user enters 1 it will show the following text
	if (userChoice == "1")
	{
		std::cout << "\n\nYou have chosen to run away!\n";
		newFile << "\n\nYou have chosen to run away!\n";
		std::cout << "\nYou are quickly stopped when you trip over a chihuahua!\n";
		newFile << "\nYou are quickly stopped when you trip over a chihuahua!\n";
		std::cout << "\nThe rest of the dogs surround you and start licking you.\n";
		newFile << "\nThe rest of the dogs surround you and start licking you.\n";
		std::cout << "\nYou realize they are friendly and decide to stay.";
		newFile << "\nYou realize they are friendly and decide to stay.";
	}
	//If the user enters 2 it will show the following text
	else if (userChoice == "2")
	{
		std::cout << "\n\nYou have chosen to pet them all!\n";
		newFile << "\n\nYou have chosen to pet them all!\n";
		std::cout << "\nIt takes a bit of time to give them all an equal amount of pets, but you did it.\n";
		newFile << "\nIt takes a bit of time to give them all an equal amount of pets, but you did it.\n";
		std::cout << "\nThey seem to love you even more now!\n";
		newFile << "\nThey seem to love you even more now!\n";
	}
	//If the user enters nothing it will show the following text
	else
	{
		std::cout << "\n\nYou are confused and look at them.\n";
		newFile << "\n\nYou are confused and look at them.\n";
	}




	//Description for user
	std::cout << "\nThe golden retriever barks at you.\n";
	newFile << "\nThe golden retriever barks at you.\n";
	std::cout << "\nHe seems to be saying that he wants you to follow him.\n";
	newFile << "\nHe seems to be saying that he wants you to follow him.\n";
	std::cout << "\nWhat would you like to do?\n";
	newFile << "\nWhat would you like to do?\n";
	//Third dog encounter
	std::cout << "\nEnter 1 to follow him and 2 to sit down and rest.\n";
	newFile << "\nEnter 1 to follow him and 2 to sit down and rest.\n";
	//Make a var to hold user choice
	//std::string userChoice;
	//Collect user choice here
	getline(std::cin, userChoice);
	//Gets results based on the user choice
	//std::string name = userChoice;
	//If the user enters 1 it will show the following text
	if (userChoice == "1")
	{
		std::cout << "\n\nYou have chosen to follow him!\n";
		newFile << "\n\nYou have chosen to follow him!\n";
		std::cout << "\nHe leads you through some bushes and shrubs to a pile of treasure!\n";
		newFile << "\nHe leads you through some bushes and shrubs to a pile of treasure!\n";
		std::cout << "\nIt's not a pile of gold and jewels, but instead a pile of dog treats.\n";
		newFile << "\nIt's not a pile of gold and jewels, but instead a pile of dog treats.\n";
	}
	//If the user enters 2 it will show the following text
	else if (userChoice == "2")
	{
		std::cout << "\n\nYou have chosen to sit down and rest!\n";
		newFile << "\n\nYou have chosen to sit down and rest!\n";
		std::cout << "\nYou fall into a slumber and when you awake you see you are in a new place next to a pile of treasure.\n";
		newFile << "\nYou fall into a slumber and when you awake you see you are in a new place next to a pile of treasure.\n";
		std::cout << "\nIt's not a pile of gold and jewels, but instead a pile of dog treats.\n";
		newFile << "\nIt's not a pile of gold and jewels, but instead a pile of dog treats.\n";
	}
	//If the user enters nothing it will show the following text
	else
	{
		std::cout << "\n\nYou are confused and look at him.\n";
		newFile << "\n\nYou are confused and look at him.\n";
	}




	//Description for user
	std::cout << "\nYou are hungry and decide to snack on some of the dog treats.\n";
	newFile << "\nYou are hungry and decide to snack on some of the dog treats.\n";
	std::cout << "\nThere's jerky and dog bone treats.\n";
	newFile << "\nThere's jerky and dog bone treats.\n";
	std::cout << "\nWhat would you like to do?\n";
	newFile << "\nWhat would you like to do?\n";
	//Fourth dog encounter
	std::cout << "\nEnter 1 to eat the jerky treat and 2 to eat the dog bone treat.\n";
	newFile << "\nEnter 1 to eat the jerky treat and 2 to eat the dog bone treat.\n";
	//Make a var to hold user choice
	//std::string userChoice;
	//Collect user choice here
	getline(std::cin, userChoice);
	//Gets results based on the user choice
	//std::string name = userChoice;
	//If the user enters 1 it will show the following text
	if (userChoice == "1")
	{
		std::cout << "\n\nYou have chosen to eat the jerky treat!\n";
		newFile << "\n\nYou have chosen to eat the jerky treat!\n";
		std::cout << "\nYou pass out and wake up in the body of a golden retriever!\n";
		newFile << "\nYou pass out and wake up in the body of a golden retriever!\n";
		std::cout << "\nFollowing your tracks through the bushes and shrubs you see a person emerge from the forest.\n";
		newFile << "\nFollowing your tracks through the bushes and shrubs you see a person emerge from the forest.\n";
		std::cout << "\nYou walk up to him and let him pet you and then bark at him and lead him to the treats to warn him.\n";
		newFile << "\nYou walk up to him and let him pet you and then bark at him and lead him to the treats to warn him.\n\n\n\n\n\n";
	}
	//If the user enters 2 it will show the following text
	else if (userChoice == "2")
	{
		std::cout << "\n\nYou have chosen to eat the dog bone treat!\n";
		newFile << "\n\nYou have chosen to eat the dog bone treat!\n";
		std::cout << "\nYou pass out and wake up in the middle of a forest!\n";
		newFile << "\nYou pass out and wake up in the middle of a forest!\n";
		std::cout << "\nYou decide to look for a nearby village for help.\n";
		newFile << "\nYou decide to look for a nearby village for help.\n\n\n\n\n\n";
	}
	//If the user enters nothing it will show the following text
	else
	{
		std::cout << "\n\nYou think more and get hungrier.\n";
		newFile << "\n\nYou think more and get hungrier.\n\n\n\n\n\n";
	}
	newFile.close();
	return 0;
}