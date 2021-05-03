#ifndef WAVMONO_H
#define WAVMONO_H

#include <string>
#include <vector>

class Mono {
	std::vector<std::string> monoFiles;
public:
	Mono() {}
	Mono(std::string newFile) {
		monoFiles.emplace_back(newFile);
	}

	std::vector<std::string> getMonoFiles();


};

#endif
