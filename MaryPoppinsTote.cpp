#include <iostream>
using namespace std;

class MarryPoppinsTote{

public:
int toteSize;
//MarryPoppinsTote int *tote;
int tote[];

private:

MarryPoppinsTote(){
  //Initialize

  //check to see if array tote has any objects
  if(tote == NULL){
  tote = new int tote[1];
  }
  else{
  //int newToteSize = toteSize;
    MarryPoppinsTote* newTote = new MarryPoppinsTote[toteSize + 1];
  }

//Copy Constructor: Coppying data from original Tote to newTote
MarryPoppinsTote(const MarryPoppinsTote & other){
  //Inizialize
  this.tote = int[other.toteSize];
  for (index i = 0; i < toteSize; i++) {
      newTote[i] = tote[i];
  }
//  this.newTote = other.tote;

}

//Deconstructor to delete orignal tote array
~MarryPoppinsTote(){
  delete[] tote;
  }

void place(int item){
  toteSize = toteSize + 1;
  tote = new int[toteSize];
  item = tote[tote.size];

  }

int search(int item){
  int count = 0;
  for(int i = 0; i<tote.size; i++ ){
      if(item == tote[i]){
        count = count +1;  
      }

    }
    return count;

  }

int reach(){



}

MarryPoppinsTote& operator=(const MarryPoppinsTote & other){

  }
