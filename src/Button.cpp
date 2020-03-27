//
//  Rect.cpp
//  mailPiano
//
//  Created by kota on 2020/03/27.
//

#include "Button.hpp"

ofEvent<glm::vec2> Button::clickedInsideGlobal = ofEvent<glm::vec2>();

Button::Button() {
    bRegisteredEvents = false;
}

Button::~Button(){
    clear();
}

void Button::setup(int width, int height, int x, int y, ofColor color){
    this -> width = width;
    this -> height = height;
    this -> x = x;
    this -> y = y;
    this -> color = color;
    if(!bRegisteredEvents){
        ofRegisterMouseEvents(this);
        bRegisteredEvents = true;
    }
}

void Button::draw(){
    ofPushStyle();
    ofSetColor(color);
    ofDrawRectangle(x, y, width, height);
    ofPopStyle();
}

void Button::clear(){
    if(bRegisteredEvents){
        ofUnregisterMouseEvents(this); // マウスイベントを聞かないようにする。
        bRegisteredEvents = false;
    }
}


void Circle::mouseMoved(ofMouseEventArgs & args){}
void Circle::mouseDragged(ofMouseEventArgs & args){}
void Circle::mousePressed(ofMouseEventArgs & args){}
void Circle::mouseReleased(ofMouseEventArgs & args){
    if (inside(args.x, args.y)) {
        // if the mouse is pressed over the circle an event will be notified (broadcasted)
        // the circleEvent object will contain the mouse position, so this values are accesible to any class that is listening.
        glm::vec2 mousePos = glm::vec2(args.x, args.y);
        ofNotifyEvent(clickedInside, mousePos, this);
        ofNotifyEvent(clickedInsideGlobal, mousePos);
    }
}
void Circle::mouseScrolled(ofMouseEventArgs & args){}
void Circle::mouseEntered(ofMouseEventArgs & args){}
void Circle::mouseExited(ofMouseEventArgs & args){}

//this function checks if the passed arguments are inside the circle.
bool Circle::inside(float _x, float _y ){
    return (glm::distance( glm::vec2(_x, _y), glm::vec2(x, y) ) < radius );
}
