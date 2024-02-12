#include <iostream>
#include <fstream>
#include <sstream>
#include <optional>
#include <vector>

using namespace std;

enum class TokenIdentifier {
    _return,
    _int_lit,
    semi
};
struct Token {
    TokenIdentifier iden;
    optional<string> value;
};
vector<Token> tokenize(const string& str){
    for (char c : str){
        cout << c << endl;
    }
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
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

    tokenize(contents);
    return EXIT_SUCCESS;
}