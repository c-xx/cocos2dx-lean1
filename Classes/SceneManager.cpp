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

void SceneManager::createLoadScene() {//��������
	loadScene = Scene::create();
	LoadLayer * layer = LoadLayer::create();
	layer->tsm = this;

	loadScene->addChild(layer);
}
void SceneManager::goOpenScene() {//��ʼ����
	openScene = Scene::create();
	OpenLayer *layer = OpenLayer::create();
	layer->tsm = this;

	openScene->addChild(layer);

	Director::getInstance()->replaceScene(openScene);

}
void SceneManager::goClockScene() {//ʱ�ӳ���
	clockScene = Scene::create();
	ClockLayer * layer = ClockLayer::create();
	layer->tsm = this;

	clockScene->addChild(layer);

	Director::getInstance()->replaceScene(clockScene);
}