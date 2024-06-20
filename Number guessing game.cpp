#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

// Number guessing game

int main()
{
     cout<<"        **Number guessing game**   "<<endl;
    srand(time(0));
    int Number =rand() % 301;
    cout<<"Guess the the correct number from 0 to 300"<<endl;
    int answer;
    while(true)
    {
        cout<<"Enter your guess:"<<endl;
        cin>>answer;
        
         if(answer>300)
        {
            cout<<"You have to guess the number from 0 to 300"<<endl;
            continue;
        }
        
         if(answer<0)
        {
            cout<<"You have to guess the number from 0 to 300"<<endl;
            continue;
        }

        else if (answer>Number)
        {
            cout<<"your guess is too high"<<endl;
            continue;
        }

        else if(answer<Number)
        {
            cout<<"your guess is too low"<<endl;
            continue;
        }
        
        else if (answer==Number)
        {
            cout<<"CONGRATULATIONS YOU HAVE GUESSED THE CORRECT NUMBER!!!";
            break;
        }
      
    }
}
