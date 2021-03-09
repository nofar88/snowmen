#include <iostream>
#include <string>
#include "snowman.hpp"
using namespace std;

string ariel::snowman(int a){
	long const MAX = 44444444;
	long const MIN = 11111111;
	long const ZERO = 0;
	long const ONE = 1;
	long const TWO = 2;
	long const THREE = 3;
	long const FOUR = 4;
	long const FIVE = 5;
	long const SIX  = 6;
	long const SEVEN = 7;
	
    if(a>MAX || a< MIN) {
    	throw std::range_error("out of bound \n");
    }

    string code= std::to_string(a);
    string snowman;

    // hat
    switch(code[ZERO]){

    	case '1':
    	    snowman+="       \n _===_ \n";
    	    break;
    	case '2':
    	    snowman+="  ___  \n ..... \n";
    	    break;
         case '3':
    	    snowman+="   _   \n  /_\\  \n";
    	    break;
    	 case '4':
    	     snowman+="  ___  \n (_*_) \n";
    	     break;
    	 default:
    	     throw std:: invalid_argument( " no one of the option");
    }

    //left arm
    switch(code[FOUR]){
    	case '2':
    	    snowman+="\\";
    	    break;
    	 case '1':
         case '3':
    	 case '4':
    	     snowman+=" ";
    	     break;
    	  default:
    	     throw std:: invalid_argument( " no one of the option");
    }

    snowman += "(";

//left Eye
    switch(code[TWO]){

    	case '1':
    	    snowman+=".";
    	    break;
    	case '2':
    	    snowman+="o";
    	    break;
         case '3':
    	    snowman+="O";
    	    break;
    	 case '4':
    	     snowman+="-";
    	     break;
    	  default:
    	     throw std:: invalid_argument( " no one of the option");
    }

//nose
    switch(code[ONE]){

    	case '1':
    	    snowman+=",";
    	    break;
    	case '2':
    	    snowman+=".";
    	    break;
         case '3':
    	    snowman+="_";
    	    break;
    	 case '4':
    	     snowman+=" ";
    	     break;
    	  default:
    	     throw std:: invalid_argument( " no one of the option");
    }
//right eye
    switch(code[THREE]){

    	case '1':
    	    snowman+=".";
    	    break;
    	case '2':
    	    snowman+="o";
    	    break;
         case '3':
    	    snowman+="O";
    	    break;
    	 case '4':
    	     snowman+="-";
    	     break;
    	  default:
    	     throw std:: invalid_argument( " no one of the option");
    }
    snowman += ")";

    // right arm
    switch(code[FIVE]){
    	case '2':
    	    snowman+="/";
    	    break;
    	case '1':
        case '3':
    	case '4':
    	     snowman+=" ";
    	     break;
    	  default:
    	     throw std:: invalid_argument( " no one of the option");
    }

    snowman += "\n";

//left arm
    switch(code[FOUR]){

    	case '1':
    	    snowman+="<";
    	    break;
    	case '2':
    	    snowman+=" ";
    	    break;
         case '3':
    	    snowman+="/";
    	    break;
    	 case '4':
    	     snowman+=" ";
    	     break;
    	  default:
    	     throw std:: invalid_argument( " no one of the option");
    }

    snowman += "(";


    //torso
    switch(code[SIX]){

    	case '1':
    	    snowman+=" : ";
    	    break;
    	case '2':
    	    snowman+="] [";
    	    break;
         case '3':
    	    snowman+="> <";
    	    break;
    	 case '4':
    	     snowman+="   ";
    	     break;
    	  default:
    	     throw std:: invalid_argument( " no one of the option");
    }

    snowman += ")";
    
// right arm
    switch(code[FIVE]){

    	case '1':
    	    snowman+=">";
    	    break;
    	case '2':
    	    snowman+=" ";
    	    break;
         case '3':
    	    snowman+="\\";
    	    break;
    	 case '4':
    	     snowman+=" ";
    	     break;
    	  default:
    	     throw std:: invalid_argument( " no one of the option");
    }


    
    snowman += "\n (";

// base
     switch(code[SEVEN]){

    	case '1':
    	    snowman+=" : ";
    	    break;
    	case '2':
    	    snowman+="" "";
    	    break;
         case '3':
    	    snowman+="___";
    	    break;
    	 case '4':
    	     snowman+="   ";
    	     break;
    	  default:
    	     throw std:: invalid_argument(" no one of the option");
    }
     snowman += ") ";

    return snowman;
}