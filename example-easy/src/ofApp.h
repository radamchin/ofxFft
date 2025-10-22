#pragma once

#include "ofMain.h"
#include "ofxEasyFft.h"

class ofApp : public ofBaseApp {
public:
	void setup();
	void update();
	void draw();
	
	void plot(const vector<float>& buffer, float scale);
	
	ofxEasyFft fft;
};
