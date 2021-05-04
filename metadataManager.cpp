#include "metadataManager.h"
#include <iostream>

void MetadataManager::display() {
	for(Metadata& m : m_chunks) {
		std::cout << "---------------------------" << std::endl;
		std::cout << m.getInfo() << std::endl;
		std::cout << m.getSize() << std::endl;
		std::cout << m.getMetadata()  << std::endl;
		std::cout << "---------------------------" << std::endl;
	}
}
			
int MetadataManager::getVectorSize() const {
	return m_chunks.size();
}
