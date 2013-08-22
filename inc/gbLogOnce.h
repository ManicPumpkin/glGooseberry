/**
	@file	gbLogOnce.h
	@brief	Includes gbLogOnce class
	@author	drubner
	@date	2013-08-22
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
		@class	gbLogOnce
		@brief	Implements only variables for logging options
**/
//==================================================================
class GOOSEBERRY_API gbLogOnce 
{
	public:	
		gbLogOnce():mLogOnce(FALSE){}

	private:
	protected:
		bool mLogOnce;
};