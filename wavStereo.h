#ifndef WAVSTEREO_H
#define WAVSTEREO_H

#include <string>
#include <vector>
#include "wavHeader.h"

class Stereo {
	std::vector<wav_header> stereoObjs;
public:
	Stereo() {}
	Stereo(wav_header newObj) {
		stereoObjs.emplace_back(newObj);
	}

	std::vector<wav_header> getStereoObjs();


};

#endif
