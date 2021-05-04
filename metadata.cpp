#include "metadata.h"

/** 
 * sets new Metadata
 * @param newMetadata - the new metadata chunk 
*/
void Metadata::setMetadata(std::string newMetadata) {
	metadata = newMetadata;
}

/**
 * Returns Metadata
*/
std::string Metadata::getMetadata() const {
	return metadata;
}

/**
 * returns Metadata info
*/
std::string Metadata::getInfo() const {
	std::string infoStr;
	for(char c : mInfo) {
		infoStr.push_back(c);
	}
	infoStr.push_back('\0');
	return infoStr;
}

/**
 * returns size of Metadata
*/
int Metadata::getSize() const {
	return mSize;
}

