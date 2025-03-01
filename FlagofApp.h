#pragma once

#include "ofMain.h"
#include "ofxGui.h"
#include "circle.hpp"
#include "GreenTri.hpp"
#include "Rect.hpp"


class ofApp : public ofBaseApp{
    
    enum SelectedTriangle {
        None,
        RED,
        WU,
        WD,
        Green,
        Black,
        BlackR,
        GreenR,
        WhiteR,
    };

	public:
		void setup() override;
		void update() override;
		void draw() override;
		void exit() override;

		void keyPressed(int key) override;
		void keyReleased(int key) override;
		void mouseMoved(int x, int y ) override;
		void mouseDragged(int x, int y, int button) override;
		void mousePressed(int x, int y, int button) override;
		void mouseReleased(int x, int y, int button) override;
		void mouseScrolled(int x, int y, float scrollX, float scrollY) override;
		void mouseEntered(int x, int y) override;
		void mouseExited(int x, int y) override;
		void windowResized(int w, int h) override;
		void dragEvent(ofDragInfo dragInfo) override;
		void gotMessage(ofMessage msg) override;
    
    ofTrueTypeFont font;
    ofTrueTypeFont font2;
    ofTrueTypeFont font3;
    ofTrueTypeFont font4; 

    string text;
    string text1;
    
    string title;
    string hint;
    
    string endMessage;
    string palestine;
    
    string keys; 
    string ke2y;
    string ke3y;
    string ke4y; 
    string keys1;
    string keys2;
    string keys3;
    string keys4;
    string keys5;
    string keys6;
    string keys7;
    string keys8;
    

    

    ofxPanel gui;
    
    ofParameterGroup sliderGroup;
    ofParameter<int> intSlider;
    ofParameter<int> int2Slider;
    
    circle circle;
  
    
//Green Triangle
    ofParameterGroup slider2Group;
    ofParameter<int> GreenSlider;
 
//Black Triangle
    ofParameterGroup slider3Group;
    ofParameter<int> BlackSlider;

//White U triangle
    ofParameterGroup slider4Group;
    ofParameter<int> WhiteUSlider;
    
//White D triangle
    ofParameterGroup slider5Group;
    ofParameter<int> WhiteDSlider;
    
    greenTri greenTri;
    BlackTri BlackTri; 
    WhiteUTri WhiteUTri;
    WhiteDTri WhiteDTri;

   
//Green Rect
    ofParameterGroup slider7Group;
    ofParameter<int> GreenRectSlider;
 
//Black Rect
    ofParameterGroup slider8Group;
    ofParameter<int> BlackRectSlider;
    
//White Rect
    ofParameterGroup slider9Group;
    ofParameter<int> WhiteRectSlider;
    
    
    greenRect greenRect;
    BlackRect BlackRect;
    WhiteRect WhiteRect;
    
    ofParameterGroup main2Group;

    //Colors

    ofColor white;
    ofColor red;
    ofColor green;
    ofColor black;


    //Small Triangle Position Vectors
    
    ofVec2f trianglePosRed;
    ofVec2f trianglePosWU;
    ofVec2f trianglePosWD;
    ofVec2f trianglePosG;
    ofVec2f trianglePosB;
    
   
    //Rect positions
    
    ofVec2f RectPositionW;
    ofVec2f RectPositionB;
    ofVec2f RectPositionG;
    


    //Correct positions for triangles

    ofVec2f correctTrianglePosWU;
    ofVec2f correctTrianglePosWD;
    ofVec2f correctTrianglePosG;
    ofVec2f correctTrianglePosB;
    ofVec2f correctTrianglePosRed;
    
    //Correct positions for Rectangles
    
    ofVec2f correctRectPosW;
    ofVec2f correctRectPosG;
    ofVec2f correctRectPosB;



    SelectedTriangle selectedTriangle;

   void moveSelectedTriangle(float deltaX, float deltaY);

   bool isTriCorrect(ofVec2f triCurrentPos, ofVec2f triCorrectPos, int tolerance);

    
    bool allRectCorrect = false;
    bool bRectCorrect = false;
    bool wRectCorrect = false;
    bool gRectCorrect = false;


    bool allTriCorrect = false;
    bool bTriCorrect = false;
    bool gTriCorrect = false;
    bool wuTriCorrect = false;
    bool wdTriCorrect = false;
    bool RedTriCorrect = false;

    
    bool allShapesCorrect = false;


//++++++++++++++++++++++++++++++++++++++++++
};
