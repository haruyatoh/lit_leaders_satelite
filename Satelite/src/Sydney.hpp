//
//  Sydney.hpp
//  Leaders_Satellite
//
//  Created by 矢頭　春香 on 2016/06/21.
//
//

#ifndef Sydney_hpp
#define Sydney_hpp

#include "ofMain.h"
#include "ofxJSONElement.h"


class Sydney{
public:
    void setup();
    void draw();
    
    ofxJSONElement response;
    ofxJSONElement response2;
    
    ofTrueTypeFont waster;
    
};

#endif /* Sydney_hpp */
