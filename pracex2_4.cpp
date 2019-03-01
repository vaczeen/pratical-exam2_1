#include <iostream>
#include <cmath>

using namespace std;
double av(double,double);

//Write prototype of av() here.

int main(){
    cout << av(-2.5,1.1) << "\n";
    cout << av(1,10000) << "\n";
    cout << av(8.5,2.4) << "\n";
    cout << av(0.1,0.0001) << "\n";
    cout << av(10,0.007) << "\n";
    cout << av(1,-2) << "\n";
    cout << av(15,100) << "\n";
    cout << av(123,5432) << "\n";
   
}
double av(double y,double x){
	double a,b;
	if(a<=0||b<=0){
		return 0;
	}
	else if((a>b==a)/(b<a==b)<=100||(b>a==b)/(a<b==a)<=100){
		cout<< sqrt(a*b);
	}
	else{
		cout<<av(a,(a+b/2))+av(b,(a+b)/2);
	}
}


//Write function definition of av() here.