//
//  GreenTri.cpp
//  ofParameter
//
//  Created by Sujana Yeasmin on 12/16/23.
//

#include "GreenTri.hpp"

void greenTri::setup(){
    
    paramsG.add(x.set("Green Tri x", ofGetWidth()/2, 0, ofGetWidth()));
    paramsG.add(y.set("Green Tri y", ofGetHeight()/2, 0, ofGetHeight()));
    
};

void BlackTri::setup(){
    
    paramsB.add(x.set("Black Tri x", ofGetWidth()/2, 0, ofGetWidth()));
    paramsB.add(y.set("Black Tri y", ofGetHeight()/2, 0, ofGetHeight()));

};

void WhiteUTri::setup(){
    
    paramsWU.add(x.set("WhiteU Tri x", ofGetWidth()/2, 0, ofGetWidth()));
    paramsWU.add(y.set("WhiteU Tri y", ofGetHeight()/2, 0, ofGetHeight()));
};

void WhiteDTri::setup(){
    
    paramsWD.add(x.set("WhiteD Tri x", ofGetWidth()/2, 0, ofGetWidth()));
    paramsWD.add(y.set("WhiteD Tri y", ofGetHeight()/2, 0, ofGetHeight()));
    
};
