#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    
    gui.setup();
    ofSetBackgroundColor(195,195,199);
    
    font.load("GhiboTalk.otf", 60);
    title = "Nation Of Puzzle";
    palestine = "Palestine";
    
    font4.load("GhiboTalk.otf", 50);
    endMessage = "Puzzle completed";


    
    font2.load("Times New Roman.ttf", 12);
    text = " You will be given 4 triangles, 3 rectangles and a circle.Your task is to use the sliders";
    text1 = "           on the left to adjust the sizes and use the following keys to complete the puzzle";
    font3.load("Times New Roman.ttf", 12);
    hint = "HINT: Red is bright, but it certainly hides it's true shape and size";
    
    keys = " GIVEN KEY";
    ke2y = "+ ";
    ke3y = "ARROW KEY ON";
    ke4y = "YOUR KEYBOARD";
    keys1 = "1 - White top triangle";
    keys2 = "2 - White bottom triangle";
    keys3 = "3 - Green triangle";
    keys4 = "4 - Black Triangle";
    keys5 = "5 - Red Circle";
    keys6 = "6 - Black Rectangle";
    keys7 = "7 - Green Rectangle";
    keys8 = "8 - White rectangle";
    
    //RED TRIANGLE
    
    sliderGroup.add(intSlider.set("Circle ResL", 64, 3, 64));
    sliderGroup.add(int2Slider.set("Circle Size", 20, 0, 500));
    
    circle.setup();
    
    trianglePosRed.x = circle.x;
    trianglePosRed.y = circle.y;
    
    main2Group.add(circle.params);
    main2Group.add(sliderGroup);


  //Green triangle
    
    slider2Group.add(GreenSlider.set("Green Tri Size", 50, 0, 500));
    
    greenTri.setup();
    
    trianglePosG.x = greenTri.x;
    trianglePosG.y = greenTri.y;
    
    main2Group.add(greenTri.paramsG);
    main2Group.add(slider2Group);

    //BLACK TRIANGLE
    
    slider3Group.add(BlackSlider.set("Black Tri Size", 50, 0, 500));
    
    BlackTri.setup();
    
    trianglePosB.x = BlackTri.x;
    trianglePosB.x = BlackTri.y;
    
    main2Group.add(BlackTri.paramsB);
    main2Group.add(slider3Group);
  
    //white top triangle
   
    slider4Group.add(WhiteUSlider.set("White T Tri Size", 50, 0, 500));

    WhiteUTri.setup();
        
    trianglePosWU.x = WhiteUTri.x;
    trianglePosWU.y = WhiteUTri.y;
    
    main2Group.add(WhiteUTri.paramsWU);
    main2Group.add(slider4Group);
    
   //WHITE BOTTOM TRIANGLE
    
    slider5Group.add(WhiteDSlider.set("White B Tri Size", 50, 0, 500));
    
    WhiteDTri.setup();
    
    trianglePosWD.x = WhiteDTri.x;
    trianglePosWD.y = WhiteDTri.y;
    
    main2Group.add(WhiteDTri.paramsWD);
    main2Group.add(slider5Group);
    
    gui.setup(main2Group);
    
    
    //black rectangle
    
    slider8Group.add(BlackRectSlider.set("Black Rect Size", 326, 0, 500));
    
    BlackRect.setup();
    
    RectPositionB.x = BlackRect.x1;
    RectPositionB.y = BlackRect.y1;
    
    main2Group.add(BlackRect.paramsBR);
    main2Group.add(slider8Group);
    
    //green rect
    
    slider7Group.add(GreenRectSlider.set("Green Rect Size", 326, 0, 500));
    
    greenRect.setup();
    
    RectPositionG.x = greenRect.x1;
    RectPositionG.y = greenRect.y1;
    
    //main2Group.add(greenRect.paramsGR);
    main2Group.add(slider7Group);
    
    //white rect
    
    slider9Group.add(WhiteRectSlider.set("White Rect Size", 240, 0, 500));
    
    WhiteRect.setup();
    
    RectPositionW.x = WhiteRect.x1;
    RectPositionW.y = WhiteRect.y1;
    
   main2Group.add(slider9Group);

            //Define colors

            white.r = 255;
            white.g = 255;
            white.b = 255;


            green.r = 0;
            green.g = 128;
            green.b = 0;
            

            red.r = 255;
            red.g = 0;
            red.b = 0;


            black.r = 0;
            black.g = 0;
            black.b = 0;
    
    
            //initial position
    
            RectPositionW.set(200, 400);
            RectPositionB.set(300, 500);
            RectPositionG.set(400, 600);
            
            //correct positions Rectangles
    
            correctRectPosW.set(510, 350);
            correctRectPosB.set(425, 250);
            correctRectPosG.set(425, 450);
    
            //Smaller triangles

            trianglePosWU.set(300, 600);  // Set initial position
            trianglePosWD.set(400, 600);
            trianglePosG.set(500, 600);
            trianglePosB.set(600, 600);
            trianglePosRed.set(300, 600);
    

           //correct positions Small triangles

           correctTrianglePosWU.set(510, 350);
           correctTrianglePosWD.set(510, 450);
           correctTrianglePosG.set(425, 550);
           correctTrianglePosB.set(425, 250);
            
            //Red triangle
           correctTrianglePosRed.set(335, 400);



           //Initialize selectedTriangle

           selectedTriangle = None;

    
}

//--------------------------------------------------------------
void ofApp::update(){
    
    gTriCorrect = isTriCorrect(trianglePosG, correctTrianglePosG, 2);
    bTriCorrect = isTriCorrect(trianglePosB, correctTrianglePosB, 2);
    wuTriCorrect = isTriCorrect(trianglePosWU, correctTrianglePosWU, 2);
    wdTriCorrect = isTriCorrect(trianglePosWD, correctTrianglePosWD, 2);
    RedTriCorrect = isTriCorrect(trianglePosRed, correctTrianglePosRed, 2);
    
    bRectCorrect = isTriCorrect(RectPositionB, correctRectPosB, 2);;
    wRectCorrect = isTriCorrect(RectPositionW, correctRectPosW, 2);;
    gRectCorrect = isTriCorrect(RectPositionG, correctRectPosG, 2);;

    allTriCorrect = (gTriCorrect && bTriCorrect && wuTriCorrect && wdTriCorrect && RedTriCorrect);
    allRectCorrect = (bRectCorrect && wRectCorrect && gRectCorrect);
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    
    ofSetColor(0,0,0);
        font.drawString(title, 350, 70);
        font2.drawString(text, 250, 120);
        font2.drawString(text1, 250, 150);

        font3.drawString(hint, 400, 180);
    
        font3.drawString(keys, 780, 220);
        font3.drawString(ke2y, 830, 240);
        font3.drawString(ke3y, 780, 260);
        font3.drawString(ke4y, 780, 280);


    
        font3.drawString(keys1, 800, 320);
        font3.drawString(keys2, 800, 350);
        font3.drawString(keys3, 800, 380);
        font3.drawString(keys4, 800, 410);
        font3.drawString(keys5, 800, 440);
        font3.drawString(keys6, 800, 470);
        font3.drawString(keys7, 800, 500);
        font3.drawString(keys8, 800, 530);


       
    
    ofNoFill();
    ofDrawRectangle(250, 250, 500, 300);
    
    ofFill();
    ofSetColor(green);
    ofDrawRectangle(RectPositionG.x, RectPositionG.y, GreenRectSlider, 100);
    
    
    
    ofSetColor(black);
    ofDrawRectangle(RectPositionB.x, RectPositionB.y, BlackRectSlider, 100);
   
    ofSetColor(white);
    ofDrawRectangle(RectPositionW.x, RectPositionW.y, WhiteRectSlider, 100);
    
    
    ofFill();
    ofSetColor(red);
    ofSetCircleResolution(intSlider);
    ofDrawCircle(trianglePosRed.x, trianglePosRed.y, int2Slider);
    
    ofSetColor(green);
    ofDrawTriangle(
        trianglePosG.x, trianglePosG.y,
        trianglePosG.x, trianglePosG.y - GreenSlider,
        trianglePosG.x - (GreenSlider * sqrt(3)), trianglePosG.y
    );
    
    ofSetColor(black);
    ofDrawTriangle(
        trianglePosB.x, trianglePosB.y,
        trianglePosB.x, trianglePosB.y + BlackSlider,
        trianglePosB.x - (BlackSlider * sqrt(3)), trianglePosB.y
    );
        
    ofSetColor(white);
    ofDrawTriangle(
        trianglePosWU.x, trianglePosWU.y,
        trianglePosWU.x, trianglePosWU.y + WhiteUSlider,
        trianglePosWU.x - (WhiteUSlider * sqrt(3)), trianglePosWU.y
    );
   
    ofSetColor(white);
    ofDrawTriangle(
        trianglePosWD.x, trianglePosWD.y,
        trianglePosWD.x, trianglePosWD.y - 50,
        trianglePosWD.x - (50 * sqrt(3)), trianglePosWD.y
        
    );
    
    ofSetColor(8, 8, 8);

    string RedTrianglePosition = "Red Circle: " + ofToString(trianglePosRed.x) + ", " + ofToString(trianglePosRed.y);
    ofDrawBitmapString(RedTrianglePosition, 10, ofGetHeight() - 6);
    
    string GreenTrianglePosition = "Green Tri: " + ofToString(trianglePosG.x) + ", " + ofToString(trianglePosG.y);
    ofDrawBitmapString(GreenTrianglePosition, 200, ofGetHeight() - 6);
    
    string BlackTrianglePosition = "Black Tri: " + ofToString(trianglePosB.x) + ", " + ofToString(trianglePosB.y);
    ofDrawBitmapString(BlackTrianglePosition, 400, ofGetHeight() - 6);
    
    string WhiteUTrianglePosition = "WhiteU Tri: " + ofToString(trianglePosWU.x) + ", " + ofToString(trianglePosWU.y);
    ofDrawBitmapString(WhiteUTrianglePosition, 600, ofGetHeight() - 6);
    
    string WhiteDtrianglePosition = "WhiteD Tri: " + ofToString(trianglePosWD.x) + ", " + ofToString(trianglePosWD.y);
    ofDrawBitmapString(WhiteDtrianglePosition, 10 , ofGetHeight() - 30);
    
    string GreenRectPosition = "Green Rect: " + ofToString(RectPositionG.x) + ", " + ofToString(RectPositionG.y);
    ofDrawBitmapString(GreenRectPosition, 200, ofGetHeight() - 30);
    
    string WhiteRectPosition = "White Rect: " + ofToString(RectPositionW.x) + ", " + ofToString(RectPositionW.y);
    ofDrawBitmapString(WhiteRectPosition, 400, ofGetHeight() - 30);
    
    string BlackRectPosition = "Black Rect: " + ofToString(RectPositionB.x) + ", " + ofToString(RectPositionB.y);
    ofDrawBitmapString(BlackRectPosition, 600, ofGetHeight() - 30);
    
    if (allTriCorrect && allRectCorrect){
        font.drawString(palestine, 370, 450);
        font4.drawString(endMessage, 200, 500);

    }

    else{
        endMessage = " ";
    }
    
    gui.draw();
}

//--------------------------------------------------------------
void ofApp::exit(){

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    // Move the triangle based on keyboard input
    

        float moveAmount = 5.0;  // Adjust as needed

        switch (key) {
            case '1':
                selectedTriangle = WU;
                break;

            case '2':
                selectedTriangle = WD;
                break;

            case '3':
                selectedTriangle = Green;
                break;

            case '4':
                selectedTriangle = Black;
                break;
                
            case '5':
                selectedTriangle = RED;
                break;
            
            case '6':
                selectedTriangle = BlackR;
                break;
            case '7':
                selectedTriangle = GreenR;
                break;
            case '8':
                selectedTriangle = WhiteR;
                break;
                
            case OF_KEY_UP:
                moveSelectedTriangle(0, -moveAmount);
                break;

            case OF_KEY_DOWN:
                moveSelectedTriangle(0, moveAmount);
                break;

            case OF_KEY_LEFT:
                moveSelectedTriangle(-moveAmount, 0);
                break;

            case OF_KEY_RIGHT:
                moveSelectedTriangle(moveAmount, 0);
                break;

        }
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
    // Unselect the current triangle when the key is released

        if (key == '1' || key == '2' || key == '3' || key == '4' || key == '5' || key == '6' || key == '7' || key == '8') {
            selectedTriangle = None;

        }
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
void ofApp::mouseScrolled(int x, int y, float scrollX, float scrollY){

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


void ofApp::moveSelectedTriangle(float deltaX, float deltaY){

    // Move the selected triangle based on arrow key input

    switch (selectedTriangle) {

        case WU:

            trianglePosWU.x += deltaX;
            trianglePosWU.y += deltaY;
            break;

        case WD:

            trianglePosWD.x += deltaX;
            trianglePosWD.y += deltaY;
            break;

        case Green:

            trianglePosG.x += deltaX;
            trianglePosG.y += deltaY;
            break;

        case Black:

            trianglePosB.x += deltaX;
            trianglePosB.y += deltaY;
            break;
            
        case RED:
            
            trianglePosRed.x += deltaX;
            trianglePosRed.y += deltaY;
            break;
            
        case BlackR:
            
            RectPositionB.x += deltaX;
            RectPositionB.y += deltaY;
            break;
            
        case GreenR:
            
            RectPositionG.x += deltaX;
            RectPositionG.y += deltaY;
            break;
        
        case WhiteR:

            RectPositionW.x += deltaX;
            RectPositionW.y += deltaY;
            break;
            
        default:
            break;

    }

}

bool ofApp::isTriCorrect(ofVec2f triCurrentPos, ofVec2f triCorrectPos, int tolerance){

    return (abs(triCurrentPos.x - triCorrectPos.x) <= tolerance && 
            abs(triCurrentPos.y - triCorrectPos.y) <= tolerance);

}
