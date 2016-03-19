#ifndef  __ClockLayer_H__
#define __ClockLayer_H__
#include <iostream>
#include "cocos2d.h"
#include "SceneManager.h"
USING_NS_CC;
class ClockLayer:public Layer
{
public:
	CREATE_FUNC(ClockLayer);
	virtual bool init();

	SceneManager * tsm;
};

#endif // __ClockLayer_H__