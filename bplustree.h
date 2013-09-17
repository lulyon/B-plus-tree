/*************************************************************************
	> File Name: bplustree.h
	> Author: luliang
	> Mail: lulyon@126.com 
	> Created Time: 2013年09月17日 星期二 10时47分38秒
 ************************************************************************/

#ifndef BPLUSTREE_H_
#define BPLUSTREE_H_

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
	CREATE_INDEX = 1;
	CREATE_FILE = 2;
} ModeType;

typedef struct {
	int file_handler;
	int index_handler;
} FileHandlerType;

typedef struct {
	int length;
	char *bytes;
} RecordType;

FileHandlerType OpenFile(const char *filename, ModeType mode);
void CloseFile(FileHandlerType handler);

RecordType Search(FileHandlerType handler, long key);
int Insert(FileHandlerType handler, long key, RecordType record);

#ifdef __cplusplus
}
#endif

#endif



