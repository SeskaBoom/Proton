#ifdef __cplusplus
extern "C" {
#endif
extern bool cppISteamController_SteamController003_Init(void *);
extern bool cppISteamController_SteamController003_Shutdown(void *);
extern void cppISteamController_SteamController003_RunFrame(void *);
extern int cppISteamController_SteamController003_GetConnectedControllers(void *, ControllerHandle_t *);
extern bool cppISteamController_SteamController003_ShowBindingPanel(void *, ControllerHandle_t);
extern ControllerActionSetHandle_t cppISteamController_SteamController003_GetActionSetHandle(void *, const char *);
extern void cppISteamController_SteamController003_ActivateActionSet(void *, ControllerHandle_t, ControllerActionSetHandle_t);
extern ControllerActionSetHandle_t cppISteamController_SteamController003_GetCurrentActionSet(void *, ControllerHandle_t);
extern ControllerDigitalActionHandle_t cppISteamController_SteamController003_GetDigitalActionHandle(void *, const char *);
extern ControllerDigitalActionData_t cppISteamController_SteamController003_GetDigitalActionData(void *, ControllerHandle_t, ControllerDigitalActionHandle_t);
extern int cppISteamController_SteamController003_GetDigitalActionOrigins(void *, ControllerHandle_t, ControllerActionSetHandle_t, ControllerDigitalActionHandle_t, EControllerActionOrigin *);
extern ControllerAnalogActionHandle_t cppISteamController_SteamController003_GetAnalogActionHandle(void *, const char *);
extern ControllerAnalogActionData_t cppISteamController_SteamController003_GetAnalogActionData(void *, ControllerHandle_t, ControllerAnalogActionHandle_t);
extern int cppISteamController_SteamController003_GetAnalogActionOrigins(void *, ControllerHandle_t, ControllerActionSetHandle_t, ControllerAnalogActionHandle_t, EControllerActionOrigin *);
extern void cppISteamController_SteamController003_StopAnalogActionMomentum(void *, ControllerHandle_t, ControllerAnalogActionHandle_t);
extern void cppISteamController_SteamController003_TriggerHapticPulse(void *, ControllerHandle_t, ESteamControllerPad, unsigned short);
extern void cppISteamController_SteamController003_TriggerRepeatedHapticPulse(void *, ControllerHandle_t, ESteamControllerPad, unsigned short, unsigned short, unsigned short, unsigned int);
#ifdef __cplusplus
}
#endif
