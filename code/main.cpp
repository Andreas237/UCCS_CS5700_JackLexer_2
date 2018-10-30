
#include <iostream>
#include <fstream>
#include "token.h"
#include "jackparser.h"


int main(void){

  std::cout << "In main" << std::endl;

/* TODO: Delete
  Token *t = new Token[3];

  int max = 4;

  t->setType("type_0");
  t->setValue("value_0");
  for(int i = 1; i < max; i++){
    // Create the new node in the list

    // Create links through the list
    (t+i)->setLast((t+i-1));
    (t+i-1)->setNext((t+i));

    // Set values in the new node
    (t+i)->setType("type_" + std::to_string(i));
    (t+i)->setValue("value_" + std::to_string(i));
  }// end for(int i = 0; i < max; i++)

  // Print the list of nodes and their values
  for(int i=0; i < max; i++)
    (t+i)->printTypeValue();

*/
  // Create a Jack Parser
  JackParser jp;


    // Read the file line-by-line
    std::string fName = "./PJ04_token_files/ball.tok";
    std::string line;
    std::ifstream fin(fName,std::ios::in);

    // If the file is open get the data and run the program
    if(fin.is_open()){
      while( getline(fin,line))
        jp.addToken(line);

      jp.printTokens();
      fin.close();
    }// end if(fin.is_open())
    // Else the file didn't open and the program is ending
    else {
      std::cout << "ERROR: Failed to open " << fName << std::endl;
      return 1;
    }// end else


  return 0;


}
