#ifndef METADATAHEADER_H
#define METADATAHEADER_H

struct metadata_header {
	char list_header[4];
	int chunk_size;
	char info_header[4];

};

#endif
