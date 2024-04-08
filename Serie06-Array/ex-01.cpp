#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    // Given T, an array of 100 integer elements, give the algorithm that displays :
    int total_sum = 0, T[100]; // use random number in array T
    // 1. The sum of the elements in the array.
    for (int index = 0; index < 100; index++)
    {
        total_sum += T[index];
    }
    cout << "Total Sum Array T Is ----> " << total_sum << endl;
    cout << "-----------------------------------" << endl;
    // 2. The max and min values of this array with their positions.
    int Max = T[0], Min = T[0], pos_max = 0, pos_min = 0;
    for (int position = 0; position < 100; position++)
    {
        if (T[position] > Max)
        {
            Max = T[position];
            pos_max = position;
        }
        if (T[position] < Min)
        {
            Min = T[position];
            pos_min = position;
        }
    }
    cout << "Max value is----> " << Max << "\nPosition Max Value is----> " << pos_max + 1 << endl;
    cout << "Min value is----> " << Min << "\nPosition Min Value is----> " << pos_min + 1 << endl;

    // 3. The first occurrence of a value given by the user.
    int number;
    bool flag_found = true;
    cout << "Please enter your number ----> ";
    cin >> number;
    for (int i = 0; i < 100; i++)
    {
        if (T[i] == number)
        {
            cout << "position your number in array T is ----> " << i + 1 << endl;
            flag_found = false;
            break;
        }
    }
    if (flag_found)
    {
        cout << "Not found this value in array T!!!" << endl;
    }

    // 4. The number of occurrences of a value given by the user.
    int repeated, counter = 0;
    bool flag = true;
    cout << "Please enter your number ----> ";
    cin >> repeated;
    for (int i = 0; i < 100; i++)
    {
        if (T[i] == number)
        {
            counter++;
            flag = false;
        }
    }
    if (flag)
    {
        cout << "Not found this value in array T!!!" << endl;
    }
    else
    {
        cout << "this value repeated  ----> " << counter << " in Array T" << endl;
    }

    return 0;
}