#include <iostream>
#include <fstream>
#include <vector>
#include <list>


class lexer {
/* lexes bellaBoo source code, storing a token list. */
public:
    
    void readFile(char* filename) {
        
        std::ifstream ifs(filename);
        char c;

        while (ifs.get(c)) {
            if (c == '\n') std::cout << "newline" << std::endl;
            else std::cout << c << std::endl;
        }

    }

private:
    std::list< std::vector< char* > > tokens;
};