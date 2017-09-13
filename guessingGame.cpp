#include <iostream>
#include <ctime>
#include<cstdlib>
using namespace std;
 int main(){
  srand(time(NULL));
  bool playing = true;
  int guesses = 0;
  int number =(rand()%100)+1;
  cout<<"I'm thinking of a number between 0 and 100. Can you guess it?"<<endl;
  while(playing==true){
    int input = 0;
    cout<<"Type in you guess";
    cin>>input;
    guesses++;
    if(input==number){
      cout<<"Correct! You used " << guesses<< " guesses" << endl;
      cout<<"New game? (y/n)";
      char play = 'a';
      cin>>play;
      if(play=='y'){
	//reset the game
	number = (rand()%100)+1;
	guesses = 0;
	cout<<"I'm thinking of a number between 0 and 100. Can you guess it?"<<endl;
      }
      else{
	playing = false;
      }
    }
    else if(input > number){
      cout<<"Too high. You have used " <<guesses<<" guesses"<<endl;
      cout<<"Continue playing? (y/n)";
      char play = 'a';
      cin>>play;
      if(play=='n'){
	playing = false;
      }
    }
    else if(input < number){
      cout<<"Too low. You have used " <<guesses<<" guesses"<<endl;
      cout<<"Continue playing? (y/n)";
      char play ='a';
      cin>>play;
      if(play=='n'){
	playing=false;
      }
    }
  }
  return 0;
}
