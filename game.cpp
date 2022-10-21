#include<iostream>
#include<time.h>

using namespace std;

int lucky_number=time(0)%10+1;
int score=5;


bool play_again()
{
	char answer;
	cout<<"................................."<<endl;
	cout<<"do you want to play again!! (y/n)?"<<endl;
	cin>>answer;
	
	switch(answer)
	{
		case 'y':
			{
				cout<<"-------------------------------"<<endl;
				cout<<"great! let's play again!"<<endl;
				cout<<"-------------------------------"<<endl;
				return true;
				
			}
		case 'n':
	    	{
			cout<<"----------------------------------"<<endl;
			cout<<"thanks for playing!! press any key to close."<<endl;
			cout<<"----------------------------------"<<endl;
			cin.ignore();
			return false;
			}	
		default:
			{
				cout<<"------------------------------"<<endl;
				cout<<"invalid input ! please try again"<<endl;
				cout<<"------------------------------"<<endl;
				play_again();
				
			}
	}
}
bool guessing()
{
	int guess;
	cout<<"guess the lucky number"<<endl;
	cin>>guess;
	
	if(guess>10 || guess<1)
	{
		cout<<"please enter a number from 1 to 10 only !!!"<<endl;
		guessing();
	}
	else 
	{
		cout<<"So your guess is->"<<guess<<endl;
		cout<<endl;
	
		if(guess==lucky_number)
		{
			cout<<"you are lucky and you guessed is right!!"<<endl;
			cout<<"***************************************"<<endl;
			cout<<endl;
			cout<<"your score on lucky scale is ->"<<score<<endl;
			cout<<"***************************************"<<endl;
			cout<<endl;
			
			bool answer=play_again();
			return answer;
			
		}
		else
		{
			cout<<"you are unlucky , you guessed it wrong!!"<<endl;
			cout<<"try again you unlucky person"<<endl;
			cout<<endl;
			score=score-1;
			cout<<"chances left->"<<score<<endl;
			
			if(score==0)
			{
				cout<<"...................................."<<endl;
				cout<<"!!          you lost it            !!"<<endl;
				cout<<"...................................."<<endl;
					bool answer=play_again();
					return answer;
			}
			else
			{
				guessing();
			}
		}
	}
	
}

int main()
{
	cout<<lucky_number<<endl;
	cout<<"----------------------------"<<endl;
	cout<<"***WELCOME TO THE GAME***"<<endl;
	cout<<"----------------------------"<<endl;
	cout<<endl;
	cout<<"you have 5 chances to guess the lucky number!"<<endl;
	cout<<"the number is between 1 to 10"<<endl;
	cout<<"***good luck!*** "<<endl;
	cout<<endl;
	cout<<"-----------------------------"<<endl;
	
    bool user_choice = guessing();
	
	if(user_choice)
	{
	main();
	}
	else
	{
		cin.get();
		return 0;
	}

	
}
