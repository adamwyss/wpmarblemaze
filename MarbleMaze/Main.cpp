//// THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF
//// ANY KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED TO
//// THE IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A
//// PARTICULAR PURPOSE.
////
//// Copyright (c) Microsoft Corporation. All rights reserved

#include "pch.h"

using namespace DirectX;

#include "DirectXAppSource.h"

using namespace Platform;
using namespace Windows::ApplicationModel::Core;

[Platform::MTAThread]
int main(Array<String^>^)
{
    auto directXAppSource = ref new DirectXAppSource();
    CoreApplication::Run(directXAppSource);
    return 0;
}