#include <iostream>
#include <math.h>

using namespace std;
 
int main() {
	int opt;
    float principal, rate, time, result;

    cout << "Enter principal amount : ";
    cin >> principal;

    cout << endl << "Enter rate : ";
    cin >> rate;

    cout << endl << "Enter duration (in years) : ";
    cin >> time;
    
    cout<<"What do you want to calculate:"<<endl;
    cout<<"1.Simple Interest"<<endl;
    cout<<"2.Compound Interest"<<endl;
    cout<<"Press the option number of your choice."<<endl;
    cin>> opt;

    switch (opt){
    	case 2: 
    		result = principal * pow((1 + rate / 100), time);
    		cout << endl << "Compound interest is : " << result;
    		break;
		case 1:
			result = (principal * rate * time)/100;
			cout<<"Simple Interest is : " <<result;
			break;
		default:
			cout<<"Please try again :("<<endl;
			break;
		}
		return 0;
	}
