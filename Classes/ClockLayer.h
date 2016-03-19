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

	void menuCallBack(Ref * pSender);
	void timeUpdate(float dt);

	SceneManager * tsm;

	Sprite * _hour;
	Sprite * _minute;
	Sprite * _second;
	Sprite * _background;

	int hRotation = 0;
	int mRotation = 0;
	int sRotation = 0;

};

#endif // __ClockLayer_H__