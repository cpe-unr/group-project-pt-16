#ifndef WAVMONO_H
#define WAVMONO_H

#include <string>
#include <vector>
#include "wavHeader.h"

class Mono {
	std::vector<wav_header> monoObjs;
public:
	Mono() {}
	Mono(wav_header newObj) {
		monoObjs.emplace_back(newObj);
	}

	std::vector<wav_header> getMonoObjs();


};

#endif
