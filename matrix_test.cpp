#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main() {
	int loop_it = 0;
	string input = "";
	int array_counter = 0;
	vector<double> minecart;
	double gems;
	vector<vector<double>> Crown_Jewel;

	cout << ":";
	getline(cin,input);
 	while(loop_it<(input.size())){
		if(isdigit(input[loop_it]))
		{
			gems = (input[loop_it]);
			minecart.push_back(gems);
		}
		else if((input[loop_it] == ',')||(input[loop_it] == '.')||(input[loop_it] == ' '))
		{
//			minecart += input[loop_it];
		}
		else
		{
			Crown_Jewel.push_back(minecart);
			minecart.clear();
		}
		loop_it++;
	}

//	cout << input << "\n";
//	double test_matrix[] = {1.23242,2.534,3.764,4.346,5.7567,2,3,7,104,393852,123.324256};
//	int d = (Crown_Jewel.size);
//	cout << sizeof(input)  << "\n\n\n";
	
	for (int i = 0; i<(sizeof(Crown_Jewel)/8); i++)
	{
	cout << (sizeof(Crown_Jewel[i])/8) << endl;
//		for (int d = 0; d<(sizeof(Crown_Jewel[i])/8); d++)
//		{
//			cout << (Crown_Jewel[i])[d] << endl;
//		} 
	}
}
