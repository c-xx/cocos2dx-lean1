#include "HelloWorldLayer.h"



HelloWorldLayer::HelloWorldLayer()
{
}


HelloWorldLayer::~HelloWorldLayer()
{
}

HelloWorldLayer * HelloWorldLayer::create() {
	HelloWorldLayer *pRet = new HelloWorldLayer();
	if ( pRet && pRet->init())
	{
		pRet->autorelease();
		return pRet;
	}
	else {
		CC_SAFE_DELETE(pRet);
		return NULL;
	}
}
bool HelloWorldLayer::init() {
	if (Layer::init() == false)
	{
		return false;
	}

	Size size = Director::getInstance()->getVisibleSize();
	Vec2 origin = Director::getInstance()->getVisibleOrigin();

	Label * label = Label::createWithTTF("HelloWorld", "fonts/Marker Felt.ttf",
		24);

	label->setPosition(Vec2(size.width/2, size.height * 5 / 6));
	this->addChild(label,1);

	auto sprite = Sprite::create("HelloWorld.png");
	sprite->setPosition(Vec2(size.width / 2, size.height / 2));
	this->addChild(sprite,0);

	auto closeItem = MenuItemImage::create("CloseNormal.png","CloseSelected.png",
		CC_CALLBACK_1(HelloWorldLayer::menuCloseCallback,this));

	closeItem->setPosition(Vec2(900, 100));

	auto menu = Menu::create(closeItem, NULL);
	menu->setPosition(Point::ZERO);

	this->addChild(menu);

	return true;
}

void HelloWorldLayer::menuCloseCallback(Ref * ps) {
	CCLOG("menuCloseCallback");
}