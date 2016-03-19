#include "OpenLayer.h"



bool OpenLayer::init()
{
	Size winSize = Director::getInstance()->getWinSize();

	Label * label = Label::createWithSystemFont("shi zhong ", "", 48);
	label->setPosition(Vec2(winSize.width / 2, winSize.height * 3 / 4));
	label->setColor(Color3B(255, 0, 0));
	this->addChild(label);

	MenuItemLabel * menuItem =
		MenuItemLabel::create(
			Label::createWithSystemFont("start", "", 30), 
			CC_CALLBACK_1(OpenLayer::menuCallBack, this));
	
	menuItem->setTag(101);
	menuItem->setPosition(Vec2(winSize.width / 2, winSize.height*0.3));
	

	MenuItemLabel * menuItem2 =
		MenuItemLabel::create(
			Label::createWithSystemFont("quit", "", 30),
			CC_CALLBACK_1(OpenLayer::menuCallBack, this));

	menuItem2->setTag(102);
	menuItem2->setPosition(Vec2(winSize.width / 2, winSize.height*0.15));
	
	auto menu = Menu::create(menuItem,menuItem2,NULL);
	menu->setPosition(Point::ZERO);

	this->addChild(menu);

	return true;
}

void OpenLayer::menuCallBack(Ref * pSender) {

	switch (((MenuItem*)pSender)->getTag())
	{
	case 101:
	{
		tsm->goClockScene();
	}
	break;
	case 102:
	{
		Director::getInstance()->end();
		exit(0);
	}
	break;
	default:
		break;
	}
}


