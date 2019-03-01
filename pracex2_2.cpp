#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;

void sort(float x[], int N){
	for(int i = 1; i < N; i++){
		for(int j = i; j > 0; j--){
			if(x[j] < x[j-1]){
				float temp = x[j];
				x[j] = x[j-1];
				x[j-1] = temp;
			}else{
				break;
			} 
		}
	}
}

int main(){
	ifstream source("score1.txt");
	ofstream dest("rank.txt")
	string line;
	float x[20];
	int i = 0;
	while(getline(source,line)){
		x[i]=atof(line.c_str);
		i++;
		}
	sort(x,20);	
		
		
		dest << line << "\n";
	
	
	return 0;
}
