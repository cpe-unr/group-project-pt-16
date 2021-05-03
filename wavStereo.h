#ifndef WAVSTEREO_H
#define WAVSTEREO_H

#include <string>
#include <vector>

class Stereo {
	std::vector<std::string> stereoFiles;
public:
	Stereo() {}
	Stereo(std::string newFile) {
		stereoFiles.emplace_back(newFile);
	}

	std::vector<std::string> getStereoFiles();


};

#endif
