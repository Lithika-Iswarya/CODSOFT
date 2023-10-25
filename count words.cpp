#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;
int countWordsInFile(const string& fn)
{
    ifstream inputFile(fn);
    string line;
    int Count = 0;
    if (inputFile.is_open())
        {
        while (getline(inputFile, line))
        {
            stringstream ss(line);
            string word;
            while (ss >> word)
            {
                Count++;
            }
        }
        inputFile.close();
    }
    else
    {
        cout << "Unable to open the file." << endl;
    }
    return Count;
}
int main()
{
    string fn;
    cout << "Enter the file name: ";
    cin >> fn;
    int WordCount = countWordsInFile(fn);
    cout << "Total number of words in the file: " << WordCount << endl;
    return 0;
}
