//
//  circle.hpp
//  ofParameter
//
//  Created by Sujana Yeasmin on 12/16/23.
//

#ifndef circle_hpp
#define circle_hpp

#include "ofMain.h"


class circle {
public:
    void setup();
    
    ofParameterGroup params;
    ofParameter<int> x;
    ofParameter<int> y;
};

#endif /* circle_hpp */
