#ifndef INC_APP_HEADER_H_
#define INC_APP_HEADER_H_

#include "flash_layout.h"


typedef struct
{
	uint32_t ota_flag;
	uint32_t magic; //magic no
	uint32_t size;  //application size in bytes
	uint32_t crc;   // crc32 of application
	uint32_t version;
} app_header_t;


#endif
