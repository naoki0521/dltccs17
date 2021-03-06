#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    // 画面基本設定
    ofSetFrameRate(60);//秒間60コマで描画
    ofSetBackgroundColor(0);//背景色を黒に
    ofEnableDepthTest();
    
    //count = 0;
    
    }

//--------------------------------------------------------------
void ofApp::update(){
    
    ofVec3f loc = ofVec3f(ofGetWidth()/2, ofGetHeight()/2, 250);
    location.push_back(loc);
    
    ofVec3f vel = ofVec3f(ofRandom(-10, 10), ofRandom(-10, 10), ofRandom(-10, 10));
    velocity.push_back(vel);
    
    ofColor col = ofColor(ofRandom(255), ofRandom(255), ofRandom(255));
    color.push_back(col);
    
    //NUM回くりかえし
    for (int i = 0; i < location.size(); i++) {
        location[i] += velocity[i];
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    
 
for (int i = 0; i < location.size(); i++){
    
        //sphere[i].setPosition(location3[i]);
        //sphere[i].drawWireframe();
    }

    //NUM回くりかえし

        //計算した位置に円を描画
        ofSetColor(color[i]);//円の色
        ofDrawCircle(location[i], 3);//半径10の円を描画
        //ofDrawCircle(location[i], 10);//半径10の円を描画
        
        ofSetColor(color[i]);
        
        //画面の端でバウンドするように
        if (location[i].x < 0 || location[i].x > ofGetWidth()) { //画面の左右ではみ出したら
            velocity[i].x *= -1; //横向きの速度を反転(バウンド)
        }
        if (location[i].y < 0 || location[i].y > ofGetHeight()) { //画面の左右ではみ出したら
            velocity[i].y *= -1; //横向きの速度を反転(バウンド)
        }
        
        if (location[i].z < 0 || location[i].z > 500){
            velocity[i].z *= -1;
        }
        
        sphere[i].setPosition(location3[i]);
        sphere[i].drawWireframe();
        
    }






//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if(key == 'k'){
        location.clear();
        velocity.clear();
        color.clear();
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
