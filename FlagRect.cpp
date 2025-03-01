//
//  Rect.cpp
//  ofParameter
//
//  Created by Sujana Yeasmin on 12/17/23.
//

#include "Rect.hpp"

void greenRect::setup(){
    //paramsG.setName("GreenTri params");
    
    paramsGR.add(x1.set("Green Rect x", ofGetWidth()/2, 0, ofGetWidth()));
    paramsGR.add(y1.set("Green Tri y", ofGetHeight()/2, 0, ofGetHeight()));
    
};

void BlackRect::setup(){
    //paramsB.setName("BlackTri params");
    
    paramsBR.add(x1.set("Black Rect x", ofGetWidth()/2, 0, ofGetWidth()));
    paramsBR.add(y1.set("Black Rect y", ofGetHeight()/2, 0, ofGetHeight()));
};

void WhiteRect::setup(){
    //paramsB.setName("BlackTri params");
    
    paramsWR.add(x1.set("White Rect x", 500, 0, ofGetWidth()));
    paramsWR.add(y1.set("White Rect y", ofGetHeight()/2, 0, ofGetHeight()));
};

