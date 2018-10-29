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
    void printSelf(void);
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
  Token t;
  int commaAt = inStr.find(',');
  t.setType(inStr.substr(0,commaAt));
  t.setValue(inStr.substr(commaAt+2,commaAt+2));
  tokens.push_back(t);
  values.push_back(inStr.substr(commaAt+2,commaAt+2));
  types.push_back(inStr.substr(0,commaAt));
}// end void JackParser::addToken(std::string)








///< printSelf()
/*!    std::vector<std::string> types;
     value;
*/
void JackParser::printSelf(void){
  std::cout << "JackParser::printSelf" << std::endl;
  std::cout << "Size of values: " << values.size() << std::endl;
  std::cout << "Size of types: " << types.size() << std::endl;
  // Print values
  std::vector<std::string>::iterator itValues = values.begin();
  std::vector<std::string>::iterator itTypes = types.begin();
  if( values.size() != types.size() )
    std::cout << "ERROR: Can't prints since type and value vectors are mismatched." << std::endl;
  else{
    while( (itValues != values.end()) && (itTypes != types.end())) {
      itTypes++;itValues++;
      std::cout << "Type:" << *itTypes << "|value:" << *itValues << std::endl;
    }// end while((itValues != values.end()) && (itTypes != types.end())
  }// end else
}// end void JackParser::printSelf(void)








///< printTokens
void JackParser::printTokens(void){

  for( std::vector<Token>::iterator it = tokens.begin(); it != tokens.end(); ++it )
    (*it).printTypeValue();
}// end void JackParser::printTokens()









#endif // JACKPARSER_H
