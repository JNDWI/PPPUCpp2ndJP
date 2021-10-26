#include "../include/std_lib_facilities.h"

class Token {
public:
    char kind;
    double value;
};

Token get_token() {

}

vector<Token> tok;

double primary()
{
    Token t = get_token();
    switch (t.kind) {
    case '(':
        {
            double d = expression();
            t = get_token();
            if (t, kind != ')')error("')' expected");
            return d;
        }
    case '8':
        return t.value;
    default:
        error("primary expected");
    }
}

double term()
{
    double left = primary();
    Token t = get_token();
    while (true) {
        switch (t.kind) {
        case '*':
            left *= primary();
            t = get_token();
            break;
        case '/':
            {
                double d = primary();
                if (d == 0) error("divide by zero");
                left /= d;
                t = get_token();
                break;
            }
        default:
            return left;
        }
    }
}

double expression()
{
    double left = term();
    Token t = get_token();
    while (true) {
        switch (t.kind){
        case '+':
            left += term();
            t = get_token();
            break;
        case '-':
            left -= term();
            t = get_token();
            break;
        default:
            return left;
        }
    }
}

int main()
{
    while (cin) {
        Token t = get_token();
        tok.push_back(t);
    }

    for (int i = 0; i < tok.size(); ++i) {
        if (tok[i].kind == '*') {
            //処理
        }
        //次の処理
    }
}