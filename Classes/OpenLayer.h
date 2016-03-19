#ifndef __OpenLayer_H__
#define __OpenLayer_H__
#include <iostream>
#include "cocos2d.h"
#include "SceneManager.h"
USING_NS_CC;
class OpenLayer:public Layer
{
public:
	CREATE_FUNC(OpenLayer);
	virtual bool init();

	SceneManager * tsm;
};
#endif // __OpenLayer_H__
