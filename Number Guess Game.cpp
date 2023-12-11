#include<iostream>
#include<cstdlib>
#include<unistd.h>
#include<ctime>
#include<conio.h>
using namespace std;
int main(){
	srand((unsigned int) time(NULL));
	int number=rand()%100;
	
	//cout<<number;
	int guess=0;
	do{
		system("cls");
		cout<<"Guess the number: ";
		cin>>guess;
		
		if(guess<number) cout<<"Your guess number is Lower"<<endl;
		else if(guess>number) cout<<"Your guess number is higher"<<endl;
		else {
			cout<<"You win the game"<<endl;
			break;
		}
		sleep(2);
	}while(true);
	
	
	return 0;
}
