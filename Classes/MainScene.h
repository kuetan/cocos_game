#ifndef __test__MainScene__
#define __test__MainScene__

#include "cocos2d.h"

class MainScene :public cocos2d::Layer {
protected:
  MainScene();
  virtual ~MainScene();
  bool init();
  
public:
  static cocos2d::Scene* createScene();
  void addButon();
  CREATE_FUNC(MainScene);
};

#endif




