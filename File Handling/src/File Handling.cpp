#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
int main()
{
    char input[200];
    cout << "input your inputt: ";
    cin.getline(input, 100);

    fstream myfile("filetest.txt", ios::app);
    myfile << input;
    myfile.close();



    return 0;
}

