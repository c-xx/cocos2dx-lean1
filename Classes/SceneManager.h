#ifndef __SceneManager_H__
#define __SceneManager_H__

#include <iostream>
#include "cocos2d.h"
USING_NS_CC;

class SceneManager
{
public:
	Scene * loadScene;
	Scene * openScene;
	Scene * clockScene;

	void createLoadScene();//�������س���
	void goOpenScene();
	void goClockScene();

	SceneManager();
	~SceneManager();
};

#endif // !__SceneManager_H__