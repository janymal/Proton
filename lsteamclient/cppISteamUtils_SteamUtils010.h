struct cppISteamUtils_SteamUtils010;
struct cppISteamUtils_SteamUtils010_GetSecondsSinceAppActive_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppISteamUtils_SteamUtils010_GetSecondsSinceAppActive( struct cppISteamUtils_SteamUtils010_GetSecondsSinceAppActive_params *params );

struct cppISteamUtils_SteamUtils010_GetSecondsSinceComputerActive_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppISteamUtils_SteamUtils010_GetSecondsSinceComputerActive( struct cppISteamUtils_SteamUtils010_GetSecondsSinceComputerActive_params *params );

struct cppISteamUtils_SteamUtils010_GetConnectedUniverse_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppISteamUtils_SteamUtils010_GetConnectedUniverse( struct cppISteamUtils_SteamUtils010_GetConnectedUniverse_params *params );

struct cppISteamUtils_SteamUtils010_GetServerRealTime_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppISteamUtils_SteamUtils010_GetServerRealTime( struct cppISteamUtils_SteamUtils010_GetServerRealTime_params *params );

struct cppISteamUtils_SteamUtils010_GetIPCountry_params
{
    void *linux_side;
    const char *_ret;
};
extern void cppISteamUtils_SteamUtils010_GetIPCountry( struct cppISteamUtils_SteamUtils010_GetIPCountry_params *params );

struct cppISteamUtils_SteamUtils010_GetImageSize_params
{
    void *linux_side;
    bool _ret;
    int32_t iImage;
    uint32_t *pnWidth;
    uint32_t *pnHeight;
};
extern void cppISteamUtils_SteamUtils010_GetImageSize( struct cppISteamUtils_SteamUtils010_GetImageSize_params *params );

struct cppISteamUtils_SteamUtils010_GetImageRGBA_params
{
    void *linux_side;
    bool _ret;
    int32_t iImage;
    uint8_t *pubDest;
    int32_t nDestBufferSize;
};
extern void cppISteamUtils_SteamUtils010_GetImageRGBA( struct cppISteamUtils_SteamUtils010_GetImageRGBA_params *params );

struct cppISteamUtils_SteamUtils010_GetCSERIPPort_params
{
    void *linux_side;
    bool _ret;
    uint32_t *unIP;
    uint16_t *usPort;
};
extern void cppISteamUtils_SteamUtils010_GetCSERIPPort( struct cppISteamUtils_SteamUtils010_GetCSERIPPort_params *params );

struct cppISteamUtils_SteamUtils010_GetCurrentBatteryPower_params
{
    void *linux_side;
    uint8_t _ret;
};
extern void cppISteamUtils_SteamUtils010_GetCurrentBatteryPower( struct cppISteamUtils_SteamUtils010_GetCurrentBatteryPower_params *params );

struct cppISteamUtils_SteamUtils010_GetAppID_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppISteamUtils_SteamUtils010_GetAppID( struct cppISteamUtils_SteamUtils010_GetAppID_params *params );

struct cppISteamUtils_SteamUtils010_SetOverlayNotificationPosition_params
{
    void *linux_side;
    uint32_t eNotificationPosition;
};
extern void cppISteamUtils_SteamUtils010_SetOverlayNotificationPosition( struct cppISteamUtils_SteamUtils010_SetOverlayNotificationPosition_params *params );

struct cppISteamUtils_SteamUtils010_IsAPICallCompleted_params
{
    void *linux_side;
    bool _ret;
    uint64_t hSteamAPICall;
    bool *pbFailed;
};
extern void cppISteamUtils_SteamUtils010_IsAPICallCompleted( struct cppISteamUtils_SteamUtils010_IsAPICallCompleted_params *params );

struct cppISteamUtils_SteamUtils010_GetAPICallFailureReason_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t hSteamAPICall;
};
extern void cppISteamUtils_SteamUtils010_GetAPICallFailureReason( struct cppISteamUtils_SteamUtils010_GetAPICallFailureReason_params *params );

struct cppISteamUtils_SteamUtils010_GetAPICallResult_params
{
    void *linux_side;
    bool _ret;
    uint64_t hSteamAPICall;
    void *pCallback;
    int32_t cubCallback;
    int32_t iCallbackExpected;
    bool *pbFailed;
};
extern void cppISteamUtils_SteamUtils010_GetAPICallResult( struct cppISteamUtils_SteamUtils010_GetAPICallResult_params *params );

struct cppISteamUtils_SteamUtils010_RunFrame_params
{
    void *linux_side;
};
extern void cppISteamUtils_SteamUtils010_RunFrame( struct cppISteamUtils_SteamUtils010_RunFrame_params *params );

struct cppISteamUtils_SteamUtils010_GetIPCCallCount_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppISteamUtils_SteamUtils010_GetIPCCallCount( struct cppISteamUtils_SteamUtils010_GetIPCCallCount_params *params );

struct cppISteamUtils_SteamUtils010_SetWarningMessageHook_params
{
    void *linux_side;
    void (*__cdecl pFunction)(int32_t, const char *);
};
extern void cppISteamUtils_SteamUtils010_SetWarningMessageHook( struct cppISteamUtils_SteamUtils010_SetWarningMessageHook_params *params );

struct cppISteamUtils_SteamUtils010_IsOverlayEnabled_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamUtils_SteamUtils010_IsOverlayEnabled( struct cppISteamUtils_SteamUtils010_IsOverlayEnabled_params *params );

struct cppISteamUtils_SteamUtils010_BOverlayNeedsPresent_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamUtils_SteamUtils010_BOverlayNeedsPresent( struct cppISteamUtils_SteamUtils010_BOverlayNeedsPresent_params *params );

struct cppISteamUtils_SteamUtils010_CheckFileSignature_params
{
    void *linux_side;
    uint64_t _ret;
    const char *szFileName;
};
extern void cppISteamUtils_SteamUtils010_CheckFileSignature( struct cppISteamUtils_SteamUtils010_CheckFileSignature_params *params );

struct cppISteamUtils_SteamUtils010_ShowGamepadTextInput_params
{
    void *linux_side;
    bool _ret;
    uint32_t eInputMode;
    uint32_t eLineInputMode;
    const char *pchDescription;
    uint32_t unCharMax;
    const char *pchExistingText;
};
extern void cppISteamUtils_SteamUtils010_ShowGamepadTextInput( struct cppISteamUtils_SteamUtils010_ShowGamepadTextInput_params *params );

struct cppISteamUtils_SteamUtils010_GetEnteredGamepadTextLength_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppISteamUtils_SteamUtils010_GetEnteredGamepadTextLength( struct cppISteamUtils_SteamUtils010_GetEnteredGamepadTextLength_params *params );

struct cppISteamUtils_SteamUtils010_GetEnteredGamepadTextInput_params
{
    void *linux_side;
    bool _ret;
    char *pchText;
    uint32_t cchText;
};
extern void cppISteamUtils_SteamUtils010_GetEnteredGamepadTextInput( struct cppISteamUtils_SteamUtils010_GetEnteredGamepadTextInput_params *params );

struct cppISteamUtils_SteamUtils010_GetSteamUILanguage_params
{
    void *linux_side;
    const char *_ret;
};
extern void cppISteamUtils_SteamUtils010_GetSteamUILanguage( struct cppISteamUtils_SteamUtils010_GetSteamUILanguage_params *params );

struct cppISteamUtils_SteamUtils010_IsSteamRunningInVR_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamUtils_SteamUtils010_IsSteamRunningInVR( struct cppISteamUtils_SteamUtils010_IsSteamRunningInVR_params *params );

struct cppISteamUtils_SteamUtils010_SetOverlayNotificationInset_params
{
    void *linux_side;
    int32_t nHorizontalInset;
    int32_t nVerticalInset;
};
extern void cppISteamUtils_SteamUtils010_SetOverlayNotificationInset( struct cppISteamUtils_SteamUtils010_SetOverlayNotificationInset_params *params );

struct cppISteamUtils_SteamUtils010_IsSteamInBigPictureMode_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamUtils_SteamUtils010_IsSteamInBigPictureMode( struct cppISteamUtils_SteamUtils010_IsSteamInBigPictureMode_params *params );

struct cppISteamUtils_SteamUtils010_StartVRDashboard_params
{
    void *linux_side;
};
extern void cppISteamUtils_SteamUtils010_StartVRDashboard( struct cppISteamUtils_SteamUtils010_StartVRDashboard_params *params );

struct cppISteamUtils_SteamUtils010_IsVRHeadsetStreamingEnabled_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamUtils_SteamUtils010_IsVRHeadsetStreamingEnabled( struct cppISteamUtils_SteamUtils010_IsVRHeadsetStreamingEnabled_params *params );

struct cppISteamUtils_SteamUtils010_SetVRHeadsetStreamingEnabled_params
{
    void *linux_side;
    bool bEnabled;
};
extern void cppISteamUtils_SteamUtils010_SetVRHeadsetStreamingEnabled( struct cppISteamUtils_SteamUtils010_SetVRHeadsetStreamingEnabled_params *params );

struct cppISteamUtils_SteamUtils010_IsSteamChinaLauncher_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamUtils_SteamUtils010_IsSteamChinaLauncher( struct cppISteamUtils_SteamUtils010_IsSteamChinaLauncher_params *params );

struct cppISteamUtils_SteamUtils010_InitFilterText_params
{
    void *linux_side;
    bool _ret;
    uint32_t unFilterOptions;
};
extern void cppISteamUtils_SteamUtils010_InitFilterText( struct cppISteamUtils_SteamUtils010_InitFilterText_params *params );

struct cppISteamUtils_SteamUtils010_FilterText_params
{
    void *linux_side;
    int32_t _ret;
    uint32_t eContext;
    CSteamID sourceSteamID;
    const char *pchInputMessage;
    char *pchOutFilteredText;
    uint32_t nByteSizeOutFilteredText;
};
extern void cppISteamUtils_SteamUtils010_FilterText( struct cppISteamUtils_SteamUtils010_FilterText_params *params );

struct cppISteamUtils_SteamUtils010_GetIPv6ConnectivityState_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eProtocol;
};
extern void cppISteamUtils_SteamUtils010_GetIPv6ConnectivityState( struct cppISteamUtils_SteamUtils010_GetIPv6ConnectivityState_params *params );

struct cppISteamUtils_SteamUtils010_IsSteamRunningOnSteamDeck_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamUtils_SteamUtils010_IsSteamRunningOnSteamDeck( struct cppISteamUtils_SteamUtils010_IsSteamRunningOnSteamDeck_params *params );

struct cppISteamUtils_SteamUtils010_ShowFloatingGamepadTextInput_params
{
    void *linux_side;
    bool _ret;
    uint32_t eKeyboardMode;
    int32_t nTextFieldXPosition;
    int32_t nTextFieldYPosition;
    int32_t nTextFieldWidth;
    int32_t nTextFieldHeight;
};
extern void cppISteamUtils_SteamUtils010_ShowFloatingGamepadTextInput( struct cppISteamUtils_SteamUtils010_ShowFloatingGamepadTextInput_params *params );

struct cppISteamUtils_SteamUtils010_SetGameLauncherMode_params
{
    void *linux_side;
    bool bLauncherMode;
};
extern void cppISteamUtils_SteamUtils010_SetGameLauncherMode( struct cppISteamUtils_SteamUtils010_SetGameLauncherMode_params *params );

struct cppISteamUtils_SteamUtils010_DismissFloatingGamepadTextInput_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamUtils_SteamUtils010_DismissFloatingGamepadTextInput( struct cppISteamUtils_SteamUtils010_DismissFloatingGamepadTextInput_params *params );

