#include "ofMain.h"
#include "ofApp.h"
#include "ofGLProgrammableRenderer.h"

int main() {
    
    ofSetLogLevel(OF_LOG_VERBOSE);
    ofSetLogLevel("ofThread", OF_LOG_ERROR);

    #ifdef TARGET_OPENGLES
        ofSetCurrentRenderer(ofGLProgrammableRenderer::TYPE);
    #endif
    
    ofSetupOpenGL(1280, 720, OF_FULLSCREEN);
    ofRunApp(new ofApp());
    
}
