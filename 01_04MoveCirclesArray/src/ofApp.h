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
    
    //static const int NUM = 400; //ÈÖçÂàó„ÅÆÊúÄÂ§ßÊï∞„ÇíÂÆöÊï∞„Å®„Åó„Å¶ÂÆöÁæ©
    
    
    //ÈÖçÂàó„ÇíÂÆöÁæ©
    //ofVec2f location[NUM]; //NUMÂÄã„ÅÆ‰ΩçÁΩÆ„Éô„ÇØ„Éà„É´
    //ofVec2f velocity[NUM]; //NUMÂÄã„ÅÆÈÄüÂ∫¶„Éô„ÇØ„Éà„É´
    
    //ÔºìÊ¨°ÂÖÉÈÖçÂàó„ÇíÂÆöÁæ©
    vector<ofVec3f> location;
    vector<ofVec3f> velocity;
    vector<ofColor> color;
    static const int MAX = 200;
    
    //int count;
    
    ofEasyCam cam;
    
    //define spheres
    //ofSpherePrimitive sphere[NUM];
};
