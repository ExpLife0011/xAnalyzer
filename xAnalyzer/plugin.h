#pragma once

#include "pluginmain.h"

//plugin data
#define PLUGIN_NAME "xAnalyzer"
#define PLUGIN_VERSION 2
#define PLUGIN_VERSION_STR "2.5.2"

enum
{
	MENU_ANALYZE_UNDEF = 1,
	MENU_ANALYZE_AUTO,
	MENU_ANALYZE_DISASM,
	MENU_ANALYZE_EXT,
	MENU_ANALYZE_CLEAR_CMTS,
	MENU_ANALYZE_CLEAR_ACMTS,
	MENU_ANALYZE_CLEAR_LBLS,
	MENU_ANALYZE_CLEAR_ALBLS,
	MENU_ANALYZE_TRACK_UNDEF,
	MENU_ANALYZE_DISASM_FUNCT,
	MENU_ANALYZE_DISASM_SELEC,
	MENU_REM_ANALYSIS_DISASM_SELEC,
	MENU_REM_ANALYSIS_DISASM_FUNCT,
	MENU_REM_ANALYSIS_DISASM,
	MENU_ABOUT
};

//functions
bool pluginInit(PLUG_INITSTRUCT* initStruct);
bool pluginStop();
void pluginSetup();
