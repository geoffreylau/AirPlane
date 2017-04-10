/*******************************************************************************
	Author						: JackyFu
	Email                   	: fusijie@vip.qq.com
	QQ  						: 754505629
	Blog						: http://blog.csdn.net/jackystudio
	All Rights Reserved
	
	This piece of code does not have any registered copyright and is free to be 
	used as necessary. The user is free to modify as per the requirements. As a
	fellow developer, all that I expect and request for is to be given the 
	credit for intially developing this reusable code by not removing my name as 
	the author.
*******************************************************************************/
#pragma once
#include "cocos2d.h"
USING_NS_CC;

class NoTouchLayer : public Layer
{
public:
	virtual bool init();   

	// implement the "static node()" method manually 
	CREATE_FUNC(NoTouchLayer);
    
	virtual bool onTouchBegan (Touch *touch, Event *event);
	virtual void onTouchMoved (Touch *touch, Event *event);
	virtual void onTouchEnded (Touch *touch, Event *event);
};
