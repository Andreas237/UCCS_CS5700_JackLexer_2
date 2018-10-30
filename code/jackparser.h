#ifndef JACKPARSER_H
#define JACKPARSER_H


#include <vector>     // to hold the list of tokens
#include <fstream>    // file reading

class JackParser{

  private:
    std::string input ;
    std::vector<Token> tokens;
    std::vector<std::string> types;
    std::vector<std::string> values;
  protected:
  public:
    JackParser();
    void addToken(std::string); // Determine if it is a tpye or value
    void printTokens(void);
};// end class JackParser








///< JackParser()
/*!
Initialize the members
*/
JackParser::JackParser(){
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








///< printTokens
void JackParser::printTokens(void){

  for( std::vector<Token>::iterator it = tokens.begin(); it != tokens.end(); ++it )
    (*it).printToken();
    //(*it).printTypeValue();
}// end void JackParser::printTokens()









#endif // JACKPARSER_H
