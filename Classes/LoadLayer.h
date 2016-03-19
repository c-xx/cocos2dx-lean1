#ifndef  __LOADLAYER_H__
#define __LOADLAYER_H__
#include <iostream>
#include "cocos2d.h"
#include "SceneManager.h"
USING_NS_CC;
class LoadLayer:public Layer
{
public:
	CREATE_FUNC(LoadLayer);
	virtual bool init();

	SceneManager * tsm;
	
};

#endif // __LOADLAYER_H__