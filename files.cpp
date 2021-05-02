#include <fstream>
#include <iostream>
#include <string>
#include <dirent.h>
#include <vector>
#include "files.h"
#define numarg 2

	file::file(){}
//this stuff here the argv stuff for user to input ./audio "directory" it checks if the directory can be opened then returns the true or false
bool file::Argvck(int argc,char const* argv[])

	{

	   if (argc < numarg) 
	{
			std::cout<<std::endl;
			std::cout << "Correct usage:" << std::endl;
			std::cout << argv[0] << "Directory" << std::endl<<std::endl;
			return 0;
    	}
	   else
	{
				dir = opendir (argv[1]);

	   if(dir)
	{
					std::cout<<"Directory opened"<<std::endl;
					return 1;
	}
	   else
	{
						std::cout<<"Could not open the directory"<<std::endl;
						std::cout<<argv[1]<<std::endl<<std::endl;
						return 0;
	}

	}

	}


//this on reads in all of the files in the directory we can change to read in the wav stuff
	void Files::Readfilenames(char const* argv[]){
void file::filenamereader(char const* argv[])

	{

		struct dirent* read;
		while((read=readdir(dir)) != nullptr)
	{

			filenames.emplace_back(read->d_name);

	}
			
				std::cout<<"~~Files~~"<<std::endl;
				for(std::string i:filenames)
	{
	  			if( i != "." && i != "..")
	{
					std::cout<<i<<std::endl;
	}

	}
						std::cout<<std::endl;
	}
//this one opens the file

bool file::fileopen(std::string filename)
	
	{

		std::ifstream file(filename,std::ios::binary | std::ios::in);
   		if(!file.is_open())
	{
			std::cout<<"File Successfully Opened"<<std::endl;
    			return 1;
	}
				else
	{
					std::cout<<"File "<< filename <<" could not be opened"<<std::endl;
					return 0;
	}
	}









