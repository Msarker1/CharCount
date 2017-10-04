#include <iostream>
#include <fstream>
using namespace std;

void printAry(unsigned char charCounts[],ofstream &output){
	int index=0;
		for( int i = 0; i<256; i++){
			if(charCounts[index]>0)
				output<< (char)index<<"  "<< (int)charCounts[index]<<"\n";
			index++;
		}	
}



int main(int argc, char** argv) {
	ifstream inFile;
	ofstream output;
	char charIn;
	int index=0;
	unsigned char charCounts[256]={};

	if(argc!=3){
		cout<<"ERROR WITH ARGUMENTS. * EXAMPLE ARGUMENTS * : FILE.exe INPUT-FILE OUTPUT-FILE ";
		exit(1);
	}
	else{
	inFile.open(argv[1]);
	output.open(argv[2]);
		while(inFile>>charIn){
				index = (int)charIn;
				charCounts[index]++;
			}
			
		printAry(charCounts,output);
		
		inFile.close();
		output.close();
		
	}
	
}


