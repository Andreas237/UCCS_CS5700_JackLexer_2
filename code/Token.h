#ifndef TOKEN_H
#define TOKEN_H


#include <string>
#include <map>



class Token{
  private:
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

  	 std::string type;
  	 std::string value;

     std::map<std::string,std::string> keywordMap, tokenMap;


     void setupFields(void);
     void setupKeywordMap(void);
     void setupTokenMap(void);
     void classifier(std::string value);

   public:
     Token();
     Token(std::string inType, std::string inValue);
     ~Token();
     void addNextToken(std::string, std::string);
     std::string getClassification(void);  //TODO: return whether it is a symbol, keyword, integer, stringConstant, identifier
     std::string getType(void){ return this->type;}
     std::string getValue(void){ return this->value;}
     void printTypeValue(void);
     void setType(std::string inType);
     void setValue(std::string inValue);


};// end  class Token








///< Token
Token::Token(){
  setupFields();
  setupKeywordMap();

  this->type = "blank_type";
  this->value = "blank_value";

}// end Token::Token()








///< Token(std::string, std::string)
Token::Token(std::string inType, std::string inValue){
  setupFields();
  setupKeywordMap();
  this->type = inType;
  this->value = inValue;
  std::cout << "Created a token!" << std::endl;
}// end Token::Token(std::string, std::string)








///< ~Token
/*!
While a next node exists
*/
Token::~Token(){

}// end Token::~Token()








///< addNextToken
void Token::addNextToken(std::string, std::string){
  //Token * nextToken =
}// end void Token::addNextToken(std::string, std::string)







///< Classifier
/*!
Classify the token as identifier, integer, keyword, KeywordConstant, op, stringConstant, symbol, unaryOp,
*/
void Token::classifier(std::string value){

}// end void Token::classifier(std::String value)








///< Print type and value of this tone
void Token::printTypeValue(void){
  std::cout << "Type:" << this->getType() << "\tvalue:" << this->getValue() << "]\n";
}// end void Token::printTypeValue(void)








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








///< setType
void Token::setType(std::string inType){
  this->type = inType;
}// void Token::setType(std::string inType)








///< setValue
void Token::setValue(std::string inValue){
  this->value = inValue;
}// void Token::setValue(std::string inValue)








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



#endif // TOKEN_H
