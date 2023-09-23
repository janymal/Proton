#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_099y/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_099y
#include "struct_converters.h"
#include "cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002.h"

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002
{
#ifdef __cplusplus
    virtual uint32_t GetNumStats( CGameID ) = 0;
    virtual const char * GetStatName( CGameID, uint32_t ) = 0;
    virtual uint32_t GetStatType( CGameID, const char * ) = 0;
    virtual uint32_t GetNumAchievements( CGameID ) = 0;
    virtual const char * GetAchievementName( CGameID, uint32_t ) = 0;
    virtual bool RequestCurrentStats( CGameID ) = 0;
    virtual bool GetStat( CGameID, const char *, int32_t * ) = 0;
    virtual bool GetStat( CGameID, const char *, float * ) = 0;
    virtual bool SetStat( CGameID, const char *, int32_t ) = 0;
    virtual bool SetStat( CGameID, const char *, float ) = 0;
    virtual bool UpdateAvgRateStat( CGameID, const char *, float, double ) = 0;
    virtual bool GetAchievement( CGameID, const char *, bool * ) = 0;
    virtual bool SetAchievement( CGameID, const char * ) = 0;
    virtual bool ClearAchievement( CGameID, const char * ) = 0;
    virtual bool StoreStats( CGameID ) = 0;
    virtual int32_t GetAchievementIcon( CGameID, const char * ) = 0;
    virtual const char * GetAchievementDisplayAttribute( CGameID, const char *, const char * ) = 0;
    virtual bool IndicateAchievementProgress( CGameID, const char *, uint32_t, uint32_t ) = 0;
#endif /* __cplusplus */
};

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetNumStats( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetNumStats_params *params )
{
    struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002 *iface = (struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->GetNumStats( params->nGameID );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetStatName( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetStatName_params *params )
{
    struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002 *iface = (struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->GetStatName( params->nGameID, params->iStat );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetStatType( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetStatType_params *params )
{
    struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002 *iface = (struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->GetStatType( params->nGameID, params->pchName );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetNumAchievements( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetNumAchievements_params *params )
{
    struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002 *iface = (struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->GetNumAchievements( params->nGameID );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetAchievementName( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetAchievementName_params *params )
{
    struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002 *iface = (struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->GetAchievementName( params->nGameID, params->iAchievement );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_RequestCurrentStats( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_RequestCurrentStats_params *params )
{
    struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002 *iface = (struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->RequestCurrentStats( params->nGameID );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetStat( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetStat_params *params )
{
    struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002 *iface = (struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->GetStat( params->nGameID, params->pchName, params->pData );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetStat_2( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetStat_2_params *params )
{
    struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002 *iface = (struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->GetStat( params->nGameID, params->pchName, params->pData );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_SetStat( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_SetStat_params *params )
{
    struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002 *iface = (struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->SetStat( params->nGameID, params->pchName, params->nData );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_SetStat_2( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_SetStat_2_params *params )
{
    struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002 *iface = (struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->SetStat( params->nGameID, params->pchName, params->fData );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_UpdateAvgRateStat( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_UpdateAvgRateStat_params *params )
{
    struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002 *iface = (struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->UpdateAvgRateStat( params->nGameID, params->pchName, params->flCountThisSession, params->dSessionLength );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetAchievement( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetAchievement_params *params )
{
    struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002 *iface = (struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->GetAchievement( params->nGameID, params->pchName, params->pbAchieved );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_SetAchievement( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_SetAchievement_params *params )
{
    struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002 *iface = (struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->SetAchievement( params->nGameID, params->pchName );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_ClearAchievement( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_ClearAchievement_params *params )
{
    struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002 *iface = (struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->ClearAchievement( params->nGameID, params->pchName );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_StoreStats( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_StoreStats_params *params )
{
    struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002 *iface = (struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->StoreStats( params->nGameID );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetAchievementIcon( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetAchievementIcon_params *params )
{
    struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002 *iface = (struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->GetAchievementIcon( params->nGameID, params->pchName );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetAchievementDisplayAttribute( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetAchievementDisplayAttribute_params *params )
{
    struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002 *iface = (struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->GetAchievementDisplayAttribute( params->nGameID, params->pchName, params->pchKey );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_IndicateAchievementProgress( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_IndicateAchievementProgress_params *params )
{
    struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002 *iface = (struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->IndicateAchievementProgress( params->nGameID, params->pchName, params->nCurProgress, params->nMaxProgress );
}

#ifdef __cplusplus
}
#endif
