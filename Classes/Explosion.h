/****************************************************************************
 Copyright (c) 2014 Chukong Technologies Inc.

 http://github.com/chukong/EarthWarrior3D

 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:

 The above copyright notice and this permission notice shall be included in
 all copies or substantial portions of the Software.

 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.
 ****************************************************************************/

#ifndef __Moon3d__Explosion__
#define __Moon3d__Explosion__

#include "cocos2d.h"

class SmallExplosion : public cocos2d::Node{
    
public:
    CREATE_FUNC(SmallExplosion);
    bool init();
    void createExplosion(Node* _effectLayer, cocos2d::Vector2 pos);
    
private:
    void recycle(float dt);
    cocos2d::ParticleSystemQuad* part1;
    cocos2d::ParticleSystemQuad* part2;

};

class BigExplosion : public cocos2d::Node{
    
public:
    CREATE_FUNC(BigExplosion);
    bool init();
    void createExplosion(Node* _effectLayer,cocos2d::Vector2 pos);
    cocos2d::ParticleSystemQuad* part1;
    cocos2d::ParticleSystemQuad* part2;
    cocos2d::ParticleSystemQuad* part3;
private:
    void recycle(float dt);

};

class BulletExplosion : public cocos2d::Sprite
{
public:
    CREATE_FUNC(BulletExplosion);
    bool init();
    void showExplosion(cocos2d::Vector2 point);
    void explosionFinished(Ref* obj);
};


#endif /* defined(__Moon3d__Explosion__) */
