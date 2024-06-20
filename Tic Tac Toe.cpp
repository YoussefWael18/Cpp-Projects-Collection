#include<iostream>
#include<string>
using namespace std;
bool winner(char arr[3][3])
{
  
  // Check columns and rows
    for (int i = 0; i < 3; i++) {
        if (arr[0][i] != ' ' && arr[0][i] == arr[1][i] && arr[1][i] == arr[2][i])
            return true;
        if (arr[i][0] != ' ' && arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2])
            return true;
    }
    // Check diagonals
    if (arr[0][0] != ' ' && arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2])
        return true;
    if (arr[0][2] != ' ' && arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0])
        return true;
    return false;
  
}
int main()
{
  while(true)
  {
    char board[3][3]= {
        {' ',' ',' '},
        {' ',' ',' '},
        {' ',' ',' '}
    };
  cout<<"TIC TAC TOE"<<endl; 
  cout<<"---------"<<endl;
  cout<<"|"<<" "<<"1"<<"|"<<"2"<<"|"<<"3"<<"\t"<<"|"<<endl;
  cout<<"|"<<" _|_|_"<<"\t"<<"|"<<endl; 
  cout<<"|"<<" "<<"4"<<"|"<<"5"<<"|"<<"6"<<"\t"<<"|"<<endl;
  cout<<"|"<<" _|_|_"<<"\t"<<"|"<<endl;
  cout<<"|"<<" "<<"7"<<"|"<<"8"<<"|"<<"9"<<"\t"<<"|"<<endl;
  cout<<"---------"<<endl;
  cout<<"Enter your moves with numbers as shown up top"<<endl;
  const char player1='X';
  const char player2='O';
  char currentplayer=player1;
  int place;
  for(int i=0;i<9;i++)
  {
  cout<<"---------"<<endl;
  cout<<"|"<<" "<<board[0][0]<<"|"<<board[0][1]<<"|"<<board[0][2]<<"\t"<<"|"<<endl;
  cout<<"|"<<" _|_|_"<<"\t"<<"|"<<endl; 
  cout<<"|"<<" "<<board[1][0]<<"|"<<board[1][1]<<"|"<<board[1][2]<<"\t"<<"|"<<endl;
  cout<<"|"<<" _|_|_"<<"\t"<<"|"<<endl;
  cout<<"|"<<" "<<board[2][0]<<"|"<<board[2][1]<<"|"<<board[2][2]<<"\t"<<"|"<<endl;
  cout<<"---------"<<endl;
  if(winner(board)==true)
  {
    currentplayer=(currentplayer==player1)?player2:player1;  
    break;
  }
  cout<<"Player "<<currentplayer<<" enter your move:"<<endl;
  cin>>place;
  while(true)
  {
    if(place<0 || place>9|| board[(place - 1) / 3][(place - 1) % 3] != ' ')
    {
      cout<<"Invalid, please try again"<<endl;
      cout<<"---------"<<endl;
  cout<<"|"<<" "<<board[0][0]<<"|"<<board[0][1]<<"|"<<board[0][2]<<"\t"<<"|"<<endl;
  cout<<"|"<<" _|_|_"<<"\t"<<"|"<<endl; 
  cout<<"|"<<" "<<board[1][0]<<"|"<<board[1][1]<<"|"<<board[1][2]<<"\t"<<"|"<<endl;
  cout<<"|"<<" _|_|_"<<"\t"<<"|"<<endl;
  cout<<"|"<<" "<<board[2][0]<<"|"<<board[2][1]<<"|"<<board[2][2]<<"\t"<<"|"<<endl;
  cout<<"---------"<<endl;
      cin>>place;

    }
    else{
    break;
    }
   
  }
  
  if (place==1)
  {
    board[0][0]=currentplayer;
  }
    if (place==2)
  {
    board[0][1]=currentplayer;
  }
    if (place==3)
  {
    board[0][2]=currentplayer;
  }
    if (place==4)
  {
    board[1][0]=currentplayer;
  }
    if (place==5)
  {
    board[1][1]=currentplayer;
  }
    if (place==6)
  {
    board[1][2]=currentplayer;
  }
    if (place==7)
  {
    board[2][0]=currentplayer;
  }
  if (place==8)
  {
    board[2][1]=currentplayer;
  }
   if (place==9)
  {
    board[2][2]=currentplayer;
  }
currentplayer=(currentplayer==player1)?player2:player1;  
  }
  cout<<"---------"<<endl;
  cout<<"|"<<" "<<board[0][0]<<"|"<<board[0][1]<<"|"<<board[0][2]<<"\t"<<"|"<<endl;
  cout<<"|"<<" _|_|_"<<"\t"<<"|"<<endl; 
  cout<<"|"<<" "<<board[1][0]<<"|"<<board[1][1]<<"|"<<board[1][2]<<"\t"<<"|"<<endl;
  cout<<"|"<<" _|_|_"<<"\t"<<"|"<<endl;
  cout<<"|"<<" "<<board[2][0]<<"|"<<board[2][1]<<"|"<<board[2][2]<<"\t"<<"|"<<endl;
  cout<<"---------"<<endl;
  if (winner(board)==true)
  {
  cout<<currentplayer<<" Wins :-) "<<endl;
  }
  else 
  {
    cout<<"It's a draw :("<<endl;
  }
  cout<<"Enter \n 1-play again \n 2-exit"<<endl;
  int choice;
  cin>>choice;
  if(choice==2)
  {
    break;
  }

  
}
}

