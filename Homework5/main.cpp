/* 
 * File:   main.cpp
 * Author: Cory
 *
 * Created on November 20, 2013, 7:58 PM
 */

#include <cstdlib>
#include <iostream>
#include <cstring>
#include "Token.h"
#include "Expression.h"

using namespace std;

int main(int argc, char** argv) {
    string input = "2+3*4"; 
    string action = "=";
    string additionalInput = "";
    bool continueExecution = true;
    Expression inputExpression;
        
    cout << "=== expression evaluation program starts ===" << endl;
    inputExpression.set(input);
    //inputExpression.display();
    
    //Convert expression into postfix
    cout << inputExpression.convertToPostFix();
    
    //Separating on semicolons
//    char * nextString;
//    nextString = strtok (input.c_str(), ";");
//    while (nextString != NULL)
//    {
//        nextString = strtok(NULL, ";");
//    }

//    
//    do
//    {
//        if(input == "")
//        {
//            cin >> input;
//        }
//        
//        cout << "Action:";        
//        cin >> action;``
//        
//        //Lower casing action so don't have to look for q || Q && c || C, etc
//        //todo Determine if it's neccessary to validate if action is > 1 char
//        switch(tolower(action.c_str()[0]))
//        {
//            case '=' :
//                //todo implement evaluation of expression
//                break;
//            case '>' :
//                //todo implement prefix notion
//                break;
//            case '<' :
//                //todo implement postfix notion
//                break;
//            case 'f' :
//                //todo convert each expression in the sequence of expressions to the equivalent
//                //fully parenthesized expression.
//                break;
//            case 'c' :
//                cout << "Input: ";
//                cin >> additionalInput;
//                input += additionalInput;
//                break;
//            case 'q' :
//                    continueExecution = false;
//                    break;
//            case 's' :
//                    input = "";
//                    //    s : start over for a new sequence of expressions
//                    break;
//            default :                
//                cout <<"Invalid action" << endl;                
//                break;      
//        }
//    }while (continueExecution);
//    
    return 0;
}

