/*
 * exec.h
 * 
 * This file is a part of NSIS.
 * 
 * Copyright (C) 1999-2021 Nullsoft and Contributors
 * 
 * Licensed under the zlib/libpng license (the "License");
 * you may not use this file except in compliance with the License.
 * 
 * Licence details can be found in the file COPYING.
 * 
 * This software is provided 'as-is', without any express or implied
 * warranty.
 *
 * Reviewed for Unicode support by Jim Park -- 08/22/2007
 */

#ifndef _EXEC_H_
#define _EXEC_H_

#include "api.h"

int NSISCALL ExecuteCodeSegment(int pos, HWND hwndProgress); // returns 0 on success
int NSISCALL ExecuteCallbackFunction(int num); // returns 0 on success

// *** BR_START ***
// Added by B&R Industrial Automation GmbH
void EnableAsyncProgressUpdate();
void DisableAsyncProgressUpdate();
void UpdateProgressInMainPage(int progress);
void UpdateInfoTextInMainPage();
void UpdateInfoTextForSubProgress();
void SetSubProgress();
void EnableProgressBarMarqueeMode();
void DisableProgressBarMarqueeMode();
BOOL GetProgressBarInfo(HWND* hWnd, LONG* style);
// *** BR_END ***

#endif//_EXEC_H_
