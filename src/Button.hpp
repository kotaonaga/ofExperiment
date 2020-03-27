//
//  Rect.hpp
//  mailPiano
//
//  Created by kota on 2020/03/27.
//

#ifndef Rect_hpp
#define Rect_hpp

#include "ofMain.h"
#include <stdio.h>

class Button{
    public:
        Button();
        ~Button();
    
    //glm::vec2型のクラス。イベントをキャッチする。
    ofEvent<glm::vec2> clickedInside;
    
    //staticは意味わからんけど今は飛ばす。
    static ofEvent<glm::vec2> clickedInsideGlobal;
    
    void setup(int width, int height, int x, int y, ofColor color);
    void draw();
    void clear();
    
    //全部書かないといけないらしい。１つしか使わなくても。
    void mouseMoved(ofMouseEventArgs & args);
    void mouseDragged(ofMouseEventArgs & args);
    void mousePressed(ofMouseEventArgs & args);
    void mouseReleased(ofMouseEventArgs & args);
    void mouseScrolled(ofMouseEventArgs & args);
    void mouseEntered(ofMouseEventArgs & args);
    void mouseExited(ofMouseEventArgs & args);
    
    bool inside(float _x, float _y);
    int width, height, x, y;
    ofColor color;
    
protected:
    bool bRegisteredEvents;
};

#endif /* Rect_hpp */
