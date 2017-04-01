#include "Hacheur.h"
#include <iostream>
 
int main(int argc, char *argv[])
{
    string input = "grape";
    string inputHash = "0f78fcc486f5315418fbf095e71c0675ee07d318e5ac4d150050cd8e57966496"
    string output1 = hash(input);
 
    cout << "hash('"<< input << "'):" << output1 << endl;
    cout << "To verify the hash:" << validateHash(inputHash, output1) <<"\n\tThe result we want: " << inputHash << "\n\tThe result we've got: " << output1 << endl;
    return 0;
}
