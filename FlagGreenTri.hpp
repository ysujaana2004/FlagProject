//
//  GreenTri.hpp
//  ofParameter
//
//  Created by Sujana Yeasmin on 12/16/23.
//

#ifndef GreenTri_hpp
#define GreenTri_hpp

#include "ofMain.h"

class greenTri {
public:
    void setup();
    
    ofParameterGroup paramsG;
    ofParameter<int> x;
    ofParameter<int> y;
    
};

class BlackTri {
public:
    void setup();
    
    ofParameterGroup paramsB;
    ofParameter<int> x;
    ofParameter<int> y;
    
};

class WhiteUTri {
public:
    void setup();
    
    ofParameterGroup paramsWU;
    ofParameter<int> x;
    ofParameter<int> y;
    ofVec2f positionWU;
};

class WhiteDTri {
public:
    void setup();
    
    ofParameterGroup paramsWD;
    ofParameter<int> x;
    ofParameter<int> y;
    
};

#endif /* circle_hpp */
