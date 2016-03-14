#ifndef BLOCKHASH_H
#define BLOCKHASH

class Blockhash{
	
	public:
		static int cmpint(const void *pa, const void *pb);
		static int cmpfloat(const void *pa, const void *pb);
		float median(int *data, int n);
		float medianf(float *data, int n);
		void blockhash_quick(int bits, unsigned char *data, int width, int height, int **hash);
		void blockhash(int bits, unsigned char *data, int width, int height, int **hash);
		int process_image(char * fn, int bits, int quick, int debug);
		char* bits_to_hexhash(int *bits, int nbits);
		void translate_blocks_to_bits(int *blocks, int nblocks, int pixels_per_block);
		void translate_blocks_to_bitsf(float *blocks, int *result, int nblocks, int pixels_per_block);
	};

#endif
