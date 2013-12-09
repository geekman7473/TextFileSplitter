#include<iostream>
#include<fstream>
#include<string>
#include<sstream>
using namespace std;

string intToString(long long int val){
    stringstream ss;
    ss << val;
    return  ss.str();
}
//usage: split <filename> [num of lines]
int main(int argc, char *argv[]){
    if (argc < 2){
        cout << "usage: \"split <filename>\"";
        //return 0;
    }
    long int numOfLines = 0;
    cin >> numOfLines;
    cout << "test";
    fstream source(argv[1]);
    cout << "test";
    fstream output("0.txt");
    string line;
    long int curLine = 0;
    while(getline(source, line)){
        cout << line << endl;
        if(curLine % numOfLines == 0){
            string filename = (argv[1]);
            filename = filename + intToString(curLine / numOfLines);
            output.open(filename.c_str(), ios::out);
        }
        output << line;
    }
}
