/*
Author: Cristopher Torres
Date: 10/12/2023
The purpose of this code is to find duplicate characters in a given string. For the purpose of this exercise, characters such as
'I' and 'i' will count as separate characters. Should you wish to count them as one, a small change to the code may be required.
*/

#include <iostream>
#include <string>

int main()
{


	//Take user input and store as a string
	std::cout << "Enter your sentence.\n";
	std::string str;
	getline(std::cin, str);
	int count;
	int l = str.length();

	//Traverse user input comparing one character to the rest in the string
	for (int x = 0; x < l; x++)
	{
		//count is set to one as we pick our first character for comparison.
		count = 1;
		for (int y = x + 1; y < l; y++)
		{
			if (str[x] == str[y] && str[y] != ' ')
			{
				//If the next characters match our initial character, we increase our count by one. We want to do this to track duplicates.
				count++;
				//We set str[y] = '0' as we don't want to print our duplicate characters many times.
				str[y] = ' ';
			}
		}

		//Prints the character and number of occurrences in the given string. The process repeats until the entire string is traversed.
		if (count > 1 && str[x] != ' ') {
			std::cout << "The character: " << str[x] << "\nIs repeated " << count << " times\n\n";
		}
	}
	return 0;
}