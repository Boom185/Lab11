#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main (){
	ifstream source;
	ofstream dest;
	source.open("cheerbook.txt");
	dest.open("cheerbook_copy.txt");
	
	if (source.is_open() && dest.is_open()){ 
		dest << "-------------------- BOOM ---------------------" << endl;
		string line;
		while(getline(source,line)){ 
			dest << line << endl; 
		}
		dest << "-------------------- HA!! ---------------------" << endl; 
		cout << "Data has been copied from cheerbook.txt to cheerbook_copy.txt" << endl;
	}else{
		cout << "Error opening file(s)" << endl;
	}

	source.close();
	dest.close();
	return 0;
}
