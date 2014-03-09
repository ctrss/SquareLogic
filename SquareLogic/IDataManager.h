#pragma once
#ifndef _SS_IDATAMANAGER_H_
#define _SS_IDATAMANAGER_H_

class Square;

class IDataManager
{
public:
	IDataManager();
	~IDataManager();

	virtual int LoadAnswerSquare(Square* sq) = 0;
};

#endif // _SS_IDATAMANAGER_H_