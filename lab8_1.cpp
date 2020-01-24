#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
  double Interest, percent;
  float PrevBalance,Total,Payment,NewBalance = 1 ;
  int EndOfYear = 0;
	cout << "Enter intial loan: ";
	cin >> PrevBalance;
	cout << "Enter interest rate per year (%): ";
  cin >> percent;
  cout << "Enter amount you can pay per year: ";
  cin >> Payment;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";

  while (NewBalance != 0){
    EndOfYear++;
    cout << fixed << setprecision(2); 
	  cout << setw(13) << left << EndOfYear; 
	  cout << setw(13) << left << PrevBalance;
    Interest =  PrevBalance*(percent/100);
	  cout << setw(13) << left << Interest;
    Total = PrevBalance + Interest;
	  cout << setw(13) << left << Total;
    if (Payment<=Total) {
      	cout << setw(13) << left << Payment;
    }
    else {
      Payment = Total;
      cout << setw(13) << left << Payment;
    }
    NewBalance = Total - Payment;
	  cout << setw(13) << left << NewBalance;
	  cout << "\n";	
    PrevBalance = NewBalance;
  }
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	return 0;
}