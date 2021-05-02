#ifndef files_h
#define files_h
#include <fstream>
#include <iostream>
#include <string>
#include <dirent.h>
#include <vector>

class file {

private:
DIR *dir=NULL;
std::vector<std::string> filenames;
public:
std::vector<std::string> filenames;
bool arg=0;	
file();
bool Argvck(int argc,char const* argv[]);
void filenamereader(char const* argv[]);
bool fileopen(std::string filename);
};

#endif
