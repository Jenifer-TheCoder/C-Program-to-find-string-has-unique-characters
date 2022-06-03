/*Is Unique : Implement an algorithm to determine if a string has all unique characters.What if you
cannot use additional data structures ?*/

#include <iostream>
using namespace std;
bool areChractersUnique(string str)
{
    // An integer to store presence/absence
    // of 26 characters using its 32 bits.
    int checker = 0;

    for (int i = 0; i < (int)str.length(); ++i)
    {
        int val = (str[i] - 'a');

        // If bit corresponding to current
        // character is already set
        if ((checker & (1 << val)) > 0)
            return false;

        // set bit in checker
        checker |= (1 << val);
    }

    return true;
}

// Driver code
int main()
{
    string s = "abcedfg";
    if (areChractersUnique(s))
        cout << "Yes";
    else
        cout << "No";
    return 0;
}

