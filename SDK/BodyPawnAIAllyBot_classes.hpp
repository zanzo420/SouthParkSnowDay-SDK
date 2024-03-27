#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA8 (0x1678 - 0x15D0)
// BlueprintGeneratedClass BodyPawnAIAllyBot.BodyPawnAIAllyBot_C
class ABodyPawnAIAllyBot_C : public ABodyPawnAI_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x15D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UQtnGoalMarkerComponent*               QtnGoalMarker;                                     // 0x15D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPlayerUIComponent_C*                  PlayerUIComponent;                                 // 0x15E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDecalComponent*                       FriendlyDecal;                                     // 0x15E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UProximityBasedReviveComponent_C*      ProximityBasedReviveComponent;                     // 0x15F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class UClass*>                        PossibleMeleeWeapons;                              // 0x15F8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly)
	TArray<class UClass*>                        PossibleRangedWeapons;                             // 0x1608(0x10)(Edit, BlueprintVisible, BlueprintReadOnly)
	TArray<class UClass*>                        PossibleEmotes;                                    // 0x1618(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UClass*>                        PossiblePowers;                                    // 0x1628(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        R_botNameIndex;                                    // 0x1638(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_648F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBattlefieldTrackingComponent_C*       CachedBattlefieldTracker;                          // 0x1640(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                SignatureEmote_ServerOnly;                         // 0x1648(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVector>                       PossibleHairColor;                                 // 0x1650(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRandomStream                         Stream;                                            // 0x1660(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor)
	float                                        HealingAmountUponOtherBotDeath;                    // 0x1668(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6490[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                HealingVerb;                                       // 0x1670(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABodyPawnAIAllyBot_C* GetDefaultObj();

	void HealSelfWithPotion(const struct FQtnVerbRequest& K2Node_MakeStruct_QtnVerbRequest);
	void Play_Signature_Emote_Server_Only(class AQtnPawn* Ally, bool ShouldDoIt, class UQtnVerb* CallFunc_GetCurrentActiveVerb_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FQtnVerbRequest& K2Node_MakeStruct_QtnVerbRequest, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_NotEqual_ClassClass_ReturnValue);
	void Setup_Signature_Emote_Server_Only(class UClass* Temp_wildcard_Variable, bool Temp_bool_Variable, class UQtnEmoteVerb_Archetype_C* CallFunc_AddVerb_ServerOnly_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_RandomInteger_ReturnValue);
	void Handle_Combat_Event_Server_Only(bool CombatBeginning, int32 CallFunc_Array_Length_ReturnValue, class ABodyPawnBase_C* CallFunc_Array_Random_OutItem, int32 CallFunc_Array_Random_OutIndex, bool CallFunc_Greater_IntInt_ReturnValue);
	void CanAcceptEnemyUpgrades(bool* Accept);
	void SetupWeapons_ServerOnly(const TArray<class UClass*>& UnlockedMeleeWeapons, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UClass* CallFunc_Array_Random_OutItem, int32 CallFunc_Array_Random_OutIndex, class UClass* CallFunc_Array_Get_Item, int32 CallFunc_Array_AddUnique_ReturnValue, class ABaseWeapon_C* CallFunc_GetClassDefaultObject_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, TScriptInterface<class IItemUIInterfaces_C> K2Node_DynamicCast_AsItem_UIInterfaces, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_GetUnlockData_Locked, class FText CallFunc_GetUnlockData_LockText, class UClass* CallFunc_Array_Random_OutItem_1, int32 CallFunc_Array_Random_OutIndex_1);
	void UserConstructionScript(enum class EQtnUtilitiesSwitchQuality CallFunc_BranchUseSwitchQuality_Branch, bool K2Node_SwitchEnum_CmpSuccess);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void OnQtnReadyForGameplay();
	void LocalCutsceneEvent_Event_0(bool IsCutsceneActive, bool DoWorldCleanup);
	void ExecuteUbergraph_BodyPawnAIAllyBot(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_HasAuthority_ReturnValue, class UQtnAllyBotManager* CallFunc_GetAllyBotManager_ServerOnly_ReturnValue, class UAllyBotManager_C* K2Node_DynamicCast_AsAlly_Bot_Manager, bool K2Node_DynamicCast_bSuccess, enum class EEndPlayReason K2Node_Event_EndPlayReason, class UWorld* CallFunc_GetExpectedWorld_ReturnValue, bool CallFunc_IsEndPlayShuttingDown_ReturnValue, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsLocalCutsceneActive_doWorldCleanup, bool CallFunc_IsLocalCutsceneActive_ReturnValue, const class FString& CallFunc_Choose_Ally_Bot_Name_Server_Only_chosenName, int32 CallFunc_Choose_Ally_Bot_Name_Server_Only_botNameIndex, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue_1, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue_2, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype_1, bool K2Node_DynamicCast_bSuccess_2, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype_2, bool K2Node_DynamicCast_bSuccess_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_HasAuthority_ReturnValue_2, const struct FVector& CallFunc_MakeVector_ReturnValue, class UQtnPlayerNameplateManagerComponent* CallFunc_GetQtnPlayerNameplateManagerComponent_ReturnValue, class UQtnPlayerNameplateManagerComponent* CallFunc_GetQtnPlayerNameplateManagerComponent_ReturnValue_1, const struct FRandomStream& CallFunc_MakeRandomStream_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, float CallFunc_RandomFloatInRangeFromStream_ReturnValue, int32 CallFunc_RandomIntegerFromStream_ReturnValue, bool K2Node_CustomEvent_isCutsceneActive, bool K2Node_CustomEvent_doWorldCleanup, const struct FVector& CallFunc_Array_Get_Item, class UClass* CallFunc_Array_Random_OutItem, int32 CallFunc_Array_Random_OutIndex, class UQtnVerb_Archetype_C* CallFunc_AddVerb_ServerOnly_ReturnValue, class UAllyVerb_PotionKit_C* CallFunc_AddVerb_ServerOnly_ReturnValue_1, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue_3, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype_3, bool K2Node_DynamicCast_bSuccess_4);
};

}


