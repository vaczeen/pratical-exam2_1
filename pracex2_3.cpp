#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>
using namespace std;
char alphabet[8][8];

void showAlphabet();
void randomAlphabet();

int main(){
	
	srand(time(0));	
	randomAlphabet();
	showAlphabet();
	
}

void showAlphabet(){
	
	for(int i = 0; i < 8; i++){
		for(int j = 0; j < 8; j++){
			
			cout << alphabet[i][j] << " ";
		}
		cout << "\n";
	}
}
void randomAlphabet(){
	for(int i=0;i<8;i++){
		for(int j=0;j<8;j++){
			char y='A';
			int x;
	       cout << rand()%26+1;
	       y=y-x;
	       alphabet [i][j];
	       
	       
	}
	cout<<"\n";
	}

}

//Write definition of function randomAlphabet() here.


