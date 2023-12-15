#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){
    
    double loan,rp,pp;
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> rp;
	cout << "Enter amount you can pay per year: ";
	cin >> pp;
int i = 1;

    
	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; //setw ความกว้าง column
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	double loannew = loan;
while(loannew != 0){
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	cout << fixed << showpoint << setprecision(2);
	//you can change input argument of 'setprecision()' to see the effect
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << i; 
	cout << setw(13) << left << loannew;
	
	double interest = (loannew*rp)/100;
	cout << setw(13) << left << interest;
	
	double total = loannew + interest;
	cout << setw(13) << left << total;
		
	loannew = total - pp;
		if(total < pp){
	    pp = total;
	    loannew = total - pp;
	    }
	cout << setw(13) << left << pp;
	cout << setw(13) << loannew;
	cout << "\n";	
	i++;
}
	return 0;
}