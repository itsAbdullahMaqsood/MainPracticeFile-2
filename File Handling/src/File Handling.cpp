#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;
void Blankspace() {         //counts the no. of white spaces in the file
    char input[200];
    int count = 0;
    cout << "input your input: ";
    cin.getline(input, 100);

    fstream myfile("filetest.txt", ios::out);
    myfile << input;
    myfile.close();


    char read;
    fstream reader("filetest.txt", ios::in);
    while (!reader.eof()) {
        reader.get(read);
        if (read == ' ')
            count++;
    }
    cout << "blank: " << count;  
}

void WordCount() {              //counts the number of total words in the file
    int count = 1;
    string filename;
    ofstream fileforwordcount;
    bool correctname = true;
    do{ 
        
        system("cls");
        if (correctname == false) {
            cout << "Error: Can't open the file named " << filename<< "\n\n";
            
        }
        cout << "Please enter the input file name: ";
        getline(cin, filename);
        correctname = true;
        string extcheck = "";
        for (int i = 0; i < filename.length(); i++) {
            if (filename[i] == '.') {
                for(int j=i; j<filename.length(); j++){
                    extcheck += filename[j];
                }
            }
        }
        if (extcheck != ".txt") {
            filename += ".txt";
        }
        fileforwordcount.open (filename.c_str(), ios::_Noreplace);
    
        if (!fileforwordcount) {
            correctname = false;
        }
    } while (correctname == false);
    system("cls");
    string inputtextforwc;                                           //WC = Word Count
    cout << "input a sentence for WC: ";
    getline(cin, inputtextforwc);
    fileforwordcount << inputtextforwc;
    fileforwordcount.close();
    char readingtextforwc;
    fstream readingforwc(filename.c_str(), ios::in);
    string words;
    while (!readingforwc.eof()) {
        if (readingforwc >> words) {
            count++;
        }
    }
    cout << "total words: " << count;
}

void TheCount() {               // counts all the "the" from the file
    int count = 0;
    fstream Thecountwriting("Story.txt", ios::out);             //open file in writemode
    string Thecounttextwriting;
    cout << "enter the sentence: "; 
    getline(cin, Thecounttextwriting);
    Thecountwriting << Thecounttextwriting;
    Thecountwriting.close();
    string result;
    fstream Thecountreading("Story.txt", ios::in);              //open file in readmode
    string Thecounttextreading;
    while (getline(Thecountreading, Thecounttextreading)) {     //to get the all lines from file one by one into the string
        for (int i = 0; i < Thecounttextreading.length(); i++) {

            if (Thecounttextreading[i] == ' ') {
                result = "";
            }
            else {
                result += Thecounttextreading[i];
                bool ourdesiredword;
                ourdesiredword = (result == "the" || result == "The" || result == "THE");       //this either evaluates to true or false

                if (ourdesiredword) {
                    count++;
                }
            }
        }
    }
    cout << "\nthe word count for the word \"the\" is: " << count << endl << endl << endl;
}


int main(){
    //Blankspace();
    WordCount();
    //TheCount();

    return 0;
}

