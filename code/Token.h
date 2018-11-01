#ifndef TOKEN_H
#define TOKEN_H


#include <string>
#include <map>



class Token{
  private:
    // TODO: DELETE
    /*
  	 std::string KW_TRUE;
  	 std::string KW_FALSE;
  	 std::string KW_NULL;
  	 std::string KW_THIS;
  	 std::string KW_INT;
  	 std::string KW_CHAR;
  	 std::string KW_BOOLEAN;
  	 std::string KW_CONSTRUCTOR;
  	 std::string KW_FUNCTION;
  	 std::string KW_METHOD;
  	 std::string KW_VAR;
  	 std::string KW_VOID;
  	 std::string KW_CLASS;
  	 std::string KW_LET;
  	 std::string KW_IF;
  	 std::string KW_ELSE;
  	 std::string KW_WHILE;
  	 std::string KW_DO;
  	 std::string KW_RETURN;
  	 std::string KW_STATIC;
  	 std::string KW_FIELD;
  	 std::string SY_LPAREN;
  	 std::string SY_RPAREN;
  	 std::string SY_LBRACKET;
  	 std::string SY_RBRACKET;
  	 std::string SY_LBRACE;
  	 std::string SY_RBRACE;
  	 std::string SY_SEMI;
  	 std::string SY_PERIOD;
  	 std::string SY_COMMA;
  	 std::string SY_EQ;
  	 std::string SY_MINUS;
  	 std::string SY_NOT;
  	 std::string SY_PLUS;
  	 std::string SY_MUL;
  	 std::string SY_DIV;
  	 std::string SY_AND;
  	 std::string SY_PIPE;
  	 std::string SY_LESS;
  	 std::string SY_MORE;
     */

  	 std::string type;
  	 std::string value;
     std::string classification;

     std::map<std::string,std::string> keywordMap, tokenMap;


     //TODO: Delete void setupFields(void);
     //TODO: Delete void setupKeywordMap(void);
     //TODO: Delete void setupTokenMap(void);
     void setClassification(void);

   public:
     Token();
     Token(std::string inType, std::string inValue);
     void operator=(const Token &t);
     std::string getClassification(void) const { return this->classification;}  //TODO: return whether it is a symbol, keyword, integer, stringConstant, identifier
     std::string getType(void) const { return this->type;}
     std::string getValue(void) const { return this->value;}
     bool isIdent(void);
     bool isInt(void);
     bool isKeyword(void);
     bool isKeywordConst(void);
     bool isOp(void);
     bool isStrConst(void);
     bool isSymbol(void);
     bool isUnaryOp(void);
     void printToken(void);
     void printTypeValue(void);
     void setType(std::string inType);
     void setValue(std::string inValue);


};// end  class Token








///< Token
Token::Token(){
  //TODO: Delete setupFields();
  //TODO: Delete setupKeywordMap();

  this->type = "blank_type";
  this->value = "blank_value";

}// end Token::Token()








///< operator=
void Token::operator=(const Token &t){
  this->type = t.getType();
  this->value = t.getValue();
}// end operator=(const Token &t)







///< Token(std::string, std::string)
Token::Token(std::string inType, std::string inValue){
  //TODO: Delete setupFields();
  //TODO: Delete setupKeywordMap();
  this->type = inType;
  this->value = inValue;
  setClassification();
}// end Token::Token(std::string, std::string)







///< isIdent(void)
bool Token::isIdent(void){
  if(type == "IDENT")
    return true;
  else
    return false;
}// end bool Token::isIdent(void)







///< isInt(void)
bool Token::isInt(void){
  if(type == "INTEGER")
    return true;
  else
    return false;
}// bool Token::isInt(void)







///< isKeyword(void)
bool Token::isKeyword(void){
 if(type.find("KW_") != std::string::npos)
  return true;
 else
  return false;
}// end isKeyword(void)







///< isKeywordConst(void)
bool Token::isKeywordConst(void){
  if(type == "KW_TRUE" || type == "KW_FALSE" || type == "KW_NULL" || type == "KW_THIS")
    return true;
  else
    return false;
}// end isKeywordConst(void)







///< isOp
bool Token::isOp(void){
  if( type == "SY_PLUS" || type == "SY_MINUS" || type == "SY_MUL" ||
      type == "SY_DIV" || type == "SY_AND" || type == "SY_PIPE" ||
      type == "SY_LESS" ||  type == "SY_MORE" || type == "SY_EQ")
      return true;
return false;
}// end isOp(void)







///< isStrConst
bool Token::isStrConst(void){
  if( type == "STRING" )
    return true;
  else
    return false;
}// end isStrConst(void)







///< isSymbol(void)
bool Token::isSymbol(void){
  if(type.find("SY_") != std::string::npos)
   return true;
  else
   return false;
}// end isSymbol(void)







///<
bool Token::isUnaryOp(void){
  if(type.find("SY_MINUS") != std::string::npos)
   return true;
  else if(type.find("SY_NOT") != std::string::npos)
    return true;
  else
   return false;
}// end isUnaryOp(void)








///< printToken(void)
void Token::printToken(void){
  // print the type, value, classification
  std::cout << this->getType() << "|";
  std::cout << this->getValue() << "|";
  std::cout << this->getClassification() << "|";
  std::cout << std::endl;

}// end printToken(void)








///< Print type and value of this tone
void Token::printTypeValue(void){
  std::cout << "Type:" << this->getType()
            << "\tvalue:" << this->getValue() << std::endl;
}// end void Token::printTypeValue(void)







///< setClassification(void)
/*!
Classify the token as identifier, integer, keyword, stringConstant, symbol
*/
void Token::setClassification(void){
  if( isIdent() )
    this->classification = "identifier";
  else if( isInt() )
    this->classification = "integer";
  else if( isKeyword() )
    this->classification = "keyword";
  else if ( isStrConst() )
    this->classification = "stringConstant";
  else if ( isOp() || isSymbol() || isUnaryOp() )
    this->classification = "symbol";
  else
    this->classification = "ERROR NO CLASSIFICATION";
}// end setClassification(void)








//TODO: Delete
/*
///< Initialize the fields in this token object
void Token::setupFields(void){
  std::string KW_TRUE 		= "true";
  std::string KW_FALSE 		= "false";
  std::string KW_NULL 		= "null";
  std::string KW_THIS 		= "this";
  std::string KW_INT 			= "int";
  std::string KW_CHAR 		= "char";
  std::string KW_BOOLEAN 		= "boolean";
  std::string KW_CONSTRUCTOR 	= "constructor";
  std::string KW_FUNCTION 	= "function";
  std::string KW_METHOD 		= "method";
  std::string KW_VAR 			= "var";
  std::string KW_VOID 		= "void";
  std::string KW_CLASS 		= "class";
  std::string KW_LET 			= "let";
  std::string KW_IF 			= "if";
  std::string KW_ELSE 		= "else";
  std::string KW_WHILE 		= "while";
  std::string KW_DO 			= "do";
  std::string KW_RETURN 		= "return";
  std::string KW_STATIC 		= "static";
  std::string KW_FIELD 		= "field";
  std::string SY_LPAREN 		= "(";
  std::string SY_RPAREN 		= ")";
  std::string SY_LBRACKET 	= "[";
  std::string SY_RBRACKET 	= "]";
  std::string SY_LBRACE 		= "{";
  std::string SY_RBRACE		= "}";
  std::string SY_SEMI 		= ";";
  std::string SY_PERIOD 		= ".";
  std::string SY_COMMA 		= ",";
  std::string SY_EQ 			= "=";
  std::string SY_MINUS 		= "-";
  std::string SY_NOT 			= "~";
  std::string SY_PLUS 		= "+";
  std::string SY_MUL			= "*";
  std::string SY_DIV 			= "/";
  std::string SY_AND 			= "&";
  std::string SY_PIPE 		= "|";
  std::string SY_LESS 		= "<";
  std::string SY_MORE	 		= ">";
}// end Token::setupFields()
*/







//TODO: Delete
/*
///< Initialize a map of each token and its keyword
void Token::setupKeywordMap(void){
  keywordMap["KW_TRUE"] =  "true";
  keywordMap["KW_FALSE"] =  "false";
  keywordMap["KW_NULL"] =  "null";
  keywordMap["KW_THIS"] =  "this";
  keywordMap["KW_INT"] 			= "int";
  keywordMap["KW_CHAR"] =  "char";
  keywordMap["KW_BOOLEAN"] =  "boolean";
  keywordMap["KW_CONSTRUCTOR"] 	= "constructor";
  keywordMap["KW_FUNCTION"] 	= "function";
  keywordMap["KW_METHOD"] =  "method";
  keywordMap["KW_VAR"] 			= "var";
  keywordMap["KW_VOID"] =  "void";
  keywordMap["KW_CLASS"] =  "class";
  keywordMap["KW_LET"] 			= "let";
  keywordMap["KW_IF"] 			= "if";
  keywordMap["KW_ELSE"] =  "else";
  keywordMap["KW_WHILE"] =  "while";
  keywordMap["KW_DO"] 			= "do";
  keywordMap["KW_RETURN"] =  "return";
  keywordMap["KW_STATIC"] =  "static";
  keywordMap["KW_FIELD"] =  "field";
  keywordMap["SY_LPAREN"] =  "(";
  keywordMap["SY_RPAREN"] =  ")";
  keywordMap["SY_LBRACKET"] 	= "[";
  keywordMap["SY_RBRACKET"] 	= "]";
  keywordMap["SY_LBRACE"] =  "{";
  keywordMap["SY_RBRACE"]		= "}";
  keywordMap["SY_SEMI"] =  ";";
  keywordMap["SY_PERIOD"] =  ".";
  keywordMap["SY_COMMA"] =  ",";
  keywordMap["SY_EQ"] 			= "=";
  keywordMap["SY_MINUS"] =  "-";
  keywordMap["SY_NOT"] 			= "~";
  keywordMap["SY_PLUS"] =  "+";
  keywordMap["SY_MUL"]			= "*";
  keywordMap["SY_DIV"] 			= "/";
  keywordMap["SY_AND"] 			= "&";
  keywordMap["SY_PIPE"] =  "|";
  keywordMap["SY_LESS"] =  "<";
  keywordMap["SY_MORE"] = ">";
}// end void Token::setupKeywordMap(void)
*/







///< setType
void Token::setType(std::string inType){
  this->type = inType;
}// void Token::setType(std::string inType)








///< setValue
void Token::setValue(std::string inValue){
  this->value = inValue;
}// void Token::setValue(std::string inValue)








//TODO: Delete
/*
///< Initialize a map of each token and its keyword
void Token::setupTokenMap(void){
  tokenMap["true"]="KW_TRUE";
  tokenMap["false"]="KW_FALSE";
  tokenMap["null"]="KW_NULL";
  tokenMap["this"]="KW_THIS";
  tokenMap["int"]="KW_INT";
  tokenMap["char"]="KW_CHAR";
  tokenMap["boolean"]="KW_BOOLEAN";
  tokenMap["constructor"]="KW_CONSTRUCTOR";
  tokenMap["function"]="KW_FUNCTION";
  tokenMap["method"]="KW_METHOD";
  tokenMap["var"]="KW_VAR";
  tokenMap["void"]="KW_VOID";
  tokenMap["class"]="KW_CLASS";
  tokenMap["let"]="KW_LET";
  tokenMap["if"]="KW_IF";
  tokenMap["else"]="KW_ELSE";
  tokenMap["while"]="KW_WHILE";
  tokenMap["do"]="KW_DO";
  tokenMap["return"]="KW_RETURN";
  tokenMap["static"]="KW_STATIC";
  tokenMap["field"]="KW_FIELD";
  tokenMap["("]="SY_LPAREN";
  tokenMap[")"]="SY_RPAREN";
  tokenMap["["]="SY_LBRACKET";
  tokenMap["]"]="SY_RBRACKET";
  tokenMap["{"]="SY_LBRACE";
  tokenMap["}"]="SY_RBRACE";
  tokenMap[";"]="SY_SEMI";
  tokenMap["."]="SY_PERIOD";
  tokenMap[","]="SY_COMMA";
  tokenMap["="]="SY_EQ";
  tokenMap["-"]="SY_MINUS";
  tokenMap["~"]="SY_NOT";
  tokenMap["+"]="SY_PLUS";
  tokenMap["*"]="SY_MUL";
  tokenMap["/"]="SY_DIV";
  tokenMap["&"]="SY_AND";
  tokenMap["|"]="SY_PIPE";
  tokenMap["<"]="SY_LESS";
  tokenMap[">"]="SY_MORE";
}// end void Token::setupTokenMap(void)
*/



#endif // TOKEN_H
