#include <iostream>
#include <string>

// Define/Clarify Variables
#define GROUP_A_THRESHOLD 20
#define GROUP_B_THRESHOLD 50
#define GROUP_A_NAME "Group A"
#define GROUP_B_NAME "Group B"
#define GROUP_C_NAME "Group C"

std::string GetGroup(int age);

int main()
{
    // Processes & Waits For Users Input Of Name & Age
	std::string name = "";
	int age = 0;
	std::string group = "";
	std::cout << "Please enter your name:";
	getline(std::cin, name);
	std::cout << "Please enter your age:";
	std::cin >> age;
	group = GetGroup(age);
	std::cout << "Welcome " << name << ". You are in " << group << ".\n";
}

// Displays Group Name Depending On What Age Was Inputed
std::string GetGroup(int age)
{
    if (age <= GROUP_A_THRESHOLD)
    {
        return GROUP_A_NAME;
    }
    else if (age <= GROUP_B_THRESHOLD)
    {
        return GROUP_B_NAME;
    }
    else
    {
        return GROUP_C_NAME;
    }
}