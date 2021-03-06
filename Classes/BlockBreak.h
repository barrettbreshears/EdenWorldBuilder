//
//  BlockBreak.h
//  prototype
//
//  Created by Ari Ronen on 11/2/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//
#ifndef Eden_BlockBreak_h
#define Eden_BlockBreak_h






class BlockBreak{
public:
    BlockBreak();
    int update(float etime);
    void addBlockBreak(int x,int z,int y,int type,int color);
    void render();
    void removeNode(int idx);
    void clearAllEffects();
    void addBlockExplode(int x,int z,int y,int type,int color);
    void addCreatureVanish2(float x,float z, float y,int color,int type);
    void addFirework(float x,float z,float y,int color);
    
    
};

#endif