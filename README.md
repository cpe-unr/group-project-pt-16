# CS 202 Semester Project Template

Group Members: Grant Korte, Evan Richardson, Juwl Chanthalasin

Responsibilities:
Grant: Wav Processing/FileIO
Evan: FileIO
Juwl: User Interface

Design:
For our design we had a Wav class which would read the wav files given by the use, write back to the wav file, and extract any technical data from  the wav files. This included the WavHeader struct. The wavHeader contains all the variables for the technical data. 

Next there was the Metadata class responsible for holding all the techical information for the metadata. There was also the MetadataHeader and the Metadata Manager struct and class. the metadataHeader is similar to the wavHeader and the metadataManager reads the metadata chunks.

Finally there is the Processor class which was a templated interface for processing the wav files that were read by the wav class. there is also the Echo, Normalization, and NoiseGate classes which inherit from the Processor class.  The Echo clas makes an echo of the wave file, the NoiseGate sets a threshold that the wav cannot exceed, and the normalization sets the entire wav to a normal volume.


Challenges:
The main challennge we encountered was reading from the different types of wav files, our research and coding took up more time than anticipated and this caused us to be unable to code the normalization, and some other parts of our code as well.
