#ifndef METADATAMANAGER_H
#define METADATAMANAGER_H

#include "metadata.h"
#include "metadataHeader.h"
#include <vector>

class MetadataManager {
	metadata_header mh;
	std::vector<Metadata> m_chunks;
public:
	MetadataManager() = default;
	/**
	 * creates a vector of metadata chunks
	 * @param mFile - a file to read metadta from
	*/
	MetadataManager(std::ifstream& mFile) {
		mFile.read((char*)&mh, sizeof(metadata_header));
		int i = 0, j = 0;
		while(i < mh.chunk_size - 4) {
			m_chunks.emplace_back(mFile);
			i += m_chunks[j++].getSize() + 8;
		}
		
	}
	void display();
	int getVectorSize() const;
	

};

#endif
