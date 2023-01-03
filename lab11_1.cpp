#include<iostream>
using namespace std;

int main(){
	int count[5] = {0,0,0,0,0}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	int tot = 0;
    char grade;
	int n = 1; int a=0; int b=0; int c=0; int d=0; int f=0;
	cout << "Please input grade of each student (A-F) or input 0 to exit."<<endl;
	do{
		cout << "Student [" <<n<< "]: ";
		cin >> grade; //The loop must be terminated when grade = '0'
		if(grade=='A'){ // if grade is A
			a++;
			count[0]=a;
		}else if(grade=='B'){ // if grade is B
			b++;
			count[1]=b;
		}else if(grade=='C'){ // if grade is C
			c++;
			count[2]=c;
		}else if(grade=='D'){ // if grade is D
			d++;
			count[3]=d;
		}else if(grade=='F'){ // if grade is F
			f++;
			count[4]=f;
		}else if(grade=='0'){
		    break;
		}else{ // grade is wrong input
			cout << "Wrong input. Please input again."<<endl;
			continue;
		} 
		tot = n;
		n++;
	}while(true);
	
	cout << "In total "<< tot <<" students."<<endl;
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";	
	cout << "C = " << count[2] <<", ";
	cout << "D = " << count[3] <<", ";
	cout << "F = " << count[4];
	return 0;
}