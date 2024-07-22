// Including Header File
#include <iostream>
#include <fstream>

// Using Namespace std for cout and cin
using namespace std;

/**
 * @brief This is the main function of the program. It reads input from the console,
 * writes it to a file, and then reads the file and prints its contents to the console.
 *
 * @return 0 upon successful execution.
 */
int main()
{
  ofstream fout;      ///< Output file stream object for writing to a file.
  string line, line1; ///< Strings to store input and output lines.

  // Open the file for writing.
  fout.open("New Text Document.txt");

  // Read input from the console and write it to the file until "-1" is entered.
  while (fout)
  {
    getline(cin, line);
    if (line == "-1")
      break;
    fout << line << endl;
  }

  // Close the file after writing.
  fout.close();

  // Open the file for reading.
  ifstream fin;
  fin.open("New Text Document.txt", ios ::in);

  // Read the file and print its contents to the console.
  while (fin)
  {
    getline(fin, line1);
    cout << line1 << endl;
  }

  // Close the file after reading.
  fin.close();

  return 0;
}
