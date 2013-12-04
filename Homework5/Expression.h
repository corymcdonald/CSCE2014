/* 
 * File:   Expression.h
 * Author: cxm072
 *
 * Created on October 8, 2013, 12:02 PM
 */

#ifndef EXPRESSION_H
#define	EXPRESSION_H

#include <string>
#include <vector>
#include "Token.h"

using namespace std;

enum exp_type {assignment, arithmetic, illegal};

class Expression {
public:
    string original;
    vector<Token> tokenized;
    vector<Token> postfix;
    bool valid; 
    exp_type type;
    
    Expression();    
    Expression(const string& s);
    void set(const string& s);
    void display() const;
    
    string get_original() const;
    
    int tokenstart(int pos, string s);
    int tokenend(int pos, string s);
    
    vector<Token> get_tokenized() const;
    vector<Token> get_postfix() const;
    
    bool get_valid() const;
    exp_type get_type() const;
    
private:

};

#endif	/* EXPRESSION_H */

