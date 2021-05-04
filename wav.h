#ifndef files_h
#define files_h

#include <string>
#include <vector>
#include "wavHeader.h"
#include "wavMono.h"
#include "wavStereo.h"

class Wav {

private:
	
	std::vector<std::string> filenames;
	wav_header wavHeader;
	FILE *wavFile;
	unsigned char* buffer = NULL;
	unsigned char* stereoBuffer = NULL;
	int headerSize = sizeof(wav_header);
public:
	Wav() {}
	
	void readFile(const std::string &filename);
	void writeFile(const std::string &outFileName);

	virtual ~Wav();

	int getBufferSize() const;
	short getAlign() const;
	short getChannels() const;


	/** 
	 * These two functions return the buffer where all the wav data is stored and reinterperet cast them to the correct datatype
	*/
	template<typename T>
	T* getBuffer() const {
		return reinterpret_cast<T*>(buffer);
	}
	
	template<typename T>
	T* getStereoBuffer() const {
		return reinterpret_cast<T*>(stereoBuffer);
	}
};

#endif
