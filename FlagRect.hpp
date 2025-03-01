//
//  Rect.hpp
//  ofParameter
//
//  Created by Sujana Yeasmin on 12/17/23.
//

#ifndef Rect_hpp
#define Rect_hpp

#include "ofMain.h"

class greenRect {
public:
    void setup();
    
    ofParameterGroup paramsGR;
    ofParameter<int> x1;
    ofParameter<int> y1;
    
};

class BlackRect {
public:
    void setup();
    
    ofParameterGroup paramsBR;
    ofParameter<int> x1;
    ofParameter<int> y1;
    
};

class WhiteRect {
public:
    void setup();
    
    ofParameterGroup paramsWR;
    ofParameter<int> x1;
    ofParameter<int> y1;
};

#endif /* Rect_hpp */
