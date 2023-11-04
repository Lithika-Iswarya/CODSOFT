#include<iostream>
#include<fstream>
#include<string>
#include<sstream>
using namespace std;
int countWordsInfile(const string& fn)
{
    ifstream inputfile(fn);
    string line;
    int Count = 0;
    if(inputfile.is_open())
    {
        while(getline(inputfile,line))
        {
            stringstream ss(line);
            string word;
            while(ss>>word)
            {
                Count++;
            }
        }
        inputfile.close();
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
    int WordCount = countWordsInfile(fn);
    cout << "Total number of words in the file: " << WordCount << endl;
    return 0;

}
