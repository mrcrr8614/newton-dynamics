/* Copyright (c) <2003-2021> <Newton Game Dynamics>
* 
* This software is provided 'as-is', without any express or implied
* warranty. In no event will the authors be held liable for any damages
* arising from the use of this software.
* 
* Permission is granted to anyone to use this software for any purpose,
* including commercial applications, and to alter it and redistribute it
* freely
*/


#ifndef _N_STDAFX_H_
#define _N_STDAFX_H_

// Insert your headers here
#define WIN32_LEAN_AND_MEAN	

#include <stddef.h>
#include <stdarg.h>
#include <stdio.h>
#include <math.h>
#include <float.h>
#include <ctype.h>

#if (defined(WIN32) || defined(_WIN32))
	#define WIN32_LEAN_AND_MEAN		// Exclude rarely-used stuff from Windows headers

	#undef APIENTRY
	#define GLFW_EXPOSE_NATIVE_WIN32
	#define GLFW_EXPOSE_NATIVE_WGL

	#include <windows.h>
	#include <commctrl.h>
	#include <stdio.h>
	#include <stdlib.h>
	#include <malloc.h>
	#include <memory.h>
	#include <time.h>
	#include <tchar.h>
	#include <crtdbg.h>
#endif
	
#if defined (__linux__ )
	#include <stdlib.h>
	#include <unistd.h>
	#include <time.h>
#endif

#if defined (__APPLE__)
	#include <CoreFoundation/CoreFoundation.h> 
	#include <unistd.h>
#endif

// SDK includes
#include <ndNewton.h>

#ifndef _MSC_VER
	#ifndef stricmp
		#define stricmp strcasecmp
	#endif

	#if !defined(_strlwr) && !(defined(__MINGW32__) || defined(__MINGW64__))
		inline char* _strlwr (char* const ptr)
		{ 
			char* ret = ptr; 
			while (*ret != '\0')
			{ 
				*ret = char (tolower (*ret));
				ret ++;
			} 
			return ptr; 
		}
	#endif
#endif

#endif 

