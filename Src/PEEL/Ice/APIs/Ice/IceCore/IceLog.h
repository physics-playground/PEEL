///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/**
 *	Contains log file code.
 *	\file		IceLog.h
 *	\author		Pierre Terdiman
 *	\date		April, 4, 2000
 */
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Include Guard
#ifndef ICELOG_H
#define ICELOG_H

	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	/**
	 *	Setups the log file limit. Log file is dumped each time the log array becomes greater than this.
	 *	Typical cases :
	 *	- Limit = 0 :	log file is updated each time a log function is called. This mode is useful to debug crashing apps, to
	 *					check the last log message just before it crashed. (Usually a crashing app still closes the log file,
	 *					so we get a chance to see what went wrong)
	 *	- Limit > 0 :	in that mode, the log file is only dumped to disk from time to time. That way, loops updating the log
	 *					file won't make the app slow down too much.
	 *
	 *	\fn				SetLogLimit(udword limit)
	 *	\param			limit	[in] limit size in bytes
	 */
	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	ICECORE_API void		SetLogLimit(udword limit);

/*	ICECORE_API void		Log(ubyte value);
	ICECORE_API void		Log(uword value);
	ICECORE_API void		Log(udword value);
	ICECORE_API void		Log(float value);
	ICECORE_API void		Log(sbyte value);
	ICECORE_API void		Log(sword value);
	ICECORE_API void		Log(sdword value);
	ICECORE_API void		Log(LPSTR fmt, ...);*/

	// Obsolete methods above. Now, use the format method _F() and pass the result to the one and only Log() method.

	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	/**
	 *	Adds a message to the global log file.
	 *	\fn			Log(const char* msg)
	 *	\param		msg		[in] the message
	 */
	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	ICECORE_API void		Log(const char* msg);

	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	/**
	 *	Handy format macro.
	 *	\fn			_F(LPSTR format, ...)
	 *	\param		format	[in] formatted input
	 *	\return		formatted string
	 *	\warning	the string is not persistent, the method is not thread-safe
	 */
	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	ICECORE_API const char*	_F(LPSTR format, ...);

	class ICECORE_API DebugInterface
	{
		public:
		virtual	void	DebugPrint(const char*) = 0;
	};

	ICECORE_API void	SetDebugInterface(DebugInterface*);
	ICECORE_API void	SetDebugMessage(const char*);

	ICECORE_API void	OpenDebugConsole();

#endif // ICELOG_H
