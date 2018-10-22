# JackLexer 2 (PJ04)
Author: Andreas Slovacek
Due:    4 November 2018
CS5700, University of Colorado Colorado Springs



## Technical Approach

Implement a recursive descent/top-down parser for the Jack language\[[1](## Citations)\].  Classes are the Translation Units.

### Jack Language
1. Lexical elements: five types of terminals (tokens)
    - keyword
    - symbol
    - integerConstant
    - stringConstant
    - identifier
2. Program Structure: Compilation unit is a class, each appearing in a separate file.  Classes are structured by:
    1. class
    2. classVarDec
    3. type
    4. subroutineDec
    5. parameterList
    6. subroutineBody
    7. varDec
    8. className
    9. subroutineName
    10. varName
3. Statements:
    - statements
    - statement
    - letStatement
    - ifStatement
    - whileStatement
    - doStatement
    - ReturnStatement
4. Expressions:
    - expression
    - term
    - subroutineCall
    - expressionList
    - op
    - unaryOp
    - KeywordConstant



## Project Classes

### *_JackParser_*
Process tokens read from the *_.tok_* files.  Stores the list of tokens for later extraction by the *_CompilationEngine_*.


### *_CompilationEngine_*
Based on the Jack grammar process the token list in the parser.  Generate the XML output file as well.

### *_LexicalElements_*
Organisation of token elements in the language and functions to process them.









## Citations
1) Noam Nisan and Shimon Schocken. _The Elements of Computing Systems_. MIT Press, 2005.  
