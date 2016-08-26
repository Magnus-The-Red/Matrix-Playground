#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main() {
//	vector<double> Mummy (3);
	vector<double> child1 {1,0,0};
	vector<double> child2 {0,1,0};
	vector<double> child3 {0,0,1};
	vector<double> Mummy[3] = {child1, child2, child3};
	for(int i = 0; i < 3; i++){
		cout << (Mummy[i])[i] << endl;
	}



//	vector<double> result;
//	double goodies;
//	for (int i = 0; i < 10; i++){
//		string input = "";
//		cout << "Please enter array number:";
//		getline(cin,input);
//		goodies = stod(input);
//		result.push_back (goodies);
//	}
//	cout << result[1] << result[5] <<result[9] << "\n";

 
//	string::size_type sz;
//	double Lord_Peter_Mandelson = stod(input);
//	cout << Lord_Peter_Mandelson << "\n";



//	int i = 0;
//	string whoami = "";
//	string sticky = "hello_world";
//	whoami = sticky[1];
//	while (i < (sticky.size())){
//		whoami += sticky[i];
//		i++;
//	}
//	cout << whoami << "\n";



//	int i = 0;
//	double bob = 243.;
//	string chell = "1,2,3,4,5;1,2,3,4,5;1,2,3,4,5;";
//	while(i<(chell.size())){
//	cout << chell[i];
//	i++;
//	}
//	cout << "\n" << bob << "\n";
}

