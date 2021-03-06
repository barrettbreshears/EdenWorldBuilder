//
//  zpipe.h
//  Eden
//
//  Created by Ari Ronen on 6/23/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//
#ifndef Eden_zpipe_h
#define Eden_zpipe_h


#include <stdio.h>
#include <assert.h>
#include "zlib.h"

#ifdef __cplusplus
extern "C" {
#endif
/* Decompress from file source to file dest until stream ends or EOF.
 inf() returns Z_OK on success, Z_MEM_ERROR if memory could not be
 allocated for processing, Z_DATA_ERROR if the deflate data is
 invalid or incomplete, Z_VERSION_ERROR if the version of zlib.h and
 the version of the library linked do not match, or Z_ERRNO if there
 is an error reading or writing the files. */
int decompressFile(FILE *source, FILE *dest);
/* Compress from file source to file dest until EOF on source.
 def() returns Z_OK on success, Z_MEM_ERROR if memory could not be
 allocated for processing, Z_STREAM_ERROR if an invalid compression
 level is supplied, Z_VERSION_ERROR if the version of zlib.h and the
 version of the library linked do not match, or Z_ERRNO if there is
 an error reading or writing the files. */
int compressFile(FILE *source, FILE *dest, int level);

void zerr(int ret);

    #ifdef __cplusplus
}
#endif

#endif