#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main(){
    int i = 1;
    double pre,itr,tl,pym,Nb,x;
	cout << "Enter initial loan: ";
	cin >> pre;
	cout << "Enter interest rate per year (%): ";
	cin >> x;
	cout << "Enter amount you can pay per year: ";
	cin >> pym;

	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	while(Nb > 0){
    	cout << fixed << setprecision(2); 
    	cout << setw(13) << left << i++; 
    	cout << setw(13) << left << pre; //Preba
    	itr = (x*pre)/100;
    	cout << setw(13) << left << itr;   //Int
    	tl = pre+itr;
    	cout << setw(13) << left << tl; //Tl
    	if(tl<pym) pym = tl;
    	cout << setw(13) << left << pym;  //payment
    	Nb = tl-pym;
    	cout << setw(13) << left << Nb;  //Nb
    	pre = Nb;
    	cout << "\n";	

	}
}