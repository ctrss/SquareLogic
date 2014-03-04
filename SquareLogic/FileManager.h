#pragma once
#ifndef _SS_FILEMANAGER_H_
#define _SS_FILEMANAGER_H_

#include "IDataManager.h"
class FileManager :
	public IDataManager
{
public:
	FileManager();
	~FileManager();

	virtual int LoadAnswerSquare(void) override;
};

#endif // _SS_FILEMANAGER_H_