#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    srand(time(0));
    string grade[9] = {"A", "B+", "B", "C+", "C", "D+", "D", "F", "W"};
    int i = 0;
    cout << "Press Enter 3 times to reveal your future.";
    for (int i = 0; i < 3; i++)
        cin.get();
    i = rand() % 9;
    cout << "You will get " << grade[i] << " in this 261102.";
}