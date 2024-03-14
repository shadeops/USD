//
// Copyright 2023 Pixar
//
// Licensed under the Apache License, Version 2.0 (the "Apache License")
// with the following modification; you may not use this file except in
// compliance with the Apache License and the following modification to it:
// Section 6. Trademarks. is deleted and replaced with:
//
// 6. Trademarks. This License does not grant permission to use the trade
//    names, trademarks, service marks, or product names of the Licensor
//    and its affiliates, except as required to comply with Section 4(c) of
//    the License and to reproduce the content of the NOTICE file.
//
// You may obtain a copy of the Apache License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the Apache License with the above modification is
// distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
// KIND, either express or implied. See the Apache License for the specific
// language governing permissions and limitations under the Apache License.
//
////////////////////////////////////////////////////////////////////////

/* ************************************************************************** */
/* **                                                                      ** */
/* ** This file is generated by a script.                                  ** */
/* **                                                                      ** */
/* ** Do not edit it directly (unless it is within a CUSTOM CODE section)! ** */
/* ** Edit hdSchemaDefs.py instead to make changes.                        ** */
/* **                                                                      ** */
/* ************************************************************************** */

#include "hdPrman/rileyClippingPlaneSchema.h"

#include "pxr/imaging/hd/retainedDataSource.h"

#include "pxr/base/trace/trace.h"

// --(BEGIN CUSTOM CODE: Includes)--
// --(END CUSTOM CODE: Includes)--

PXR_NAMESPACE_OPEN_SCOPE

TF_DEFINE_PUBLIC_TOKENS(HdPrmanRileyClippingPlaneSchemaTokens,
    HD_PRMAN_RILEY_CLIPPING_PLANE_SCHEMA_TOKENS);

// --(BEGIN CUSTOM CODE: Schema Methods)--
// --(END CUSTOM CODE: Schema Methods)--

HdMatrixDataSourceHandle
HdPrmanRileyClippingPlaneSchema::GetXform()
#if HD_API_VERSION >= 66
                                            const
#else
                                                 
#endif
{
    return _GetTypedDataSource<HdMatrixDataSource>(
        HdPrmanRileyClippingPlaneSchemaTokens->xform);
}

HdPrmanRileyParamListSchema
HdPrmanRileyClippingPlaneSchema::GetParams()
#if HD_API_VERSION >= 66
                                            const
#else
                                                 
#endif
{
    return HdPrmanRileyParamListSchema(_GetTypedDataSource<HdContainerDataSource>(
        HdPrmanRileyClippingPlaneSchemaTokens->params));
}

/*static*/
HdContainerDataSourceHandle
HdPrmanRileyClippingPlaneSchema::BuildRetained(
        const HdMatrixDataSourceHandle &xform,
        const HdContainerDataSourceHandle &params
)
{
    TfToken _names[2];
    HdDataSourceBaseHandle _values[2];

    size_t _count = 0;

    if (xform) {
        _names[_count] = HdPrmanRileyClippingPlaneSchemaTokens->xform;
        _values[_count++] = xform;
    }

    if (params) {
        _names[_count] = HdPrmanRileyClippingPlaneSchemaTokens->params;
        _values[_count++] = params;
    }
    return HdRetainedContainerDataSource::New(_count, _names, _values);
}

HdPrmanRileyClippingPlaneSchema::Builder &
HdPrmanRileyClippingPlaneSchema::Builder::SetXform(
    const HdMatrixDataSourceHandle &xform)
{
    _xform = xform;
    return *this;
}

HdPrmanRileyClippingPlaneSchema::Builder &
HdPrmanRileyClippingPlaneSchema::Builder::SetParams(
    const HdContainerDataSourceHandle &params)
{
    _params = params;
    return *this;
}

HdContainerDataSourceHandle
HdPrmanRileyClippingPlaneSchema::Builder::Build()
{
    return HdPrmanRileyClippingPlaneSchema::BuildRetained(
        _xform,
        _params
    );
}

/*static*/
HdPrmanRileyClippingPlaneSchema
HdPrmanRileyClippingPlaneSchema::GetFromParent(
        const HdContainerDataSourceHandle &fromParentContainer)
{
    return HdPrmanRileyClippingPlaneSchema(
        fromParentContainer
        ? HdContainerDataSource::Cast(fromParentContainer->Get(
                HdPrmanRileyClippingPlaneSchemaTokens->rileyClippingPlane))
        : nullptr);
}

/*static*/
const TfToken &
HdPrmanRileyClippingPlaneSchema::GetSchemaToken()
{
    return HdPrmanRileyClippingPlaneSchemaTokens->rileyClippingPlane;
}

/*static*/
const HdDataSourceLocator &
HdPrmanRileyClippingPlaneSchema::GetDefaultLocator()
{
    static const HdDataSourceLocator locator(GetSchemaToken());
    return locator;
}

/* static */
const HdDataSourceLocator &
HdPrmanRileyClippingPlaneSchema::GetXformLocator()
{
    static const HdDataSourceLocator locator =
        GetDefaultLocator().Append(
            HdPrmanRileyClippingPlaneSchemaTokens->xform);
    return locator;
}

/* static */
const HdDataSourceLocator &
HdPrmanRileyClippingPlaneSchema::GetParamsLocator()
{
    static const HdDataSourceLocator locator =
        GetDefaultLocator().Append(
            HdPrmanRileyClippingPlaneSchemaTokens->params);
    return locator;
} 

PXR_NAMESPACE_CLOSE_SCOPE