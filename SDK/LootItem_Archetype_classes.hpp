#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x88 (0x6F8 - 0x670)
// BlueprintGeneratedClass LootItem_Archetype.LootItem_Archetype_C
class ALootItem_Archetype_C : public AQtnLootItem
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x670(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UQtnGoalMarkerComponent*               QtnGoalMarker;                                     // 0x678(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_Loot_C*                            TargetPopupWidget;                                 // 0x680(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsUIInfoUp;                                        // 0x688(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5780[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<struct FGameplayTag, class UClass*>     EffectTagMap;                                      // 0x690(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	class AQtnFXActor*                           CurrentEffect;                                     // 0x6E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   Upgrade_Settings;                                  // 0x6E8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class ALootItem_Archetype_C* GetDefaultObj();

	void HasAnyUpgradeToIncreaseLevel(class AQtnBodyPawn* bodyPawn, bool* HasUpgrades_, int32 Temp_int_Array_Index_Variable, TArray<class UQtnUpgrade*>& CallFunc_GetCurrentUpgradesArray_ReturnValue, class UQtnUpgrade* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsLevelUpgradable_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void ConditionalAutoTagLoot();
	void HandleCutscene(bool CutsceneActive, const TArray<class AActor*>& AttachedActors, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AActor*>& CallFunc_GetAttachedActors_OutActors, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void Apply_Heal_To_Allies_Server_Only(float HealingAmount, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess, class AQtnBodyPawn* CallFunc_GetOriginalBodyPawn_ReturnValue, TArray<class ABodyPawnBase_C*>& CallFunc_GetPlayerAndBotBodies_bodies, class ABodyPawnBase_C* CallFunc_Array_Get_Item, const struct FGameplayTag& CallFunc_GetConsumableTypeAsGameplayTag_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void CanIncreaseSlotLevel(class UQtnUpgradeSlot* SlotToCheck, int32 LevelsToIncrease, bool* CanIncreaaseLevel, bool CallFunc_IsValid_ReturnValue, const struct FQtnRolledUpgradeData& CallFunc_GetRolledUpgradeData_ReturnValue, class UQtnUpgrade* CallFunc_GetCurrentSlottedUpgrade_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FQtnUpgradeSettings& CallFunc_GetUpgradeSettings_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue);
	void HasAnyUpgrades(class AQtnPlayerPawn* InPawn, bool* HasUpgrades, int32 Temp_int_Array_Index_Variable, class AQtnBodyPawn* CallFunc_GetOccupiedBodyPawn_ReturnValue, class AQtnItem* CallFunc_GetActualEquippedItem_ReturnValue, class AQtnItem* CallFunc_GetActualEquippedItem_ReturnValue_1, TArray<class UQtnUpgradeSlot*>& CallFunc_GetUpgradeSlots_ReturnValue, TArray<class UQtnUpgradeSlot*>& CallFunc_GetUpgradeSlots_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, class UQtnUpgradeSlot* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_IsSlotFilled_ReturnValue, TArray<class UQtnUpgradeSlot*>& CallFunc_GetUpgradeSlots_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_2, TArray<class UQtnVerb*>& CallFunc_GetAllEquippedVerbs_pawnVerbs, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, class UQtnUpgradeSlot* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_IsSlotFilled_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_3, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Array_Index_Variable_3, int32 Temp_int_Loop_Counter_Variable_4, class UQtnUpgradeSlot* CallFunc_Array_Get_Item_2, bool CallFunc_Less_IntInt_ReturnValue_3, bool CallFunc_IsSlotFilled_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 Temp_int_Array_Index_Variable_4, class UQtnVerb* CallFunc_Array_Get_Item_3, TArray<class UQtnUpgradeSlot*>& CallFunc_GetUpgradeSlots_ReturnValue_3, class UQtnUpgradeSlot* CallFunc_Array_Get_Item_4, int32 CallFunc_Array_Length_ReturnValue_4, bool CallFunc_IsSlotFilled_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_4);
	void IncreaseRandomUpgradeLevel(class AQtnBodyPawn* LOCAL_BodyPawn, int32 LOCAL_origLevel, class UQtnUpgradeSlot* LOCAL_ChosenSlot, const TArray<class UQtnUpgradeSlot*>& LOCAL_AvailableSlots, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Array_Index_Variable_3, int32 Temp_int_Loop_Counter_Variable_4, int32 CallFunc_Add_IntInt_ReturnValue_4, class AQtnBodyPawn* CallFunc_GetOccupiedBodyPawn_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_5, int32 Temp_int_Array_Index_Variable_4, class AQtnBodyPawn* CallFunc_GetOccupiedBodyPawn_ReturnValue_1, class UQtnCheatWeaponSwapBase_C* CallFunc_GetStatusEffect_ReturnValue, bool CallFunc_IncreaseRandomWeaponUpgradeLevel_FoundUpgrade, const struct FFQtnUpgradeSaveData& CallFunc_IncreaseRandomWeaponUpgradeLevel_UpgradeSaveData, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, class AQtnItem* CallFunc_GetActualEquippedItem_ReturnValue, TArray<class UQtnUpgradeSlot*>& CallFunc_GetUpgradeSlots_ReturnValue, class AQtnItem* CallFunc_GetActualEquippedItem_ReturnValue_1, class UQtnUpgradeSlot* CallFunc_Array_Get_Item, TArray<class UQtnUpgradeSlot*>& CallFunc_GetUpgradeSlots_ReturnValue_1, bool CallFunc_CanIncreaseSlotLevel_CanIncreaaseLevel, class UQtnUpgradeSlot* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_CanIncreaseSlotLevel_CanIncreaaseLevel_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsSlotFilled_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsSlotFilled_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, TArray<class UQtnUpgradeSlot*>& CallFunc_GetUpgradeSlots_ReturnValue_2, class UQtnUpgradeSlot* CallFunc_Array_Get_Item_2, TArray<class UQtnVerb*>& CallFunc_GetAllEquippedVerbs_pawnVerbs, bool CallFunc_CanIncreaseSlotLevel_CanIncreaaseLevel_2, class UQtnVerb* CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_2, TArray<class UQtnUpgradeSlot*>& CallFunc_GetUpgradeSlots_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_2, class UQtnUpgradeSlot* CallFunc_Array_Get_Item_4, bool CallFunc_CanIncreaseSlotLevel_CanIncreaaseLevel_3, bool CallFunc_IsSlotFilled_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_3, bool CallFunc_IsSlotFilled_ReturnValue_3, int32 CallFunc_Array_Length_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_4, const struct FQtnRolledUpgradeData& CallFunc_GetRolledUpgradeData_ReturnValue, const struct FQtnRolledUpgradeData& CallFunc_GetRolledUpgradeData_ReturnValue_1, class UQtnUpgrade* CallFunc_GetCurrentSlottedUpgrade_ReturnValue, const struct FQtnUpgradeSettings& CallFunc_GetUpgradeSettings_ReturnValue, const struct FQtnUpgradeSettings& CallFunc_GetUpgradeSettings_ReturnValue_1, const struct FQtnUpgradeSettings& CallFunc_ConvertReplicatedUpgradeSettings_OutValidUpgradeSettings, int32 CallFunc_Min_ReturnValue, const struct FQtnRolledUpgradeData& K2Node_MakeStruct_QtnRolledUpgradeData, bool CallFunc_UpdateRolledData_ServerOnly_ReturnValue, class AQtnBodyPawn* CallFunc_GetOccupiedBodyPawn_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_5, bool CallFunc_Greater_IntInt_ReturnValue, class UQtnUpgradeSlot* CallFunc_Array_Random_OutItem, int32 CallFunc_Array_Random_OutIndex, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_3, class AQtnBodyPawn* CallFunc_GetOccupiedBodyPawn_ReturnValue_3);
	bool CanUserPickup(class AQtnPlayerPawn* User, class AQtnBodyPawn* CallFunc_GetOccupiedBodyPawn_ReturnValue, bool CallFunc_HasAnyUpgrades_HasUpgrades, bool CallFunc_HasAnyUpgradeToIncreaseLevel_HasUpgrades_, class UQtnCheatWeaponSwapBase_C* CallFunc_GetStatusEffect_ReturnValue, bool CallFunc_IsDead_canBeRevived, bool CallFunc_IsDead_ReturnValue, bool CallFunc_HasSavedUpgrades_HasSavedUpgrades, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasUpgrade_ReturnValue, class AQtnBodyPawn* CallFunc_GetOccupiedBodyPawn_ReturnValue_1, class AQtnBodyPawn* CallFunc_GetOccupiedBodyPawn_ReturnValue_2, class UQtnAttributeComponent* CallFunc_GetAttributeComponent_ReturnValue, bool CallFunc_IsLootRecipient_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetAttributeValue_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsLootRecipient_ReturnValue_1, float CallFunc_GetAttributeValue_ReturnValue_1, bool CallFunc_CanUserPickup_ReturnValue, float Temp_float_Variable, float Temp_float_Variable_1, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, const struct FGameplayTag& CallFunc_GetConsumableTypeAsGameplayTag_ReturnValue, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	struct FVector FetchWorldLocation(const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue);
	bool FetchShowItemPopUpBool();
	struct FQtnItemData FetchItemData(const struct FQtnItemData& CallFunc_GetItemData_ReturnValue);
	class AActor* FetchItemActor();
	void OnDebugDisplay(class UQtnDebugWrapper* DebugWrapper);
	void BndEvt__TriggerUI_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void BndEvt__TriggerPickup_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void OnPickupStartEvent(class AQtnPlayerPawn* TargetPawn);
	void BndEvt__FrobAccumulatorComponent_K2Node_ComponentBoundEvent_2_QtnOnAccumulatorEvent__DelegateSignature(class UQtnFrobAccumulatorComponent* Accumulator, class AQtnPawn* LastFrobbingPawn, bool IsServer);
	void BndEvt__FrobAccumulatorComponent_K2Node_ComponentBoundEvent_3_QtnOnAccumulatorEvent__DelegateSignature(class UQtnFrobAccumulatorComponent* Accumulator, class AQtnPawn* LastFrobbingPawn, bool IsServer);
	void OnUpdateFrobFillUIEvent(float InFillRatio);
	void OnSpawnCompleteEvent();
	void BndEvt__TriggerUI_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void OnAttachItemData(const struct FQtnItemData& ItemData);
	void OnInventoryAdd(class AActor* OwningActor);
	void OnPickupConsumable_LocalOnly();
	void OnPickupConsumable_ServerOnly();
	void OnPickupCompleteEvent();
	void OnConfigureVisualsEvent();
	void DelaySpawnAnimation_ServerOnly(const struct FQtnLootSpawnSettings& Settings, float SpawnDelay);
	void UpgradeLeveledUp_MULTI(class AQtnBodyPawn* Body, int32 OrigLevel, const struct FQtnUpgradeSettings& UpgradeSettings, const struct FQtnRolledUpgradeData& RolledUpgradeData);
	void OnPickupCurrency_ServerOnly();
	void PickupFX();
	void OnSpawnUpdateEvent(float Progress);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void LocalCutsceneEvent_Event_0(bool IsCutsceneActive, bool DoWorldCleanup);
	void IsBonusSpawnFX();
	void ExecuteUbergraph_LootItem_Archetype(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_2, class AActor* K2Node_ComponentBoundEvent_OtherActor_2, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_2, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_2, bool K2Node_ComponentBoundEvent_bFromSweep_1, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, class AActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, class AQtnBodyPawn* K2Node_DynamicCast_AsQtn_Body_Pawn, bool K2Node_DynamicCast_bSuccess, class AQtnBodyPawn* K2Node_DynamicCast_AsQtn_Body_Pawn_1, bool K2Node_DynamicCast_bSuccess_1, class AQtnPlayerPawn* CallFunc_GetControllingPlayerPawn_ReturnValue, class AQtnPlayerPawn* CallFunc_GetControllingPlayerPawn_ReturnValue_1, class AQtnPlayerPawn* K2Node_Event_TargetPawn, class UQtnFrobAccumulatorComponent* K2Node_ComponentBoundEvent_accumulator_1, class AQtnPawn* K2Node_ComponentBoundEvent_lastFrobbingPawn_1, bool K2Node_ComponentBoundEvent_isServer_1, bool CallFunc_IsLocallyControlledPlayer_ReturnValue, class AQtnBodyPawn* K2Node_DynamicCast_AsQtn_Body_Pawn_2, bool K2Node_DynamicCast_bSuccess_2, class AQtnPlayerPawn* CallFunc_GetControllingPlayerPawn_ReturnValue_2, bool CallFunc_IsValid_ReturnValue, class UQtnFrobAccumulatorComponent* K2Node_ComponentBoundEvent_accumulator, class AQtnPawn* K2Node_ComponentBoundEvent_lastFrobbingPawn, bool K2Node_ComponentBoundEvent_isServer, float K2Node_Event_inFillRatio, class AQtnBodyPawn* K2Node_DynamicCast_AsQtn_Body_Pawn_3, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsValid_ReturnValue_1, class AQtnPlayerPawn* CallFunc_GetControllingPlayerPawn_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, class AQtnBodyPawn* K2Node_DynamicCast_AsQtn_Body_Pawn_4, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_IsLocallyControlledPlayer_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, const struct FQtnItemData& K2Node_Event_itemData, bool CallFunc_IsValid_ReturnValue_4, class AActor* K2Node_Event_owningActor, bool CallFunc_IsServer_ReturnValue, class AQtnBodyPawn* K2Node_DynamicCast_AsQtn_Body_Pawn_5, bool K2Node_DynamicCast_bSuccess_5, bool CallFunc_IsHero_ReturnValue, class UQtnInventoryComponent* CallFunc_GetBodyInventory_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_HasLootRecipient_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, const struct FGameplayTag& CallFunc_GetConsumableTypeAsGameplayTag_ReturnValue, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess, TArray<struct FQtnConsumableBehaviourTag>& CallFunc_GetConsumableBehaviourTags_TagsArray, bool CallFunc_GetConsumableBehaviourTags_ReturnValue, const struct FQtnConsumableBehaviourTag& CallFunc_Array_Get_Item, class AQtnBodyPawn* CallFunc_GetOccupiedBodyPawn_ReturnValue, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FGameplayTag& CallFunc_GetConsumableTypeAsGameplayTag_ReturnValue_1, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess_1, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, bool CallFunc_TagIsChildOfParent_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_IsLootRecipientLocalPlayer_ReturnValue, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, const struct FLinearColor& CallFunc_GetRarityColor_ReturnValue, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue_2, const struct FQtnLootSpawnSettings& K2Node_Event_Settings, float K2Node_Event_SpawnDelay, class UNiagaraComponent* CallFunc_GetNiagaraComponent_ReturnValue, const struct FQtnItemData& CallFunc_GetItemData_ReturnValue, class AQtnBodyPawn* K2Node_CustomEvent_Body, int32 K2Node_CustomEvent_OrigLevel, const struct FQtnUpgradeSettings& K2Node_CustomEvent_UpgradeSettings, const struct FQtnRolledUpgradeData& K2Node_CustomEvent_RolledUpgradeData, const struct FGameplayTag& CallFunc_GetConsumableTypeAsGameplayTag_ReturnValue_2, bool CallFunc_IsLocallyControlledPlayer_ReturnValue_2, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue_3, class AQtnPlayerUI* CallFunc_GetLocalPlayerUIBP_localPlayerUI, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerUIBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess_1, class UPlayerHUDScreen_C* CallFunc_GetScreen_ReturnValue, class UGoalHUD_C* CallFunc_GetUserWidget_ReturnValue, class AQtnBodyPawn* CallFunc_GetOccupiedBodyPawn_ReturnValue_1, float CallFunc_RandomFloat_ReturnValue, class UPerk_AirborneCalories_C* CallFunc_FindPerk_ReturnValue, bool CallFunc_IsValid_ReturnValue_5, float CallFunc_GetValueOfPerk_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, class AQtnBodyPawn* CallFunc_GetOccupiedBodyPawn_ReturnValue_2, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue, const struct FGameplayTag& CallFunc_GetCurrencyTypeAsGameplayTag_ReturnValue, class AQtnBodyPawn* CallFunc_GetOccupiedBodyPawn_ReturnValue_3, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue_1, const struct FGameplayTag& CallFunc_GetCurrencyTypeAsGameplayTag_ReturnValue_1, class UClass* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_IsValid_ReturnValue_6, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue_4, class UNiagaraComponent* CallFunc_GetNiagaraComponent_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_7, class AQtnBodyPawn* CallFunc_GetOccupiedBodyPawn_ReturnValue_4, const struct FGameplayTag& CallFunc_GetCurrencyTypeAsGameplayTag_ReturnValue_2, class UBodypawnHealingComponent_C* CallFunc_GetComponentByClass_ReturnValue, class UQtnAttributeComponent* CallFunc_GetAttributeComponent_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface, bool K2Node_DynamicCast_bSuccess_6, class UClass* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, float CallFunc_GetAttributeValue_ReturnValue, float K2Node_Event_Progress, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue_5, float CallFunc_GetFloatValue_ReturnValue, const struct FRotator& CallFunc_RLerp_ReturnValue, float CallFunc_Vector_Distance_ReturnValue, const struct FVector& CallFunc_Vector_Up_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_VLerp_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocationAndRotation_SweepHitResult, bool CallFunc_K2_SetActorLocationAndRotation_ReturnValue, enum class EEndPlayReason K2Node_Event_EndPlayReason, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, bool CallFunc_IsLocalCutsceneActive_doWorldCleanup, bool CallFunc_IsLocalCutsceneActive_ReturnValue, bool K2Node_CustomEvent_isCutsceneActive, bool K2Node_CustomEvent_doWorldCleanup, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue_1, float Temp_float_Variable, bool CallFunc_IsLocallyControlledPlayer_ReturnValue_3, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UNiagaraComponent* CallFunc_GetNiagaraComponent_ReturnValue_2, bool CallFunc_HasTag_ReturnValue, bool CallFunc_IsValid_ReturnValue_8, bool CallFunc_SetStaticMesh_ReturnValue, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue_6, class AQtnPlayerUI* CallFunc_GetLocalPlayerUIBP_localPlayerUI_1, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerUIBP_outputPin_1, bool K2Node_SwitchEnum_CmpSuccess_2, class UPlayerHUDScreen_C* CallFunc_GetScreen_ReturnValue_1, class UCombatHUDScreen_C* CallFunc_GetSubScreen_ReturnValue, class UUserWidget* CallFunc_GetMainWidget_ReturnValue, class UCombatHUD_C* K2Node_DynamicCast_AsCombat_HUD, bool K2Node_DynamicCast_bSuccess_7, TScriptInterface<class IQtnItemDataProviderInterface> CallFunc_PickupNotification_Pickup_CastInput);
};

}

