// Task 1
//Number Guessing Game

#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
    int iNo=0,guess=0,attempt=0;
    srand(time(0));
    iNo=rand()%1000;
    
    cout<<"*** Guess Number Game ***\n"<<endl;
    do
    {
        cout<<"Enter the guess between 1 to 1000 : ";
        cin>>guess;
        attempt++;

        if(guess > iNo)
        {
            cout<<"Too High!"<<endl;
        }
        else if(guess < iNo)
        {
            cout<<"Too Low!"<<endl;
        }
        else
        cout<<"\n Correct ! you take "<<attempt<<" attempts !"<<endl;
        
    } while (guess!=iNo);

    return 0;
    
}