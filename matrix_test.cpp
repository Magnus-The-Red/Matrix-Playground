#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main() {
	int loop_it = 0;
	string input = "";
	int array_counter = 0;
	string minecart = "";
	vector<double> Crown_Jewel;

	cout << ":";
	getline(cin,input);
 	while(loop_it<(input.size())){
		if(isdigit(input[loop_it]))
		{
			minecart += input[loop_it];
		}
		else if(input[loop_it] == '.')
		{
			minecart += input[loop_it];
		}
		else 
		{
			double gems = stod(minecart);
			Crown_Jewel.push_back(gems);
			minecart = "";
		}
		loop_it++;
	}

//	cout << input << "\n";
//	double test_matrix[] = {1.23242,2.534,3.764,4.346,5.7567,2,3,7,104,393852,123.324256};
//	int d = (Crown_Jewel.size);
//	cout << sizeof(input)  << "\n\n\n";
	for (int i = 0; i<(Crown_Jewel.size()); i++){
		cout << Crown_Jewel[i] << "\n";
	}
}
