//// THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF
//// ANY KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED TO
//// THE IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A
//// PARTICULAR PURPOSE.
////
//// Copyright (c) Microsoft Corporation. All rights reserved

#pragma once

#include <DirectXColors.h>
#include <queue>
#include <stack>

#include "Profiler.h"

/**
 * Reports profiler information for the current scope.
**/
class ProfileScope
{
public:
    ProfileScope(PCWSTR name, const DirectX::XMVECTORF32& color)
    {
        Profiler::Begin(name, color);
    }
    
    ~ProfileScope()
    {
        Profiler::End();
    }
};