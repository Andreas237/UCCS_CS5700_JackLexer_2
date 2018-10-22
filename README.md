# JackLexer 2 (PJ04)
Author: Andreas Slovacek
Due:    4 November 2018
CS5700, University of Colorado Colorado Springs



## Technical Approach

Implement a recursive descent/top-down parser for the Jack language[1](#Citations).


## Project Classes

### *_JackParser_*
Process tokens read from the *_.tok_* files.  Stores the list of tokens for later extraction by the *_CompilationEngine_*. Based on E


### *_CompilationEngine_*
Based on the Jack grammar process the token list in the parser.  Generate the XML output file as well.

### *_LexicalElements_*
Organisation of token elements in the language and functions to process them.









## Citations
1) Noam Nisan and Shimon Schocken. _The Elements of Computing Systems_. MIT Press, 2005.  
