#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream outFile; // Declare an output file stream object

    // Open a new file named "new_file.txt" for writing
    outFile.open("new_file.txt");

    if (!outFile.is_open()) { // Check if the file opened successfully
        cerr << "Error creating file." << endl;
        return 1; // Return error code if file couldn't be created
    }

    // Write predetermined content to the file
    outFile << "This is a new text file created using C++." << endl;
    outFile << "You can write any content you want to this file." << endl;

    // Close the file
    outFile.close();

    cout << "New file created and content written successfully." << endl;

    return 0;
}

