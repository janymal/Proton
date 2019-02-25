#ifdef __cplusplus
extern "C" {
#endif
extern HSteamUser cppISteamUser_SteamUser020_GetHSteamUser(void *);
extern bool cppISteamUser_SteamUser020_BLoggedOn(void *);
extern CSteamID cppISteamUser_SteamUser020_GetSteamID(void *);
extern int cppISteamUser_SteamUser020_InitiateGameConnection(void *, void *, int, CSteamID, uint32, uint16, bool);
extern void cppISteamUser_SteamUser020_TerminateGameConnection(void *, uint32, uint16);
extern void cppISteamUser_SteamUser020_TrackAppUsageEvent(void *, CGameID, int, const char *);
extern bool cppISteamUser_SteamUser020_GetUserDataFolder(void *, char *, int);
extern void cppISteamUser_SteamUser020_StartVoiceRecording(void *);
extern void cppISteamUser_SteamUser020_StopVoiceRecording(void *);
extern EVoiceResult cppISteamUser_SteamUser020_GetAvailableVoice(void *, uint32 *, uint32 *, uint32);
extern EVoiceResult cppISteamUser_SteamUser020_GetVoice(void *, bool, void *, uint32, uint32 *, bool, void *, uint32, uint32 *, uint32);
extern EVoiceResult cppISteamUser_SteamUser020_DecompressVoice(void *, const void *, uint32, void *, uint32, uint32 *, uint32);
extern uint32 cppISteamUser_SteamUser020_GetVoiceOptimalSampleRate(void *);
extern HAuthTicket cppISteamUser_SteamUser020_GetAuthSessionTicket(void *, void *, int, uint32 *);
extern EBeginAuthSessionResult cppISteamUser_SteamUser020_BeginAuthSession(void *, const void *, int, CSteamID);
extern void cppISteamUser_SteamUser020_EndAuthSession(void *, CSteamID);
extern void cppISteamUser_SteamUser020_CancelAuthTicket(void *, HAuthTicket);
extern EUserHasLicenseForAppResult cppISteamUser_SteamUser020_UserHasLicenseForApp(void *, CSteamID, AppId_t);
extern bool cppISteamUser_SteamUser020_BIsBehindNAT(void *);
extern void cppISteamUser_SteamUser020_AdvertiseGame(void *, CSteamID, uint32, uint16);
extern SteamAPICall_t cppISteamUser_SteamUser020_RequestEncryptedAppTicket(void *, void *, int);
extern bool cppISteamUser_SteamUser020_GetEncryptedAppTicket(void *, void *, int, uint32 *);
extern int cppISteamUser_SteamUser020_GetGameBadgeLevel(void *, int, bool);
extern int cppISteamUser_SteamUser020_GetPlayerSteamLevel(void *);
extern SteamAPICall_t cppISteamUser_SteamUser020_RequestStoreAuthURL(void *, const char *);
extern bool cppISteamUser_SteamUser020_BIsPhoneVerified(void *);
extern bool cppISteamUser_SteamUser020_BIsTwoFactorEnabled(void *);
extern bool cppISteamUser_SteamUser020_BIsPhoneIdentifying(void *);
extern bool cppISteamUser_SteamUser020_BIsPhoneRequiringVerification(void *);
extern SteamAPICall_t cppISteamUser_SteamUser020_GetMarketEligibility(void *);
#ifdef __cplusplus
}
#endif
