#include "Lines.hpp"

void Lines::setup(){
    
}

void Lines::update(){
    
}

void Lines::draw(){
	// Setting Width
	ofSetLineWidth(20);
	// Setting Yellow Line
	ofSetColor(1000, 1000, 0);
	ofDrawLine(10, 50, 1000, 55); 
	// Setting Green Line
	ofSetColor(0, 1000, 0);
	ofDrawLine(100, 500, 50, 100);
}
