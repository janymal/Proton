#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v0.9.12/openvr.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVRSystem_IVRSystem_009.h"
#ifdef __cplusplus
extern "C" {
#endif

struct cppIVRSystem_IVRSystem_009
{
#ifdef __cplusplus
    virtual void GetRecommendedRenderTargetSize( uint32_t *, uint32_t * ) = 0;
    virtual HmdMatrix44_t GetProjectionMatrix( uint32_t, float, float, uint32_t ) = 0;
    virtual void GetProjectionRaw( uint32_t, float *, float *, float *, float * ) = 0;
    virtual DistortionCoordinates_t ComputeDistortion( uint32_t, float, float ) = 0;
    virtual HmdMatrix34_t GetEyeToHeadTransform( uint32_t ) = 0;
    virtual bool GetTimeSinceLastVsync( float *, uint64_t * ) = 0;
    virtual int32_t GetD3D9AdapterIndex(  ) = 0;
    virtual void GetDXGIOutputInfo( int32_t * ) = 0;
    virtual bool IsDisplayOnDesktop(  ) = 0;
    virtual bool SetDisplayVisibility( bool ) = 0;
    virtual void GetDeviceToAbsoluteTrackingPose( uint32_t, float, TrackedDevicePose_t *, uint32_t ) = 0;
    virtual void ResetSeatedZeroPose(  ) = 0;
    virtual HmdMatrix34_t GetSeatedZeroPoseToStandingAbsoluteTrackingPose(  ) = 0;
    virtual HmdMatrix34_t GetRawZeroPoseToStandingAbsoluteTrackingPose(  ) = 0;
    virtual uint32_t GetSortedTrackedDeviceIndicesOfClass( uint32_t, uint32_t *, uint32_t, uint32_t ) = 0;
    virtual uint32_t GetTrackedDeviceActivityLevel( uint32_t ) = 0;
    virtual void ApplyTransform( TrackedDevicePose_t *, const TrackedDevicePose_t *, const HmdMatrix34_t * ) = 0;
    virtual uint32_t GetTrackedDeviceClass( uint32_t ) = 0;
    virtual bool IsTrackedDeviceConnected( uint32_t ) = 0;
    virtual bool GetBoolTrackedDeviceProperty( uint32_t, uint32_t, uint32_t * ) = 0;
    virtual float GetFloatTrackedDeviceProperty( uint32_t, uint32_t, uint32_t * ) = 0;
    virtual int32_t GetInt32TrackedDeviceProperty( uint32_t, uint32_t, uint32_t * ) = 0;
    virtual uint64_t GetUint64TrackedDeviceProperty( uint32_t, uint32_t, uint32_t * ) = 0;
    virtual HmdMatrix34_t GetMatrix34TrackedDeviceProperty( uint32_t, uint32_t, uint32_t * ) = 0;
    virtual uint32_t GetStringTrackedDeviceProperty( uint32_t, uint32_t, char *, uint32_t, uint32_t * ) = 0;
    virtual const char * GetPropErrorNameFromEnum( uint32_t ) = 0;
    virtual bool PollNextEvent( VREvent_t * ) = 0;
    virtual bool PollNextEventWithPose( uint32_t, VREvent_t *, TrackedDevicePose_t * ) = 0;
    virtual const char * GetEventTypeNameFromEnum( uint32_t ) = 0;
    virtual HiddenAreaMesh_t GetHiddenAreaMesh( uint32_t ) = 0;
    virtual bool GetControllerState( uint32_t, VRControllerState_t * ) = 0;
    virtual bool GetControllerStateWithPose( uint32_t, uint32_t, VRControllerState_t *, TrackedDevicePose_t * ) = 0;
    virtual void TriggerHapticPulse( uint32_t, uint32_t, uint16_t ) = 0;
    virtual const char * GetButtonIdNameFromEnum( uint32_t ) = 0;
    virtual const char * GetControllerAxisTypeNameFromEnum( uint32_t ) = 0;
    virtual bool CaptureInputFocus(  ) = 0;
    virtual void ReleaseInputFocus(  ) = 0;
    virtual bool IsInputFocusCapturedByAnotherProcess(  ) = 0;
    virtual uint32_t DriverDebugRequest( uint32_t, const char *, char *, uint32_t ) = 0;
    virtual uint32_t PerformFirmwareUpdate( uint32_t ) = 0;
    virtual void AcknowledgeQuit_Exiting(  ) = 0;
    virtual void AcknowledgeQuit_UserPrompt(  ) = 0;
#endif /* __cplusplus */
};

void cppIVRSystem_IVRSystem_009_GetRecommendedRenderTargetSize( struct cppIVRSystem_IVRSystem_009_GetRecommendedRenderTargetSize_params *params )
{
    struct cppIVRSystem_IVRSystem_009 *iface = (struct cppIVRSystem_IVRSystem_009 *)params->linux_side;
    iface->GetRecommendedRenderTargetSize( params->pnWidth, params->pnHeight );
}

void cppIVRSystem_IVRSystem_009_GetProjectionMatrix( struct cppIVRSystem_IVRSystem_009_GetProjectionMatrix_params *params )
{
    struct cppIVRSystem_IVRSystem_009 *iface = (struct cppIVRSystem_IVRSystem_009 *)params->linux_side;
    *params->_ret = iface->GetProjectionMatrix( params->eEye, params->fNearZ, params->fFarZ, params->eProjType );
}

void cppIVRSystem_IVRSystem_009_GetProjectionRaw( struct cppIVRSystem_IVRSystem_009_GetProjectionRaw_params *params )
{
    struct cppIVRSystem_IVRSystem_009 *iface = (struct cppIVRSystem_IVRSystem_009 *)params->linux_side;
    iface->GetProjectionRaw( params->eEye, params->pfLeft, params->pfRight, params->pfTop, params->pfBottom );
}

void cppIVRSystem_IVRSystem_009_ComputeDistortion( struct cppIVRSystem_IVRSystem_009_ComputeDistortion_params *params )
{
    struct cppIVRSystem_IVRSystem_009 *iface = (struct cppIVRSystem_IVRSystem_009 *)params->linux_side;
    *params->_ret = iface->ComputeDistortion( params->eEye, params->fU, params->fV );
}

void cppIVRSystem_IVRSystem_009_GetEyeToHeadTransform( struct cppIVRSystem_IVRSystem_009_GetEyeToHeadTransform_params *params )
{
    struct cppIVRSystem_IVRSystem_009 *iface = (struct cppIVRSystem_IVRSystem_009 *)params->linux_side;
    *params->_ret = iface->GetEyeToHeadTransform( params->eEye );
}

void cppIVRSystem_IVRSystem_009_GetTimeSinceLastVsync( struct cppIVRSystem_IVRSystem_009_GetTimeSinceLastVsync_params *params )
{
    struct cppIVRSystem_IVRSystem_009 *iface = (struct cppIVRSystem_IVRSystem_009 *)params->linux_side;
    params->_ret = iface->GetTimeSinceLastVsync( params->pfSecondsSinceLastVsync, params->pulFrameCounter );
}

void cppIVRSystem_IVRSystem_009_GetD3D9AdapterIndex( struct cppIVRSystem_IVRSystem_009_GetD3D9AdapterIndex_params *params )
{
    struct cppIVRSystem_IVRSystem_009 *iface = (struct cppIVRSystem_IVRSystem_009 *)params->linux_side;
    params->_ret = iface->GetD3D9AdapterIndex(  );
}

void cppIVRSystem_IVRSystem_009_GetDXGIOutputInfo( struct cppIVRSystem_IVRSystem_009_GetDXGIOutputInfo_params *params )
{
    struct cppIVRSystem_IVRSystem_009 *iface = (struct cppIVRSystem_IVRSystem_009 *)params->linux_side;
    iface->GetDXGIOutputInfo( params->pnAdapterIndex );
}

void cppIVRSystem_IVRSystem_009_IsDisplayOnDesktop( struct cppIVRSystem_IVRSystem_009_IsDisplayOnDesktop_params *params )
{
    struct cppIVRSystem_IVRSystem_009 *iface = (struct cppIVRSystem_IVRSystem_009 *)params->linux_side;
    params->_ret = iface->IsDisplayOnDesktop(  );
}

void cppIVRSystem_IVRSystem_009_SetDisplayVisibility( struct cppIVRSystem_IVRSystem_009_SetDisplayVisibility_params *params )
{
    struct cppIVRSystem_IVRSystem_009 *iface = (struct cppIVRSystem_IVRSystem_009 *)params->linux_side;
    params->_ret = iface->SetDisplayVisibility( params->bIsVisibleOnDesktop );
}

void cppIVRSystem_IVRSystem_009_GetDeviceToAbsoluteTrackingPose( struct cppIVRSystem_IVRSystem_009_GetDeviceToAbsoluteTrackingPose_params *params )
{
    struct cppIVRSystem_IVRSystem_009 *iface = (struct cppIVRSystem_IVRSystem_009 *)params->linux_side;
    iface->GetDeviceToAbsoluteTrackingPose( params->eOrigin, params->fPredictedSecondsToPhotonsFromNow, params->pTrackedDevicePoseArray, params->unTrackedDevicePoseArrayCount );
}

void cppIVRSystem_IVRSystem_009_ResetSeatedZeroPose( struct cppIVRSystem_IVRSystem_009_ResetSeatedZeroPose_params *params )
{
    struct cppIVRSystem_IVRSystem_009 *iface = (struct cppIVRSystem_IVRSystem_009 *)params->linux_side;
    iface->ResetSeatedZeroPose(  );
}

void cppIVRSystem_IVRSystem_009_GetSeatedZeroPoseToStandingAbsoluteTrackingPose( struct cppIVRSystem_IVRSystem_009_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_params *params )
{
    struct cppIVRSystem_IVRSystem_009 *iface = (struct cppIVRSystem_IVRSystem_009 *)params->linux_side;
    *params->_ret = iface->GetSeatedZeroPoseToStandingAbsoluteTrackingPose(  );
}

void cppIVRSystem_IVRSystem_009_GetRawZeroPoseToStandingAbsoluteTrackingPose( struct cppIVRSystem_IVRSystem_009_GetRawZeroPoseToStandingAbsoluteTrackingPose_params *params )
{
    struct cppIVRSystem_IVRSystem_009 *iface = (struct cppIVRSystem_IVRSystem_009 *)params->linux_side;
    *params->_ret = iface->GetRawZeroPoseToStandingAbsoluteTrackingPose(  );
}

void cppIVRSystem_IVRSystem_009_GetSortedTrackedDeviceIndicesOfClass( struct cppIVRSystem_IVRSystem_009_GetSortedTrackedDeviceIndicesOfClass_params *params )
{
    struct cppIVRSystem_IVRSystem_009 *iface = (struct cppIVRSystem_IVRSystem_009 *)params->linux_side;
    params->_ret = iface->GetSortedTrackedDeviceIndicesOfClass( params->eTrackedDeviceClass, params->punTrackedDeviceIndexArray, params->unTrackedDeviceIndexArrayCount, params->unRelativeToTrackedDeviceIndex );
}

void cppIVRSystem_IVRSystem_009_GetTrackedDeviceActivityLevel( struct cppIVRSystem_IVRSystem_009_GetTrackedDeviceActivityLevel_params *params )
{
    struct cppIVRSystem_IVRSystem_009 *iface = (struct cppIVRSystem_IVRSystem_009 *)params->linux_side;
    params->_ret = iface->GetTrackedDeviceActivityLevel( params->unDeviceId );
}

void cppIVRSystem_IVRSystem_009_ApplyTransform( struct cppIVRSystem_IVRSystem_009_ApplyTransform_params *params )
{
    struct cppIVRSystem_IVRSystem_009 *iface = (struct cppIVRSystem_IVRSystem_009 *)params->linux_side;
    iface->ApplyTransform( params->pOutputPose, params->pTrackedDevicePose, params->pTransform );
}

void cppIVRSystem_IVRSystem_009_GetTrackedDeviceClass( struct cppIVRSystem_IVRSystem_009_GetTrackedDeviceClass_params *params )
{
    struct cppIVRSystem_IVRSystem_009 *iface = (struct cppIVRSystem_IVRSystem_009 *)params->linux_side;
    params->_ret = iface->GetTrackedDeviceClass( params->unDeviceIndex );
}

void cppIVRSystem_IVRSystem_009_IsTrackedDeviceConnected( struct cppIVRSystem_IVRSystem_009_IsTrackedDeviceConnected_params *params )
{
    struct cppIVRSystem_IVRSystem_009 *iface = (struct cppIVRSystem_IVRSystem_009 *)params->linux_side;
    params->_ret = iface->IsTrackedDeviceConnected( params->unDeviceIndex );
}

void cppIVRSystem_IVRSystem_009_GetBoolTrackedDeviceProperty( struct cppIVRSystem_IVRSystem_009_GetBoolTrackedDeviceProperty_params *params )
{
    struct cppIVRSystem_IVRSystem_009 *iface = (struct cppIVRSystem_IVRSystem_009 *)params->linux_side;
    params->_ret = iface->GetBoolTrackedDeviceProperty( params->unDeviceIndex, params->prop, params->pError );
}

void cppIVRSystem_IVRSystem_009_GetFloatTrackedDeviceProperty( struct cppIVRSystem_IVRSystem_009_GetFloatTrackedDeviceProperty_params *params )
{
    struct cppIVRSystem_IVRSystem_009 *iface = (struct cppIVRSystem_IVRSystem_009 *)params->linux_side;
    params->_ret = iface->GetFloatTrackedDeviceProperty( params->unDeviceIndex, params->prop, params->pError );
}

void cppIVRSystem_IVRSystem_009_GetInt32TrackedDeviceProperty( struct cppIVRSystem_IVRSystem_009_GetInt32TrackedDeviceProperty_params *params )
{
    struct cppIVRSystem_IVRSystem_009 *iface = (struct cppIVRSystem_IVRSystem_009 *)params->linux_side;
    params->_ret = iface->GetInt32TrackedDeviceProperty( params->unDeviceIndex, params->prop, params->pError );
}

void cppIVRSystem_IVRSystem_009_GetUint64TrackedDeviceProperty( struct cppIVRSystem_IVRSystem_009_GetUint64TrackedDeviceProperty_params *params )
{
    struct cppIVRSystem_IVRSystem_009 *iface = (struct cppIVRSystem_IVRSystem_009 *)params->linux_side;
    params->_ret = iface->GetUint64TrackedDeviceProperty( params->unDeviceIndex, params->prop, params->pError );
}

void cppIVRSystem_IVRSystem_009_GetMatrix34TrackedDeviceProperty( struct cppIVRSystem_IVRSystem_009_GetMatrix34TrackedDeviceProperty_params *params )
{
    struct cppIVRSystem_IVRSystem_009 *iface = (struct cppIVRSystem_IVRSystem_009 *)params->linux_side;
    *params->_ret = iface->GetMatrix34TrackedDeviceProperty( params->unDeviceIndex, params->prop, params->pError );
}

void cppIVRSystem_IVRSystem_009_GetStringTrackedDeviceProperty( struct cppIVRSystem_IVRSystem_009_GetStringTrackedDeviceProperty_params *params )
{
    struct cppIVRSystem_IVRSystem_009 *iface = (struct cppIVRSystem_IVRSystem_009 *)params->linux_side;
    params->_ret = iface->GetStringTrackedDeviceProperty( params->unDeviceIndex, params->prop, params->pchValue, params->unBufferSize, params->pError );
}

void cppIVRSystem_IVRSystem_009_GetPropErrorNameFromEnum( struct cppIVRSystem_IVRSystem_009_GetPropErrorNameFromEnum_params *params )
{
    struct cppIVRSystem_IVRSystem_009 *iface = (struct cppIVRSystem_IVRSystem_009 *)params->linux_side;
    params->_ret = iface->GetPropErrorNameFromEnum( params->error );
}

void cppIVRSystem_IVRSystem_009_PollNextEvent( struct cppIVRSystem_IVRSystem_009_PollNextEvent_params *params )
{
    struct cppIVRSystem_IVRSystem_009 *iface = (struct cppIVRSystem_IVRSystem_009 *)params->linux_side;
    VREvent_t lin_pEvent;
    if (params->pEvent)
        struct_VREvent_t_0912_win_to_lin( params->pEvent, &lin_pEvent );
    params->_ret = iface->PollNextEvent( params->pEvent ? &lin_pEvent : nullptr );
    if (params->pEvent)
        struct_VREvent_t_0912_lin_to_win( &lin_pEvent, params->pEvent, -1 );
}

void cppIVRSystem_IVRSystem_009_PollNextEventWithPose( struct cppIVRSystem_IVRSystem_009_PollNextEventWithPose_params *params )
{
    struct cppIVRSystem_IVRSystem_009 *iface = (struct cppIVRSystem_IVRSystem_009 *)params->linux_side;
    VREvent_t lin_pEvent;
    if (params->pEvent)
        struct_VREvent_t_0912_win_to_lin( params->pEvent, &lin_pEvent );
    params->_ret = iface->PollNextEventWithPose( params->eOrigin, params->pEvent ? &lin_pEvent : nullptr, params->pTrackedDevicePose );
    if (params->pEvent)
        struct_VREvent_t_0912_lin_to_win( &lin_pEvent, params->pEvent, -1 );
}

void cppIVRSystem_IVRSystem_009_GetEventTypeNameFromEnum( struct cppIVRSystem_IVRSystem_009_GetEventTypeNameFromEnum_params *params )
{
    struct cppIVRSystem_IVRSystem_009 *iface = (struct cppIVRSystem_IVRSystem_009 *)params->linux_side;
    params->_ret = iface->GetEventTypeNameFromEnum( params->eType );
}

void cppIVRSystem_IVRSystem_009_GetHiddenAreaMesh( struct cppIVRSystem_IVRSystem_009_GetHiddenAreaMesh_params *params )
{
    struct cppIVRSystem_IVRSystem_009 *iface = (struct cppIVRSystem_IVRSystem_009 *)params->linux_side;
    *params->_ret = iface->GetHiddenAreaMesh( params->eEye );
}

void cppIVRSystem_IVRSystem_009_GetControllerState( struct cppIVRSystem_IVRSystem_009_GetControllerState_params *params )
{
    struct cppIVRSystem_IVRSystem_009 *iface = (struct cppIVRSystem_IVRSystem_009 *)params->linux_side;
    VRControllerState_t lin_pControllerState;
    if (params->pControllerState)
        struct_VRControllerState001_t_0912_win_to_lin( params->pControllerState, &lin_pControllerState );
    params->_ret = iface->GetControllerState( params->unControllerDeviceIndex, params->pControllerState ? &lin_pControllerState : nullptr );
    if (params->pControllerState)
        struct_VRControllerState001_t_0912_lin_to_win( &lin_pControllerState, params->pControllerState, -1 );
}

void cppIVRSystem_IVRSystem_009_GetControllerStateWithPose( struct cppIVRSystem_IVRSystem_009_GetControllerStateWithPose_params *params )
{
    struct cppIVRSystem_IVRSystem_009 *iface = (struct cppIVRSystem_IVRSystem_009 *)params->linux_side;
    VRControllerState_t lin_pControllerState;
    if (params->pControllerState)
        struct_VRControllerState001_t_0912_win_to_lin( params->pControllerState, &lin_pControllerState );
    params->_ret = iface->GetControllerStateWithPose( params->eOrigin, params->unControllerDeviceIndex, params->pControllerState ? &lin_pControllerState : nullptr, params->pTrackedDevicePose );
    if (params->pControllerState)
        struct_VRControllerState001_t_0912_lin_to_win( &lin_pControllerState, params->pControllerState, -1 );
}

void cppIVRSystem_IVRSystem_009_TriggerHapticPulse( struct cppIVRSystem_IVRSystem_009_TriggerHapticPulse_params *params )
{
    struct cppIVRSystem_IVRSystem_009 *iface = (struct cppIVRSystem_IVRSystem_009 *)params->linux_side;
    iface->TriggerHapticPulse( params->unControllerDeviceIndex, params->unAxisId, params->usDurationMicroSec );
}

void cppIVRSystem_IVRSystem_009_GetButtonIdNameFromEnum( struct cppIVRSystem_IVRSystem_009_GetButtonIdNameFromEnum_params *params )
{
    struct cppIVRSystem_IVRSystem_009 *iface = (struct cppIVRSystem_IVRSystem_009 *)params->linux_side;
    params->_ret = iface->GetButtonIdNameFromEnum( params->eButtonId );
}

void cppIVRSystem_IVRSystem_009_GetControllerAxisTypeNameFromEnum( struct cppIVRSystem_IVRSystem_009_GetControllerAxisTypeNameFromEnum_params *params )
{
    struct cppIVRSystem_IVRSystem_009 *iface = (struct cppIVRSystem_IVRSystem_009 *)params->linux_side;
    params->_ret = iface->GetControllerAxisTypeNameFromEnum( params->eAxisType );
}

void cppIVRSystem_IVRSystem_009_CaptureInputFocus( struct cppIVRSystem_IVRSystem_009_CaptureInputFocus_params *params )
{
    struct cppIVRSystem_IVRSystem_009 *iface = (struct cppIVRSystem_IVRSystem_009 *)params->linux_side;
    params->_ret = iface->CaptureInputFocus(  );
}

void cppIVRSystem_IVRSystem_009_ReleaseInputFocus( struct cppIVRSystem_IVRSystem_009_ReleaseInputFocus_params *params )
{
    struct cppIVRSystem_IVRSystem_009 *iface = (struct cppIVRSystem_IVRSystem_009 *)params->linux_side;
    iface->ReleaseInputFocus(  );
}

void cppIVRSystem_IVRSystem_009_IsInputFocusCapturedByAnotherProcess( struct cppIVRSystem_IVRSystem_009_IsInputFocusCapturedByAnotherProcess_params *params )
{
    struct cppIVRSystem_IVRSystem_009 *iface = (struct cppIVRSystem_IVRSystem_009 *)params->linux_side;
    params->_ret = iface->IsInputFocusCapturedByAnotherProcess(  );
}

void cppIVRSystem_IVRSystem_009_DriverDebugRequest( struct cppIVRSystem_IVRSystem_009_DriverDebugRequest_params *params )
{
    struct cppIVRSystem_IVRSystem_009 *iface = (struct cppIVRSystem_IVRSystem_009 *)params->linux_side;
    params->_ret = iface->DriverDebugRequest( params->unDeviceIndex, params->pchRequest, params->pchResponseBuffer, params->unResponseBufferSize );
}

void cppIVRSystem_IVRSystem_009_PerformFirmwareUpdate( struct cppIVRSystem_IVRSystem_009_PerformFirmwareUpdate_params *params )
{
    struct cppIVRSystem_IVRSystem_009 *iface = (struct cppIVRSystem_IVRSystem_009 *)params->linux_side;
    params->_ret = iface->PerformFirmwareUpdate( params->unDeviceIndex );
}

void cppIVRSystem_IVRSystem_009_AcknowledgeQuit_Exiting( struct cppIVRSystem_IVRSystem_009_AcknowledgeQuit_Exiting_params *params )
{
    struct cppIVRSystem_IVRSystem_009 *iface = (struct cppIVRSystem_IVRSystem_009 *)params->linux_side;
    iface->AcknowledgeQuit_Exiting(  );
}

void cppIVRSystem_IVRSystem_009_AcknowledgeQuit_UserPrompt( struct cppIVRSystem_IVRSystem_009_AcknowledgeQuit_UserPrompt_params *params )
{
    struct cppIVRSystem_IVRSystem_009 *iface = (struct cppIVRSystem_IVRSystem_009 *)params->linux_side;
    iface->AcknowledgeQuit_UserPrompt(  );
}

#ifdef __cplusplus
}
#endif
