//
// Created by Familiar on 19/07/2020.
//


#include "earley.h"
#include "grammar.h"

int main()
{
    std::string filename = "earley.dat";
    std::ifstream ifs(filename);
    if (ifs) {
        MB::grammar grammar(ifs);
        std::string sentence[] = {"papu", "drink", "milk","with","chocolate"};
        const size_t len = sizeof(sentence) / sizeof(sentence[0]);
        bool success = MB::earley_parser(grammar).parse(sentence, sentence + len, std::cout);
        std::cout << "Success: " << std::boolalpha << success << '\n';
    }
    else {
        std::cerr << "No se puede abrir " << filename << " para leer\n";
    }
}