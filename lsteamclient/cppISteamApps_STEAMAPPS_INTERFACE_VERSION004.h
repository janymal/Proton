struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION004;
struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsSubscribed_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsSubscribed( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsSubscribed_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsLowViolence_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsLowViolence( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsLowViolence_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsCybercafe_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsCybercafe( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsCybercafe_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsVACBanned_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsVACBanned( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsVACBanned_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_GetCurrentGameLanguage_params
{
    void *linux_side;
    const char *_ret;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_GetCurrentGameLanguage( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_GetCurrentGameLanguage_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_GetAvailableGameLanguages_params
{
    void *linux_side;
    const char *_ret;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_GetAvailableGameLanguages( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_GetAvailableGameLanguages_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsSubscribedApp_params
{
    void *linux_side;
    bool _ret;
    uint32_t appID;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsSubscribedApp( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsSubscribedApp_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsDlcInstalled_params
{
    void *linux_side;
    bool _ret;
    uint32_t appID;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsDlcInstalled( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsDlcInstalled_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_GetEarliestPurchaseUnixTime_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t nAppID;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_GetEarliestPurchaseUnixTime( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_GetEarliestPurchaseUnixTime_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsSubscribedFromFreeWeekend_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsSubscribedFromFreeWeekend( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsSubscribedFromFreeWeekend_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_GetDLCCount_params
{
    void *linux_side;
    int32_t _ret;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_GetDLCCount( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_GetDLCCount_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_BGetDLCDataByIndex_params
{
    void *linux_side;
    bool _ret;
    int32_t iDLC;
    uint32_t *pAppID;
    bool *pbAvailable;
    char *pchName;
    int32_t cchNameBufferSize;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_BGetDLCDataByIndex( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_BGetDLCDataByIndex_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_InstallDLC_params
{
    void *linux_side;
    uint32_t nAppID;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_InstallDLC( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_InstallDLC_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_UninstallDLC_params
{
    void *linux_side;
    uint32_t nAppID;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_UninstallDLC( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_UninstallDLC_params *params );

