#pragma once
#ifndef _SS_FILEMANAGER_H_
#define _SS_FILEMANAGER_H_
#include "stdafx.h"

#include "IDataManager.h"
class FileManager :
	public IDataManager
{
public:
	FileManager();
	~FileManager();

	virtual int LoadAnswerSquare(Square* sq) override;
};

#endif // _SS_FILEMANAGER_H_