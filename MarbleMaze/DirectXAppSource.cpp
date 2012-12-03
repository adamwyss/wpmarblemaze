//// THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF
//// ANY KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED TO
//// THE IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A
//// PARTICULAR PURPOSE.
////
//// Copyright (c) Microsoft Corporation. All rights reserved

#include "pch.h"

using namespace DirectX;

#include "DirectXAppSource.h"
#include "DirectXApp.h"

using namespace Windows::ApplicationModel::Core;

IFrameworkView^ DirectXAppSource::CreateView()
{
    return ref new DirectXApp();
}