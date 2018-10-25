#include <string>

class Token{
   public:
  	 String KW_TRUE 		= "true";
  	 String KW_FALSE 		= "false";
  	 String KW_NULL 		= "null";
  	 String KW_THIS 		= "this";
  	 String KW_INT 			= "int";
  	 String KW_CHAR 		= "char";
  	 String KW_BOOLEAN 		= "boolean";
  	 String KW_CONSTRUCTOR 	= "constructor";
  	 String KW_FUNCTION 	= "function";
  	 String KW_METHOD 		= "method";
  	 String KW_VAR 			= "var";
  	 String KW_VOID 		= "void";
  	 String KW_CLASS 		= "class";
  	 String KW_LET 			= "let";
  	 String KW_IF 			= "if";
  	 String KW_ELSE 		= "else";
  	 String KW_WHILE 		= "while";
  	 String KW_DO 			= "do";
  	 String KW_RETURN 		= "return";
  	 String KW_STATIC 		= "static";
  	 String KW_FIELD 		= "field";
  	 String SY_LPAREN 		= "(";
  	 String SY_RPAREN 		= ")";
  	 String SY_LBRACKET 	= "[";
  	 String SY_RBRACKET 	= "]";
  	 String SY_LBRACE 		= "{";
  	 String SY_RBRACE		= "}";
  	 String SY_SEMI 		= ";";
  	 String SY_PERIOD 		= ".";
  	 String SY_COMMA 		= ",";
  	 String SY_EQ 			= "=";
  	 String SY_MINUS 		= "-";
  	 String SY_NOT 			= "~";
  	 String SY_PLUS 		= "+";
  	 String SY_MUL			= "*";
  	 String SY_DIV 			= "/";
  	 String SY_AND 			= "&";
  	 String SY_PIPE 		= "|";
  	 String SY_LESS 		= "<";
  	 String SY_MORE	 		= ">";

  	//Token wrapper class
  	 String type;
  	 String value;

     Token();


}// end  class Token








Token::Token(){
  std::cout << "Created a token!" << std::endl;
}// end Token::Token()
