#ifdef __cplusplus
extern "C" {
#endif
extern bool cppISteamController_SteamController007_Init(void *);
extern bool cppISteamController_SteamController007_Shutdown(void *);
extern void cppISteamController_SteamController007_RunFrame(void *);
extern int cppISteamController_SteamController007_GetConnectedControllers(void *, ControllerHandle_t *);
extern ControllerActionSetHandle_t cppISteamController_SteamController007_GetActionSetHandle(void *, const char *);
extern void cppISteamController_SteamController007_ActivateActionSet(void *, ControllerHandle_t, ControllerActionSetHandle_t);
extern ControllerActionSetHandle_t cppISteamController_SteamController007_GetCurrentActionSet(void *, ControllerHandle_t);
extern void cppISteamController_SteamController007_ActivateActionSetLayer(void *, ControllerHandle_t, ControllerActionSetHandle_t);
extern void cppISteamController_SteamController007_DeactivateActionSetLayer(void *, ControllerHandle_t, ControllerActionSetHandle_t);
extern void cppISteamController_SteamController007_DeactivateAllActionSetLayers(void *, ControllerHandle_t);
extern int cppISteamController_SteamController007_GetActiveActionSetLayers(void *, ControllerHandle_t, ControllerActionSetHandle_t *);
extern ControllerDigitalActionHandle_t cppISteamController_SteamController007_GetDigitalActionHandle(void *, const char *);
extern InputDigitalActionData_t cppISteamController_SteamController007_GetDigitalActionData(void *, ControllerHandle_t, ControllerDigitalActionHandle_t);
extern int cppISteamController_SteamController007_GetDigitalActionOrigins(void *, ControllerHandle_t, ControllerActionSetHandle_t, ControllerDigitalActionHandle_t, EControllerActionOrigin *);
extern ControllerAnalogActionHandle_t cppISteamController_SteamController007_GetAnalogActionHandle(void *, const char *);
extern InputAnalogActionData_t cppISteamController_SteamController007_GetAnalogActionData(void *, ControllerHandle_t, ControllerAnalogActionHandle_t);
extern int cppISteamController_SteamController007_GetAnalogActionOrigins(void *, ControllerHandle_t, ControllerActionSetHandle_t, ControllerAnalogActionHandle_t, EControllerActionOrigin *);
extern const char * cppISteamController_SteamController007_GetGlyphForActionOrigin(void *, EControllerActionOrigin);
extern const char * cppISteamController_SteamController007_GetStringForActionOrigin(void *, EControllerActionOrigin);
extern void cppISteamController_SteamController007_StopAnalogActionMomentum(void *, ControllerHandle_t, ControllerAnalogActionHandle_t);
extern InputMotionData_t cppISteamController_SteamController007_GetMotionData(void *, ControllerHandle_t);
extern void cppISteamController_SteamController007_TriggerHapticPulse(void *, ControllerHandle_t, ESteamControllerPad, unsigned short);
extern void cppISteamController_SteamController007_TriggerRepeatedHapticPulse(void *, ControllerHandle_t, ESteamControllerPad, unsigned short, unsigned short, unsigned short, unsigned int);
extern void cppISteamController_SteamController007_TriggerVibration(void *, ControllerHandle_t, unsigned short, unsigned short);
extern void cppISteamController_SteamController007_SetLEDColor(void *, ControllerHandle_t, uint8, uint8, uint8, unsigned int);
extern bool cppISteamController_SteamController007_ShowBindingPanel(void *, ControllerHandle_t);
extern ESteamInputType cppISteamController_SteamController007_GetInputTypeForHandle(void *, ControllerHandle_t);
extern ControllerHandle_t cppISteamController_SteamController007_GetControllerForGamepadIndex(void *, int);
extern int cppISteamController_SteamController007_GetGamepadIndexForController(void *, ControllerHandle_t);
extern const char * cppISteamController_SteamController007_GetStringForXboxOrigin(void *, EXboxOrigin);
extern const char * cppISteamController_SteamController007_GetGlyphForXboxOrigin(void *, EXboxOrigin);
extern EControllerActionOrigin cppISteamController_SteamController007_GetActionOriginFromXboxOrigin(void *, ControllerHandle_t, EXboxOrigin);
extern EControllerActionOrigin cppISteamController_SteamController007_TranslateActionOrigin(void *, ESteamInputType, EControllerActionOrigin);
#ifdef __cplusplus
}
#endif
