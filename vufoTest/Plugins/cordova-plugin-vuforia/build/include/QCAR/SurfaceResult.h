/*===============================================================================
Copyright (c) 2014 Qualcomm Connected Experiences, Inc. All Rights Reserved.

Vuforia is a trademark of QUALCOMM Incorporated, registered in the United States 
and other countries. Trademarks of QUALCOMM Incorporated are used with permission.

@file 
    Surface.h

@brief
    Header file for Surface class.
===============================================================================*/
#ifndef _QCAR_SURFACERESULT_H_
#define _QCAR_SURFACERESULT_H_

// Include files
#include <QCAR/TrackableResult.h>
#include <QCAR/Surface.h>

namespace QCAR
{

/// Result for a Surface generated by the SmartTerrainTracker.
class QCAR_API SurfaceResult : public TrackableResult
{
public:

    /// Returns the TrackableResult class' type
    static Type getClassType();

    /// Returns the corresponding Trackable that this result represents
    virtual const Surface& getTrackable() const = 0;

};

} // namespace QCAR

#endif //_QCAR_SURFACERESULT_H_
