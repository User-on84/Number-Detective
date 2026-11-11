#include<iostream>
#include<ctime>
#include<cstdlib>
#include<windows.h>
using namespace std;
int  Menu()
{
      cout<<" Main Menu"<<endl;
    cout<<"1. Easy"<<endl;
    cout<<"2.Medium"<<endl;
    cout<<"3.Hard"<<endl;

int choices;
cout<<"Enter choice:";
cin>>choices;
   return choices;
}

int main()
{


int choice=Menu();
system("cls");
srand(time(0));
int computer;

computer=rand()%101;
while(true)
{
switch(choice)
{
case 1:
{
    cout<<"Easy Mode"<<endl;
    cout<<"You have to guess the number  "<<endl;
    char decision;
    cout<<"Are you Ready(y/n):";
        cin>>decision;



        if(decision=='n')
        {
            cout<<"Go and get ready first"<<endl;
            char decision2;
            cout<<"Do you really want to exit(e) or let me wait(l):";
            cin>>decision2;
            if(decision2=='e')
            {
                cout<<"What a Loser!";
                exit(0);
            }
            else if(decision2=='l')
            {
                int wait;
                cout<<"How much time to wait for you(in miliseconds):";
                cin>>wait;
                Sleep(wait);
                cout<<"Now The game is starting...";
            }
        }
        system("cls");
            cout<<"Lets get started"<<endl;
string message="Computer is selecting an Random number.... \n";

cout<<"You must guess it within 15 tries";

            for(char m:message)
            {
                cout<<m<<flush;

            }

int guess;
cout<<"Enter your guess(1-100):";
cin>>guess;
int limit=15;
int count=1;
while(guess!=computer && count<limit)
{
    if(guess>computer)
{
    cout<<"Too high!"<<endl;
}
else if(computer>guess)
{
    cout<<"Too small!"<<endl;
}
cout<<"Enter guess again:";
cin>>guess;

count++;
}
if(count==limit && guess!=computer)
{
    system("cls");
    cout<<"Sorry You Lost!"<<endl;
    cout<<"The hidden number was:"<<computer<<endl;
}
else if(guess==computer)
{
    cout<<"You guessed it right in "<<count<<"tries"<<endl;

}

        char decision1;
      cout<<"Do you want to return  to Main Menu(y/n):"<<endl;
      cin>>decision1;
      if(decision1=='y')
      {
           choice=Menu();
           system("cls");
      }
      else
      {
        cout<<"Game is aborted"<<endl;
        cout<<"Thanks for Playing the game";

        exit(0);
      }
      break;
}

      case 2:
    {
      cout<<"Medium Difficulty"<<endl;
      char decision3;
    cout<<"Are you Ready(y/n):";
        cin>>decision3;



        if(decision3=='n')
        {
            cout<<"Go and get ready first"<<endl;
            char decision4;
            cout<<"Do you really want to exit(e) or let me wait(l):";
            cin>>decision4;
            if(decision4=='e')
            {
                cout<<"What a Loser!";
                exit(0);
            }
            else if(decision4=='l')
            {
                int wait;
                cout<<"How much time to wait(in miliseconds):";
                cin>>wait;
                Sleep(wait);
                cout<<"Now The game is starting...";
            }
        }
        system("cls");
            cout<<"Lets get started"<<endl;
            cout<<"You must guess it within 10 tries"<<endl;
string message2="Computer is selecting an Random number....\n";
            for(char m:message2)
            {
                cout<<m<<flush;
                Sleep(500);

            }

int guess2;
cout<<"Enter your guess(1-100):";
cin>>guess2;

int count2=1;
int limit2=10;
while(guess2!=computer && count2<limit2)
{
    if(guess2>computer)
{
    cout<<"Too high!"<<endl;
}
else if(computer>guess2)
{
    cout<<"Too small!"<<endl;
}
cout<<"Enter guess again:";
cin>>guess2;

count2++;

}
if(limit2==count2 && guess2!=computer)
{
    system("cls");
    cout<<"Sorry You Lost!"<<endl;
    cout<<"The hidden number was:"<<computer<<endl;
}



if(guess2==computer)
{
    cout<<"You guessed it right in "<<count2<<"tries"<<endl;

}
        char decision5;
      cout<<"Do you want to return to Main Menu(y/n):"<<endl;
      cin>>decision5;
      if(decision5=='y')
      {
          choice=Menu();
          system("cls");
      }
      else
      {
        cout<<"Game is aborted"<<endl;
        cout<<"Thanks for Playing the game";

        exit(0);
    }
    break;
}

case 3:
{
    cout<<"Hard Level"<<endl;
    char decision6;
    cout<<"Are you Ready(y/n):";
        cin>>decision6;



        if(decision6=='n')
        {
            cout<<"Go and get ready first"<<endl;
            char decision7;
            cout<<"Do you really want to exit(e) or let me wait(l):";
            cin>>decision7;
            if(decision7=='e')
            {
                cout<<"What a Loser!";
                exit(0);
            }
            else if(decision7=='l')
            {
                int wait;
                cout<<"How much time to wait(in miliseconds):";
                cin>>wait;
                Sleep(wait);
                cout<<"Now The game is starting...";
            }
        }
        system("cls");
            cout<<"Lets get started"<<endl;
            cout<<"You must guess the hidden number in 6 tries"<<endl;
string message3="Computer is selecting an Random number....\n";
            for(char m:message3)
            {
                cout<<m<<flush;

            }

int guess7;
cout<<"Enter your guess(1-100):";
cin>>guess7;

int count3=1;
int limit3=6;
while(guess7!=computer && count3<limit3)
{
    if(guess7>computer)
{
    cout<<"Too high!"<<endl;
}
else if(computer>guess7)
{
    cout<<"Too small!"<<endl;
}
cout<<"Enter guess again:";
cin>>guess7;

count3++;

}
 if(count3==limit3 && guess7!=computer)
{
    system("cls");
    cout<<"Sorry You Lost!"<<endl;
    cout<<"The hidden number was:"<<computer<<endl;
}


if(guess7==computer)
{
    cout<<"You guessed it right in "<<count3<<"tries"<<endl;

}
        char decision9;
      cout<<"Do you want to return to Main  Menu(y/n):"<<endl;
      cin>>decision9;
      if(decision9=='y')
      {
           choice=Menu();
           system("cls");
      }
      else
      {
        cout<<"Game is aborted"<<endl;
        cout<<"Thanks for Playing the game";

        exit(0);
}
}



}
}

return 0;
}
