#include <iostream>
using namespace std;
int main(int argc, char* argv[]){
    if(argc != 2){
        cerr << "Incorrect Usage" << endl;
        cerr << "Proper Usage is: 'hydro <input.hy>'" << endl;
        return EXIT_FAILURE;
    }
    cout << argv[1] << endl;
    return EXIT_SUCCESS;
}