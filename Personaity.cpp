#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    //cout << "Please enter the number of people (maxinum 10 person):\n";
    string people;
    cin >> people;
    cin.ignore();
    int personality[10]{};
    for (int n = 0; n <= stoi(people) - 1; n++)
    {
        string buffer;
        int answercount[4];
        //cout << "Please enter the answers of person " << n + 1 << ":\n";
        getline(cin, buffer);
        answercount[0] = count(buffer.begin(), buffer.end(), '1');
        answercount[1] = count(buffer.begin(), buffer.end(), '2');
        answercount[2] = count(buffer.begin(), buffer.end(), '3');
        answercount[3] = count(buffer.begin(), buffer.end(), '4');
        int counter = 0;
        int temp = answercount[0];
        for (int c = 1; c <= 3; c++)
        {
            if (temp <= answercount[c])
            {
                temp = answercount[c];
                counter = c;
            }
        }
        personality[n] = counter;
    } 
    for (int n = 0; n <= stoi(people) - 1; n++)
    {
        switch (personality[n])
        {
        case 0:
            cout << "leader\n";
            break;
        case 1:
            cout << "intellectual\n";
            break;
        case 2:
            cout << "social\n";
            break;
        case 3:
            cout << "practical\n";
            break;
        }
    }
    return EXIT_SUCCESS;
}