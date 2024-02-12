#include <iostream>
#include <fstream>
#include <sstream>
#include <optional>
using namespace std;

enum class TokenIdentifier{
    _return,
    _int_lit,
    semi
};
struct Token{
    TokenType iden;
    optional<string> value;
};




int main(int argc, char* argv[]){
    if(argc != 2){
        cerr << "Incorrect Usage" << endl;
        cerr << "Proper Usage is: 'hydro <input.hy>'" << endl;
        return EXIT_FAILURE;
    }
    string contents;
    {
        stringstream contents_stream;
        fstream input(argv[1], ios::in);
        contents_stream << input.rdbuf();
        contents = contents_stream.str();
    }

    cout << contents << endl;
    return EXIT_SUCCESS;
}