#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    posY = 50;
    font.loadFont("MPLUSRounded1c-Regular.ttf", 30);
    ofSetWindowPosition(-1000,-340);
    
    d.load("do.mp3");
    re.load("re.mp3");
    mi.load("mi.mp3");
    fa.load("fa.mp3");
    so.load("so.mp3");
    ra.load("ra.mp3");
    si.load("si.mp3");
    
    d1.load("1do.mp3");
    re2.load("2re.mp3");
    mi3.load("3mi.mp3");
    fa4.load("4fa.mp3");
    so5.load("5so.mp3");
    ra6.load("6ra.mp3");
    si7.load("7si.mp3");
    d8.load("8do.mp3");
    am_chord.load("am_chord.mp3");
    c_chord.load("c_chord.mp3");
    drum2_cymbal.load("drum2_cymbal.mp3");
    drum2_hat.load("drum2_hat.mp3");
    drum2_snare.load("drum2_snare.mp3");
    drum2_tom1.load("drum2_tom1.mp3");
    drum2_tom2.load("drum2_tom2.mp3");
    drum2_tom3.load("drum2_tom3.mp3");
    f_chord.load("f_chord.mp3");
    g_chord.load("g_chord.mp3");
    drum1_bassdrum1.load("drum1_bassdrum1.mp3");
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    bgColor.setHsb(20, 0, 100);
    buttonColor.setHsb(130, 145, 255);
    ofSetBackgroundColor(bgColor);
    ofSetColor(255,255,255);
//    ofDrawBitmapString("hi", 50, posY);
//    ofDrawBitmapString(textTyped, 50, 50);
    font.drawString(textTyped, 50, 50);
    ofSetColor(buttonColor);
    ofRect(ofGetWidth() - 150, ofGetHeight() - 100, 100, 50);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    switch(key){
        case OF_KEY_BACKSPACE:
            if(textTyped.length() > 0){
               textTyped = textTyped.substr(0, MAX(0, textTyped.length() - 1));
            }
            break;
        case OF_KEY_RETURN:
            posY += 50;
            break;
            
        default: textTyped += key;
            if(key == 'a') d.play();
            if(key == 'b') re.play();
            if(key == 'c') mi.play();
            if(key == 'd') fa.play();
            if(key == 'e') so.play();
            if(key == 'f') ra.play();
            if(key == 'g') si.play();
            if(key == 'h') d1.play();
            if(key == 'i') re2.play();
            if(key == 'j') mi3.play();
            if(key == 'k') fa4.play();
            if(key == 'l') so5.play();
            if(key == 'm') ra6.play();
            if(key == 'n') si7.play();
            if(key == 'o') d8.play();
            if(key == 'p') am_chord.play();
            if(key == 'q') c_chord.play();
            if(key == 'r') drum2_cymbal.play();
            if(key == 's') drum2_hat.play();
            if(key == 't') drum2_snare.play();
            if(key == 'u') drum2_tom1.play();
            if(key == 'v') drum2_tom2.play();
            if(key == 'w') drum2_tom3.play();
            if(key == 'x') f_chord.play();
            if(key == 'y') g_chord.play();
            if(key == 'z') drum1_bassdrum1.play();
    }
    
    
    
    
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}

void ofApp::onMouseInRect(glm::vec2 &e){
    cout << "cliced inside!" << endl;
}
