#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_152/steam_api.h"
#include "steamworks_sdk_152/steamnetworkingtypes.h"
#include "steamworks_sdk_152/isteamnetworkingsockets.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_152
#include "struct_converters.h"
#include "cppISteamNetworkingSockets_SteamNetworkingSockets009.h"

struct cppISteamNetworkingSockets_SteamNetworkingSockets009
{
#ifdef __cplusplus
    virtual uint32_t CreateListenSocketIP( const SteamNetworkingIPAddr *, int32_t, const SteamNetworkingConfigValue_t * ) = 0;
    virtual uint32_t ConnectByIPAddress( const SteamNetworkingIPAddr *, int32_t, const SteamNetworkingConfigValue_t * ) = 0;
    virtual uint32_t CreateListenSocketP2P( int32_t, int32_t, const SteamNetworkingConfigValue_t * ) = 0;
    virtual uint32_t ConnectP2P( const SteamNetworkingIdentity *, int32_t, int32_t, const SteamNetworkingConfigValue_t * ) = 0;
    virtual uint32_t AcceptConnection( uint32_t ) = 0;
    virtual bool CloseConnection( uint32_t, int32_t, const char *, bool ) = 0;
    virtual bool CloseListenSocket( uint32_t ) = 0;
    virtual bool SetConnectionUserData( uint32_t, int64_t ) = 0;
    virtual int64_t GetConnectionUserData( uint32_t ) = 0;
    virtual void SetConnectionName( uint32_t, const char * ) = 0;
    virtual bool GetConnectionName( uint32_t, char *, int32_t ) = 0;
    virtual uint32_t SendMessageToConnection( uint32_t, const void *, uint32_t, int32_t, int64_t * ) = 0;
    virtual void SendMessages( int32_t, SteamNetworkingMessage_t *const *, int64_t * ) = 0;
    virtual uint32_t FlushMessagesOnConnection( uint32_t ) = 0;
    virtual int32_t ReceiveMessagesOnConnection( uint32_t, SteamNetworkingMessage_t **, int32_t ) = 0;
    virtual bool GetConnectionInfo( uint32_t, SteamNetConnectionInfo_t * ) = 0;
    virtual bool GetQuickConnectionStatus( uint32_t, SteamNetworkingQuickConnectionStatus * ) = 0;
    virtual int32_t GetDetailedConnectionStatus( uint32_t, char *, int32_t ) = 0;
    virtual bool GetListenSocketAddress( uint32_t, SteamNetworkingIPAddr * ) = 0;
    virtual bool CreateSocketPair( uint32_t *, uint32_t *, bool, const SteamNetworkingIdentity *, const SteamNetworkingIdentity * ) = 0;
    virtual bool GetIdentity( SteamNetworkingIdentity * ) = 0;
    virtual uint32_t InitAuthentication(  ) = 0;
    virtual uint32_t GetAuthenticationStatus( SteamNetAuthenticationStatus_t * ) = 0;
    virtual uint32_t CreatePollGroup(  ) = 0;
    virtual bool DestroyPollGroup( uint32_t ) = 0;
    virtual bool SetConnectionPollGroup( uint32_t, uint32_t ) = 0;
    virtual int32_t ReceiveMessagesOnPollGroup( uint32_t, SteamNetworkingMessage_t **, int32_t ) = 0;
    virtual bool ReceivedRelayAuthTicket( const void *, int32_t, SteamDatagramRelayAuthTicket * ) = 0;
    virtual int32_t FindRelayAuthTicketForServer( const SteamNetworkingIdentity *, int32_t, SteamDatagramRelayAuthTicket * ) = 0;
    virtual uint32_t ConnectToHostedDedicatedServer( const SteamNetworkingIdentity *, int32_t, int32_t, const SteamNetworkingConfigValue_t * ) = 0;
    virtual uint16_t GetHostedDedicatedServerPort(  ) = 0;
    virtual uint32_t GetHostedDedicatedServerPOPID(  ) = 0;
    virtual uint32_t GetHostedDedicatedServerAddress( SteamDatagramHostedAddress * ) = 0;
    virtual uint32_t CreateHostedDedicatedServerListenSocket( int32_t, int32_t, const SteamNetworkingConfigValue_t * ) = 0;
    virtual uint32_t GetGameCoordinatorServerLogin( SteamDatagramGameCoordinatorServerLogin *, int32_t *, void * ) = 0;
    virtual uint32_t ConnectP2PCustomSignaling( void /*ISteamNetworkingConnectionSignaling*/ *, const SteamNetworkingIdentity *, int32_t, int32_t, const SteamNetworkingConfigValue_t * ) = 0;
    virtual bool ReceivedP2PCustomSignal( const void *, int32_t, void /*ISteamNetworkingSignalingRecvContext*/ * ) = 0;
    virtual bool GetCertificateRequest( int32_t *, void *, char (*)[1024] ) = 0;
    virtual bool SetCertificate( const void *, int32_t, char (*)[1024] ) = 0;
    virtual void RunCallbacks(  ) = 0;
    virtual ~cppISteamNetworkingSockets_SteamNetworkingSockets009(  ) = 0;
#endif /* __cplusplus */
};

void cppISteamNetworkingSockets_SteamNetworkingSockets009_CreateListenSocketIP( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_CreateListenSocketIP_params *params )
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct cppISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    params->_ret = iface->CreateListenSocketIP( params->localAddress, params->nOptions, params->pOptions );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets009_ConnectByIPAddress( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_ConnectByIPAddress_params *params )
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct cppISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    params->_ret = iface->ConnectByIPAddress( params->address, params->nOptions, params->pOptions );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets009_CreateListenSocketP2P( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_CreateListenSocketP2P_params *params )
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct cppISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    params->_ret = iface->CreateListenSocketP2P( params->nLocalVirtualPort, params->nOptions, params->pOptions );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets009_ConnectP2P( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_ConnectP2P_params *params )
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct cppISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    params->_ret = iface->ConnectP2P( params->identityRemote, params->nRemoteVirtualPort, params->nOptions, params->pOptions );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets009_AcceptConnection( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_AcceptConnection_params *params )
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct cppISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    params->_ret = iface->AcceptConnection( params->hConn );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets009_CloseConnection( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_CloseConnection_params *params )
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct cppISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    params->_ret = iface->CloseConnection( params->hPeer, params->nReason, params->pszDebug, params->bEnableLinger );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets009_CloseListenSocket( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_CloseListenSocket_params *params )
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct cppISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    params->_ret = iface->CloseListenSocket( params->hSocket );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets009_SetConnectionUserData( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_SetConnectionUserData_params *params )
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct cppISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    params->_ret = iface->SetConnectionUserData( params->hPeer, params->nUserData );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets009_GetConnectionUserData( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_GetConnectionUserData_params *params )
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct cppISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    params->_ret = iface->GetConnectionUserData( params->hPeer );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets009_SetConnectionName( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_SetConnectionName_params *params )
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct cppISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    iface->SetConnectionName( params->hPeer, params->pszName );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets009_GetConnectionName( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_GetConnectionName_params *params )
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct cppISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    params->_ret = iface->GetConnectionName( params->hPeer, params->pszName, params->nMaxLen );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets009_SendMessageToConnection( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_SendMessageToConnection_params *params )
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct cppISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    params->_ret = iface->SendMessageToConnection( params->hConn, params->pData, params->cbData, params->nSendFlags, params->pOutMessageNumber );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets009_FlushMessagesOnConnection( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_FlushMessagesOnConnection_params *params )
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct cppISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    params->_ret = iface->FlushMessagesOnConnection( params->hConn );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets009_GetConnectionInfo( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_GetConnectionInfo_params *params )
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct cppISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    params->_ret = iface->GetConnectionInfo( params->hConn, params->pInfo );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets009_GetQuickConnectionStatus( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_GetQuickConnectionStatus_params *params )
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct cppISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    params->_ret = iface->GetQuickConnectionStatus( params->hConn, params->pStats );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets009_GetDetailedConnectionStatus( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_GetDetailedConnectionStatus_params *params )
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct cppISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    params->_ret = iface->GetDetailedConnectionStatus( params->hConn, params->pszBuf, params->cbBuf );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets009_GetListenSocketAddress( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_GetListenSocketAddress_params *params )
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct cppISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    params->_ret = iface->GetListenSocketAddress( params->hSocket, params->address );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets009_CreateSocketPair( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_CreateSocketPair_params *params )
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct cppISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    params->_ret = iface->CreateSocketPair( params->pOutConnection1, params->pOutConnection2, params->bUseNetworkLoopback, params->pIdentity1, params->pIdentity2 );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets009_GetIdentity( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_GetIdentity_params *params )
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct cppISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    params->_ret = iface->GetIdentity( params->pIdentity );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets009_InitAuthentication( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_InitAuthentication_params *params )
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct cppISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    params->_ret = iface->InitAuthentication(  );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets009_GetAuthenticationStatus( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_GetAuthenticationStatus_params *params )
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct cppISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    params->_ret = iface->GetAuthenticationStatus( params->pDetails );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets009_CreatePollGroup( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_CreatePollGroup_params *params )
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct cppISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    params->_ret = iface->CreatePollGroup(  );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets009_DestroyPollGroup( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_DestroyPollGroup_params *params )
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct cppISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    params->_ret = iface->DestroyPollGroup( params->hPollGroup );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets009_SetConnectionPollGroup( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_SetConnectionPollGroup_params *params )
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct cppISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    params->_ret = iface->SetConnectionPollGroup( params->hConn, params->hPollGroup );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets009_ReceivedRelayAuthTicket( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_ReceivedRelayAuthTicket_params *params )
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct cppISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    params->_ret = iface->ReceivedRelayAuthTicket( params->pvTicket, params->cbTicket, params->pOutParsedTicket );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets009_FindRelayAuthTicketForServer( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_FindRelayAuthTicketForServer_params *params )
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct cppISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    params->_ret = iface->FindRelayAuthTicketForServer( params->identityGameServer, params->nRemoteVirtualPort, params->pOutParsedTicket );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets009_ConnectToHostedDedicatedServer( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_ConnectToHostedDedicatedServer_params *params )
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct cppISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    params->_ret = iface->ConnectToHostedDedicatedServer( params->identityTarget, params->nRemoteVirtualPort, params->nOptions, params->pOptions );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets009_GetHostedDedicatedServerPort( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_GetHostedDedicatedServerPort_params *params )
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct cppISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    params->_ret = iface->GetHostedDedicatedServerPort(  );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets009_GetHostedDedicatedServerPOPID( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_GetHostedDedicatedServerPOPID_params *params )
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct cppISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    params->_ret = iface->GetHostedDedicatedServerPOPID(  );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets009_GetHostedDedicatedServerAddress( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_GetHostedDedicatedServerAddress_params *params )
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct cppISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    params->_ret = iface->GetHostedDedicatedServerAddress( params->pRouting );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets009_CreateHostedDedicatedServerListenSocket( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_CreateHostedDedicatedServerListenSocket_params *params )
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct cppISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    params->_ret = iface->CreateHostedDedicatedServerListenSocket( params->nLocalVirtualPort, params->nOptions, params->pOptions );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets009_GetGameCoordinatorServerLogin( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_GetGameCoordinatorServerLogin_params *params )
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct cppISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    params->_ret = iface->GetGameCoordinatorServerLogin( params->pLoginInfo, params->pcbSignedBlob, params->pBlob );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets009_ConnectP2PCustomSignaling( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_ConnectP2PCustomSignaling_params *params )
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct cppISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    params->_ret = iface->ConnectP2PCustomSignaling( params->pSignaling, params->pPeerIdentity, params->nRemoteVirtualPort, params->nOptions, params->pOptions );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets009_ReceivedP2PCustomSignal( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_ReceivedP2PCustomSignal_params *params )
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct cppISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    params->_ret = iface->ReceivedP2PCustomSignal( params->pMsg, params->cbMsg, params->pContext );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets009_GetCertificateRequest( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_GetCertificateRequest_params *params )
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct cppISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    params->_ret = iface->GetCertificateRequest( params->pcbBlob, params->pBlob, params->errMsg );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets009_SetCertificate( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_SetCertificate_params *params )
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct cppISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    params->_ret = iface->SetCertificate( params->pCertificate, params->cbCertificate, params->errMsg );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets009_RunCallbacks( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_RunCallbacks_params *params )
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct cppISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    iface->RunCallbacks(  );
}

#ifdef __cplusplus
}
#endif
