#ifdef __cplusplus
extern "C" {
#endif
extern EResult cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetResultStatus(void *, SteamInventoryResult_t);
extern bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetResultItems(void *, SteamInventoryResult_t, SteamItemDetails_t *, uint32 *);
extern bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetResultItemProperty(void *, SteamInventoryResult_t, uint32, const char *, char *, uint32 *);
extern uint32 cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetResultTimestamp(void *, SteamInventoryResult_t);
extern bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_CheckResultSteamID(void *, SteamInventoryResult_t, CSteamID);
extern void cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_DestroyResult(void *, SteamInventoryResult_t);
extern bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetAllItems(void *, SteamInventoryResult_t *);
extern bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetItemsByID(void *, SteamInventoryResult_t *, const SteamItemInstanceID_t *, uint32);
extern bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_SerializeResult(void *, SteamInventoryResult_t, void *, uint32 *);
extern bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_DeserializeResult(void *, SteamInventoryResult_t *, const void *, uint32, bool);
extern bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_GenerateItems(void *, SteamInventoryResult_t *, const SteamItemDef_t *, const uint32 *, uint32);
extern bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_GrantPromoItems(void *, SteamInventoryResult_t *);
extern bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_AddPromoItem(void *, SteamInventoryResult_t *, SteamItemDef_t);
extern bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_AddPromoItems(void *, SteamInventoryResult_t *, const SteamItemDef_t *, uint32);
extern bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_ConsumeItem(void *, SteamInventoryResult_t *, SteamItemInstanceID_t, uint32);
extern bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_ExchangeItems(void *, SteamInventoryResult_t *, const SteamItemDef_t *, const uint32 *, uint32, const SteamItemInstanceID_t *, const uint32 *, uint32);
extern bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_TransferItemQuantity(void *, SteamInventoryResult_t *, SteamItemInstanceID_t, uint32, SteamItemInstanceID_t);
extern void cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_SendItemDropHeartbeat(void *);
extern bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_TriggerItemDrop(void *, SteamInventoryResult_t *, SteamItemDef_t);
extern bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_TradeItems(void *, SteamInventoryResult_t *, CSteamID, const SteamItemInstanceID_t *, const uint32 *, uint32, const SteamItemInstanceID_t *, const uint32 *, uint32);
extern bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_LoadItemDefinitions(void *);
extern bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetItemDefinitionIDs(void *, SteamItemDef_t *, uint32 *);
extern bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetItemDefinitionProperty(void *, SteamItemDef_t, const char *, char *, uint32 *);
extern SteamAPICall_t cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_RequestEligiblePromoItemDefinitionsIDs(void *, CSteamID);
extern bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetEligiblePromoItemDefinitionIDs(void *, CSteamID, SteamItemDef_t *, uint32 *);
extern SteamAPICall_t cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_StartPurchase(void *, const SteamItemDef_t *, const uint32 *, uint32);
extern SteamAPICall_t cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_RequestPrices(void *);
extern uint32 cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetNumItemsWithPrices(void *);
extern bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetItemsWithPrices(void *, SteamItemDef_t *, uint64 *, uint64 *, uint32);
extern bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetItemPrice(void *, SteamItemDef_t, uint64 *, uint64 *);
extern SteamInventoryUpdateHandle_t cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_StartUpdateProperties(void *);
extern bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_RemoveProperty(void *, SteamInventoryUpdateHandle_t, SteamItemInstanceID_t, const char *);
extern bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_SetProperty(void *, SteamInventoryUpdateHandle_t, SteamItemInstanceID_t, const char *, const char *);
extern bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_SetProperty_2(void *, SteamInventoryUpdateHandle_t, SteamItemInstanceID_t, const char *, bool);
extern bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_SetProperty_3(void *, SteamInventoryUpdateHandle_t, SteamItemInstanceID_t, const char *, int64);
extern bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_SetProperty_4(void *, SteamInventoryUpdateHandle_t, SteamItemInstanceID_t, const char *, float);
extern bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_SubmitUpdateProperties(void *, SteamInventoryUpdateHandle_t, SteamInventoryResult_t *);
#ifdef __cplusplus
}
#endif
