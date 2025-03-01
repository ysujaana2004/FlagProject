//
//  circle.cpp
//  ofParameter
//
//  Created by Sujana Yeasmin on 12/16/23.
//

#include "circle.hpp"

void circle::setup(){
    //params.setName("Circle params");
    
    params.add(x.set("Circle x", ofGetWidth()/2, 0, ofGetWidth()));
    params.add(y.set("Circle y", ofGetHeight()/2, 0, ofGetHeight()));

    
};
