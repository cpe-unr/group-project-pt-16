#include "metadata.h"

void Metadata::setMetadata(std::string newMetadata) {
	metadata = newMetadata;
}

std::string Metadata::getMetadata() const {
	return metadata;
}

std::string Metadata::getInfo() const {
	std::string infoStr;
	for(char c : mInfo) {
		infoStr.push_back(c);
	}
	infoStr.push_back('\0');
	return infoStr;
}

int Metadata::getSize() const {
	return mSize;
}

