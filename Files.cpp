#include <fstream>

// ofstream === creates or writes
// ifstream === only read
// fstream === creates, reads, and writes

ifstream myFile("timestamps.txt"); // Attempt to read file

if(!getLine(myFile)) { // If the file "timestamps.txt" does not exist
  ofstream newFile("timestamps.txt");
  myFile << "5/12/1997";
  myFile << "7/21/1999";
  newFile.close();
} else {
  while(getLine(myFile, text)) {
    cout << text;
  };
};
