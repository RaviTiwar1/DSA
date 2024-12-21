#include <iostream>
#include <string>
#include <map>

int main()
{
    // Input a string
    std::string inputString;
    std::cout << "Enter a string: ";
    std::getline(std::cin, inputString);

    // Create a map to store character frequencies
    std::map<char, int> charFrequency;

    // Count the frequency of each character
    for (char c : inputString)
    {

        if (isalpha(c))
    {
        charFrequency[c]++;
    }
       
    }
    

    // Display the frequency of each character
    std::cout << "\nCharacter Frequencies:\n";
    for (const auto &pair : charFrequency)
    {
        std::cout << "'" << pair.first << "' appears " << pair.second << " times.\n";
    }

    return 0;
}
