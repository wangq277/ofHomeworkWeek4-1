#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){
    
    if(myX > ofGetWidth() || myX < 0){
        pxOffset *= -1;
    }
    myX +=pxOffset;
}

//--------------------------------------------------------------
void ofApp::draw(){

//    for (int y=0; y<ofGetHeight(); y+=50){
//        
//        for (int x=0; x<ofGetWidth(); x +=50){
//        ofSetColor(0, x/5, 255);
//        ofDrawCircle(x, 100, 20);
//        }
//    }
    
//    int deltaX = ofMap(mouseX, 0, ofGetWidth(), 0, 100);
//    int deltaY = ofMap(mouseY, 0, ofGetHeight(), 0, 100);
//    for(int y = 0; y< ofGetHeight(); y += 50 + deltaY){
//    for (int x=0; x<ofGetWidth(); x += 50 + deltaX){
//        
//            ofSetColor(0,x/5,255);
//            ofDrawCircle(x, y, 20);
//        
//        }
//    
//    }
    
    int deltaX = ofMap(mouseX, 0, ofGetWidth(), 0, 50);
    int deltaY = ofMap(mouseY, 0, ofGetHeight(), 0, 50);
//    for (int y = 0; y <  ofGetHeight(); y += 20 + deltaY){
//        
//        int mouseDistY = abs(y - mouseY);
//        int colorOffset = 0;
//        if (mouseDistY < 100 ){
//            colorOffset = 100 + mouseDistY;
//        }
    
        for (int x = 0; x < ofGetWidth(); x += 20 + deltaX){
            
        for (int y = 0; y <  ofGetHeight(); y += 20 + deltaY){
    
           int mouseDistX = abs(x - mouseX);
            int mouseDistY = abs(y - mouseY);
            int colorOffsetX = 0,
                colorOffsetY = 0;
            
            if (mouseDistX < 50 && mouseDistY < 50){
                colorOffsetX = 50 + mouseDistX;
                colorOffsetY = 50 + mouseDistY;

            }
          //  ofSetColor(colorOffset, y/5, 255);
            ofSetColor(colorOffsetX, x/5, colorOffsetY);
            ofDrawCircle(x, y, 20);
    
        }
    
    
    }

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if (key == 'l'){
        ofLog(OF_LOG_NOTICE, "Char Pressed:l");
    } else if( key =='o'){
        ofLog(OF_LOG_NOTICE, "Char Pressed:o");
    }
    
    
    
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    if (key == 't'){
        ofLog(OF_LOG_NOTICE, "Char Released:t");
    } else if (key == 'q'){
        ofLog(OF_LOG_NOTICE,"Char Released:q");
    }
    
    
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    mouseX=x;
    mouseY=y;
    
    
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
