#include <iostream>
#include <vector>

using namespace std;

int main() {

	vector<int> OurNumbers;

	for (int i = 0; i < 10; i++) {
		OurNumbers.push_back(i);
		//OurNumbers[i] = i;	X
		//cin >> OurNumbers[i];	X
	}
	
	cout << "\nsimple for loop\n\n";
	for (int i = 0; i < 10; i++) {
		cout << OurNumbers[i];
	}
	
	
				//OR

	cout << "\n\nange_based for loop\n\n";
	for (auto listnums : OurNumbers) {
		cout << listnums;
		
	}

				//OR

	cout << "\n\niterator\n\n";
	
	for (auto it = OurNumbers.begin(); it != OurNumbers.end(); it++) {
		//cout << it;		X
		cout << *it << endl;
		cout << &(*it) << endl;
	}


	return 0;
}
