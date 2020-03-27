#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		
    ofSoundPlayer d;
    ofSoundPlayer re;
    ofSoundPlayer mi;
    ofSoundPlayer fa;
    ofSoundPlayer so;
    ofSoundPlayer ra;
    ofSoundPlayer si;
    ofSoundPlayer d1;
    ofSoundPlayer re2;
    ofSoundPlayer mi3;
    ofSoundPlayer fa4;
    ofSoundPlayer so5;
    ofSoundPlayer ra6;
    ofSoundPlayer si7;
    ofSoundPlayer d8;
    ofSoundPlayer am_chord;
    ofSoundPlayer c_chord;
    ofSoundPlayer drum2_cymbal;
    ofSoundPlayer drum2_hat;
    ofSoundPlayer drum2_snare;
    ofSoundPlayer drum2_tom1;
    ofSoundPlayer drum2_tom2;
    ofSoundPlayer drum2_tom3;
    ofSoundPlayer f_chord;
    ofSoundPlayer g_chord;
    ofSoundPlayer drum1_bassdrum1;
    
    //文字入力系
    ofTrueTypeFont font;
    string textTyped;
    int posY;
    
    //色
    ofColor bgColor;
    ofColor buttonColor;
    
    //四角形の中にマウスがあるかどうか
    void onMouseInRect(glm::vec2 & e);
};
