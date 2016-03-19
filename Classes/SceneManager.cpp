#include "SceneManager.h"
#include "LoadLayer.h"
#include "OpenLayer.h"
#include "ClockLayer.h"

SceneManager::SceneManager()
{
}


SceneManager::~SceneManager()
{
}

void SceneManager::createLoadScene() {//创建场景
	loadScene = Scene::create();
	LoadLayer * layer = LoadLayer::create();
	layer->tsm = this;

	loadScene->addChild(layer);
}
void SceneManager::goOpenScene() {//开始场景
	openScene = Scene::create();
	OpenLayer *layer = OpenLayer::create();
	layer->tsm = this;

	openScene->addChild(layer);

	Director::getInstance()->replaceScene(openScene);

}
void SceneManager::goClockScene() {//时钟场景
	clockScene = Scene::create();
	ClockLayer * layer = ClockLayer::create();
	layer->tsm = this;

	clockScene->addChild(layer);

	Director::getInstance()->replaceScene(clockScene);
}