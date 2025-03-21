
#include<iostream>
#include<unordered_map>
#include<string>

using namespace std;

int lengthOfTheSubstring(string s) {
    unordered_map<char, int> charIndexMap; // Map to store the most recent index of each character
    int maxLength = 0; // Variable to store the maximum length of substring found 
    int left = 0; // Left boundary of the current window

    for (int right = 0; right < s.size(); right++) {
        // If the character is found in the map and its index is within the current window
        if (charIndexMap.find(s[right]) != charIndexMap.end() && charIndexMap[s[right]] >= left) {
            left = charIndexMap[s[right]] + 1; // Move the left boundary to exclude the repeated character
        }
        charIndexMap[s[right]] = right; // Update the map with the current index off the character

        // Calculate the length of the current window and update maxLength if necessary
        maxLength = max(maxLength, right - left + 1);
    }
 
    return maxLength; // Return the length of the longest substring without repeating characters
}

int main() {
    string s;
    cin >> s; // Input the string
    cout << "Length of the longest substring: " << lengthOfTheSubstring(s) << endl; // Output the result

    return 0;
}
