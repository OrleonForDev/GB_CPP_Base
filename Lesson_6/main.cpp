#include <iostream>
#include <string>
#include <fstream>

using namespace std;

string readFile(const string& filename){
    string line;
    string resultString;
    ifstream outFile;
    outFile.open(filename);
    if (outFile.is_open()){
        while (getline(outFile, line))
        {
            resultString += line;
        }
    }
    outFile.close();
    return resultString;
};

void writeFile(const string& filename, const string& strToWrite){
    ofstream fileToWrite;
    fileToWrite.open(filename);
    fileToWrite << strToWrite;
    fileToWrite.close();
}


bool FindWordInFile(const string &filename, const string &searchWord) {
    string wordInFile;
    string resultString;
    ifstream outFile;
    outFile.open(filename);
    if (outFile.is_open()){
        while (outFile >> wordInFile)
        {
            if (wordInFile == searchWord){
                return true;
            }
        }
    }
    outFile.close();
    return false;
}

int main() {


    string s1 = "The class template basic_string stores and manipulates sequences of char-\n"
                "like objects, which are non-array objects of trivial standard-layout type.\n";
    string s2 = "The class is dependent neither on the character type nor on the nature of\n"
                "operations on that type.";

    writeFile("../file1.txt", s1);
    writeFile("../file2.txt", s2);

    auto* tempString = new string;

    *tempString += readFile("../file1.txt");
    *tempString += readFile("../file2.txt");

    writeFile("../resultFile.txt", *tempString);
    delete tempString;

    string word;
    cout << "Enter word for search" << endl;
    cin >> word;
    cout << FindWordInFile("../resultFile.txt", word);
    return 0;
}
