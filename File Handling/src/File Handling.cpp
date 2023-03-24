#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
int main()
{
    char input[100];
    cout << "input";
    cin.getline(input, 100);

    fstream myfile("filetest.txt", ios::app);
    //myfile.open("filetest.txt");
    myfile <<endl<< input;
    myfile.close();



    return 0;
}

