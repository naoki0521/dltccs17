#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    // 画面基本設定
    ofSetFrameRate(60); //秒間60コマで描画
    ofSetBackgroundColor(0); //背景色を黒に
    
    //位置を初期化
    for(int i = 0; i < num; i++){
        location[i].set(ofRandom(ofGetWidth(),ofRandom(ofGetHeight())));
        velocity[i].set(ofRandom(-10,10), ofRandom(-10,10));
    }

}

//--------------------------------------------------------------
void ofApp::update(){
    //位置を更新
    for(int i = 0; i < num; i++){
        location[i] += velocity[i];
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    //計算した位置に円を描画
    ofSetColor(37, 127, 120); //円の色
    for(int i = 0; i < num; i++){
    ofDrawCircle(location[i], 50); //半径20の円を描画
    if(location[i].x > ofGetWidth() || location[i].x < 0){
        velocity[i].x *= -1;
        
    }
  
    if(location[i].y > ofGetHeight() || location[i].y < 0){
               velocity[i].y *= -1;
    }
        
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

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
