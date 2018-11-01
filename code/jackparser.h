#ifndef JACKPARSER_H
#define JACKPARSER_H


#include <vector>     // to hold the list of tokens
#include <fstream>    // file reading

class JackParser{

  private:
    std::string input ;
    std::vector<Token> tokens;              ///< List of tokens read from the file
    Token current;             ///< The current token in the fector
    int index;                              ///< Index in the token vector
  protected:
  public:
    JackParser();
    void addToken(std::string); // Determine if it is a tpye or value
    bool lastToken(void);       // Returns false if more tokens to be processes true otherwise
    void printTokens(void);
};// end class JackParser








///< JackParser()
JackParser::JackParser(){
  this->index = -1;                       // Start outside the vector
  this->current = this->tokens.front();   // Initialize pointing to a null token
  std::cout << "Made a jack parser!" << std::endl;
}// end JackParser::JackParser()








///< addToken(std::string)
/*!
If the string is length 1 then it is the value,
else it is the token and need to remove the comma
*/
void JackParser::addToken(std::string inStr){
  int commaAt = inStr.find(',');
  Token t(inStr.substr(0,commaAt),inStr.substr(commaAt+2,commaAt+2));
  tokens.push_back(t);
}// end void JackParser::addToken(std::string)








///< bool lastToken(void)
bool JackParser::lastToken(void){
    //TODO: need a way to compare the current token to the last token in the list.
    // Failed to use iterator, therefore will use index and token.size()
    return false;
}// end bool JackParser::lastToken(void)








///< printTokens
//TODO: change this to call a print function in the token class
void JackParser::printTokens(void){

  for( std::vector<Token>::iterator it = tokens.begin(); it != tokens.end(); ++it ){
    std::cout << "Value:" << (*it).getValue() << "|Type:" << (*it).getType() << "|Class:" << (*it).getClassification() << std::endl;
  }// end for( std::vector<Token>::iterator it = tokens.begin(); it != tokens.end(); ++it )
    //(*it).printTypeValue();
    //(*it).printTypeValue();
}// end void JackParser::printTokens()









#endif // JACKPARSER_H
