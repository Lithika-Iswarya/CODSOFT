#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    int num_of_stud;
    cout << "Enter the number of students : ";
    cin >> num_of_stud;
    cout << endl;
    vector<string> stud_name(num_of_stud);
    vector<double> grade(num_of_stud);
    for(int i=0;i< num_of_stud;i++)
    {
        cout << "Enter the student name : ";
        cin >> stud_name[i];
        cout << "Enter " << stud_name[i] << "'s grade :" ;
        cin >> grade[i];
        cout << endl;
    }
    double sum = 0.0,high_grade = grade[0],low_grade = grade[0];
    for(int i=0;i<num_of_stud;i++)
    {
        sum += grade[i];
        if(grade[i] > high_grade)
        {
            high_grade = grade[i];
        }
        if(grade[i] < low_grade)
        {
            low_grade = grade[i];
        }
    }
    cout << "Average grade of the students : " << sum / num_of_stud << endl;
    cout << "Highest grade over the given student : " << high_grade << endl;
    cout << "Lowest grade over the given student : " << low_grade << endl;
}
