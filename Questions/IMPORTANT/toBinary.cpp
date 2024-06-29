#include <iostream>
#include <bitset>

using namespace std;

string intToBinary(int num)
{
    // Using bitset to represent the integer in binary (32 bits)
    bitset<32> binary(num);
    return binary.to_string();
}

int main()
{
    int num = -6;
    string binaryRepresentation = intToBinary(num);
    cout << "The binary representation of " << num << " is " << binaryRepresentation << std::endl;
    return 0;
}

