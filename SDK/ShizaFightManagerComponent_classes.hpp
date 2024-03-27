#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x108 (0x1E8 - 0xE0)
// BlueprintGeneratedClass ShizaFightManagerComponent.ShizaFightManagerComponent_C
class UShizaFightManagerComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xE0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                        PoopletPopulationCap;                              // 0xE8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_69E0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TSoftObjectPtr<class ABodyPawnAIPooplet_C>> RegisteredPooplets;                                // 0xF0(0x10)(Edit, BlueprintVisible, Transient, DisableEditOnInstance, ContainsInstancedReference)
	TArray<TSoftObjectPtr<class ABP_ShizaEmergeLocation_C>> EmergeLocations;                                   // 0x100(0x10)(Edit, BlueprintVisible, Transient, DisableEditOnInstance)
	TMap<class AQtnPawn*, int32>                 PoopletsKilledByPlayers;                           // 0x110(0x50)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, ContainsInstancedReference)
	int32                                        PoopletKillsNeeded;                                // 0x160(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_69E1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TSoftObjectPtr<class ABP_GoalPickup_ShizaCannonAmmo_C>> ShizaAmmoPickups;                                  // 0x168(0x10)(Edit, BlueprintVisible, Transient, DisableEditOnInstance)
	TArray<TSoftObjectPtr<class ABodyPawnAIPooplet_C>> RegisteredAmmoPooplets;                            // 0x178(0x10)(Edit, BlueprintVisible, Transient, DisableEditOnInstance, ContainsInstancedReference)
	TSoftObjectPtr<class AQtnPawn_ShizaHulud_C>  RegisteredShizaBoss;                               // 0x188(0x28)(Edit, BlueprintVisible, Transient, DisableEditOnInstance, InstancedReference, HasGetValueTypeHash)
	TSoftObjectPtr<class ACinematicSceneCharacter_BP_C> SwallowCutscene;                                   // 0x1B0(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<TSoftObjectPtr<class ABP_ShizaTurtleHeadLocation_C>> TurtleHeadLocations;                               // 0x1D8(0x10)(Edit, BlueprintVisible, Transient, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UShizaFightManagerComponent_C* GetDefaultObj();

	void Local_RegisterShizaAmmo(TSoftObjectPtr<class ABP_GoalPickup_ShizaCannonAmmo_C> Ammo, int32 CallFunc_Array_Add_ReturnValue);
	void Local_Refresh_Shiza_Ammo_Pickup_Icons(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, TSoftObjectPtr<class ABP_GoalPickup_ShizaCannonAmmo_C> CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class ABP_GoalPickup_ShizaCannonAmmo_C* K2Node_DynamicCast_AsBP_Goal_Pickup_Shiza_Cannon_Ammo, bool K2Node_DynamicCast_bSuccess);
	void Clear_All_Ammo_Server_Only(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, TSoftObjectPtr<class ABP_GoalPickup_ShizaCannonAmmo_C> CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class ABP_GoalPickup_ShizaCannonAmmo_C* K2Node_DynamicCast_AsBP_Goal_Pickup_Shiza_Cannon_Ammo, bool K2Node_DynamicCast_bSuccess);
	void Kill_All_Pooplets_Server_Only(const struct FQtnDamageInfo& DamageInfo, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class AQtnPawn_ShizaHulud_C* K2Node_DynamicCast_AsQtn_Pawn_Shiza_Hulud, bool K2Node_DynamicCast_bSuccess, TSoftObjectPtr<class ABodyPawnAIPooplet_C> CallFunc_Array_Get_Item, const struct FQtnDamageInfo& K2Node_MakeStruct_QtnDamageInfo, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1, class ABodyPawnAIPooplet_C* K2Node_DynamicCast_AsBody_Pawn_AIPooplet, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Array_Length_ReturnValue, float CallFunc_GetHealth_health, float CallFunc_GetHealth_maxHealth, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsAliveAndConscious_ReturnValue);
	void DebugDisplayShizaFightManager(class UQtnDebugWrapper*& DebugWrapper, const class FString& CallFunc_Conv_IntToString_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2);
	void HandlePoopletDeath(class AQtnPawn* KilledBy, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsPlayerControlled_ReturnValue, bool CallFunc_IsServer_ReturnValue, int32 Temp_int_Variable, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 Temp_int_Variable_1, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void Has_Room_for_More_Pooplets(bool* Result, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void UnRegisterPooplet(TSoftObjectPtr<class ABodyPawnAIPooplet_C>& PoopletBody, bool CallFunc_Array_RemoveItem_ReturnValue);
	void RegisterPooplet(TSoftObjectPtr<class ABodyPawnAIPooplet_C>& PoopletBody, int32 CallFunc_Array_Add_ReturnValue);
	void ReceiveBeginPlay();
	void PlayerEnterWorldEvent_ShizaIcon(class AQtnPlayerPawn* PlayerPawnSoul, class AQtnBodyPawn* OccupiedBodyPawn, bool IsLocalPlayer);
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_ShizaFightManagerComponent(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnPlayerPawn* K2Node_CustomEvent_playerPawnSoul, class AQtnBodyPawn* K2Node_CustomEvent_occupiedBodyPawn, bool K2Node_CustomEvent_isLocalPlayer, float K2Node_Event_DeltaSeconds);
};

}


