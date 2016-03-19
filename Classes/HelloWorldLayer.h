#ifndef __HelloWorldLayer_H__
#endif 
#define __HelloWorldLayer_H__

#include "cocos2d.h"
USING_NS_CC;

class HelloWorldLayer : public Layer
{
public:
	static HelloWorldLayer * create();
	virtual bool init();
	void menuCloseCallback(Ref * ps);
	HelloWorldLayer();
	~HelloWorldLayer();
};

