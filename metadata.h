#ifndef METADATA_H
#define METADATA_H

#include <fstream>
#include <string>

class Metadata {
	char mInfo[4];
	int mSize;
	std::string metadata;

public:
	Metadata() {}
	//constructs a Metadata chunk
	Metadata(std::ifstream& mFile) {
		mFile.read(mInfo, sizeof(mInfo));
		mFile.read((char*)&mSize, sizeof(mSize));
		metadata.resize(mSize);
		mFile.read(&metadata[0], mSize);
	}

	std::string getMetadata() const;
	void setMetadata(std::string);
	std::string getInfo() const;
	int getSize() const;
	

};

#endif

