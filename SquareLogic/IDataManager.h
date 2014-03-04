#pragma once
#ifndef _SS_IDATAMANAGER_H_
#define _SS_IDATAMANAGER_H_

class IDataManager
{
public:
	IDataManager();
	~IDataManager();

	virtual int LoadAnswerSquare(void);
};

#endif // _SS_IDATAMANAGER_H_