#include "cinder/app/AppBasic.h"
#include "cinder/gl/gl.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class HelloWorldApp : public AppBasic {
  public:
	void setup();
	void mouseDown( MouseEvent event );	
	void update();
	void draw();
};

void HelloWorldApp::setup()
{
}

void HelloWorldApp::mouseDown( MouseEvent event )
{
}

void HelloWorldApp::update()
{
}

void HelloWorldApp::draw()
{
	float r = 255;
	float g = 0;
	float b = 0;
	// clear out the window with black
	gl::clear( Color( r, g, b ) ); 
}

CINDER_APP_BASIC( HelloWorldApp, RendererGl )
