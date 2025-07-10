#ifndef __PLAYEROBJECT_H__
#define __PLAYEROBJECT_H__

#include <Geode/Geode.hpp>
#include <Geode/modify/PlayerObject.hpp>

namespace swing_arrow {

struct ArrowPlayerObject : geode::Modify<ArrowPlayerObject, PlayerObject> {
    struct Fields {
        geode::Ref<cocos2d::CCSprite> m_arrow = nullptr;
    };

    bool init(int p0, int p1, GJBaseGameLayer* p2, cocos2d::CCLayer* p3, bool p4);

    void updatePlayerArt();
    void resetPlayerIcon();
    void playDeathEffect();
    void rotateGameplay(int p0, int p1, bool p2, float p3, float p4, bool p5, bool p6);
    void flipGravity(bool p0, bool p1);
};

}

#endif /* __PLAYEROBJECT_H__ */
