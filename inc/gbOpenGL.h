/**
	@file	openGL.h
	@brief	Includes OpenGL class
	@author	drubner
	@date	2013-07-06
**/
//==================================================================
//	PRAGMA
//==================================================================
#pragma once

//==================================================================
//	INCLUDE
//==================================================================
#include "gooseberry.h"

//==================================================================
//	NAMESPACES
//==================================================================

//==================================================================
//	CLASS
//==================================================================
/**
		@class	OpenGL
		@brief	Implements all rendering, initialization and resize
				methods for OpenGL, also variables, getter and 
				setter methods
**/
//==================================================================
class GOOSEBERRY_API gbOpenGL 
{
	public:
		//  Variables

		//	(De-)Constructor
		gbOpenGL();
		~gbOpenGL();

		//	Functions
		VOID fInitializeOpenGL();
		//VOID fInitializeScene();
		//VOID fRenderScene();
		gbResult fStartWnd();
		gbResult fExitWnd();
		gbResult fRegisterWndClass();
		gbResult fFullscreenWnd();
		gbResult fCreateOpenGLWnd();
		gbResult fEnableOpenGL();
		gbResult fResizeOpenGLWnd(int pWidth, int pHeight);
		//VOID fDrawBitmapText(char *, float, float, float);
		gbResult fDrawSimpleLine(gbVector3f pStart, gbVector3f pEnd);
		gbResult fDrawSimpleLine(gbColor pColor, gbVector3f pStart, gbVector3f pEnd);
				
	private:
		//	Variables
		DWORD	mDwExStyle;
		DWORD	mDwStyle;
		bool	mInit;

	protected:
};