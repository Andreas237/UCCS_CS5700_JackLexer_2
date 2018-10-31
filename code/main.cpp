
#include <iostream>
#include <fstream>
#include "token.h"
#include "jackparser.h"


int main(void){


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
