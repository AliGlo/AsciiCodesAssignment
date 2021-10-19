//Ascii Codes Program
#include <iostream>

using namespace std;

int main()
{
    //declare variables
    char ascii = 0;

    //Create Whiile loop to go from 0 until 127
    while(ascii < 127){
        cout << ascii << " ";

    //Create a new line after every 16 characters, & increment loop control variable info
        if(ascii % 16 == 0)
            cout << endl;
        ascii++;
    }

    return 0;
}

