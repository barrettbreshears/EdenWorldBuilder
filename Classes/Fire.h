//
//  Fire.h
//  prototype
//
//  Created by Ari Ronen on 11/3/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//
#ifndef Eden_Fire_h
#define Eden_Fire_h



#import "Vector.h"


class Fire
{
public:
    Fire();
    BOOL update(float etime);
    int addFire(float x,float z, float y, int type, float life);
    void render();
    void removeFire(int ppid);
    void removeNode(int idx);
    void updateFire(int idx,Vector pos);
    void clearAllEffects();
    int addSmoke(float x,float z,float y);
    
private:
    void renderFireSprites();
    
};


#endif