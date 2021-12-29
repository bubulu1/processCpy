#include "pcpy.h"

int block(const char * SFile, int pronum)
{
	int FileSize;
	int fd = open(SFile,O_RDONLY);

	FileSize = lseek(fd,0,SEEK_END);	//获取文件大小

	if(FileSize % pronum == 0)			//判断是否整除
		return FileSize / pronum;
	else
		return FileSize / pronum +1;
}
