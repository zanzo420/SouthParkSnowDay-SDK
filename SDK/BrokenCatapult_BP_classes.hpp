#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2A3 (0x5C0 - 0x31D)
// BlueprintGeneratedClass BrokenCatapult_BP.BrokenCatapult_BP_C
class ABrokenCatapult_BP_C : public ABP_Catapult_C
{
public:
	uint8                                        Pad_3E21[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x320(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                Condom3;                                           // 0x328(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Condom2;                                           // 0x330(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Condom1;                                           // 0x338(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UQtnFrobbableComponent*                QtnFrobbable;                                      // 0x340(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         Repaired;                                          // 0x348(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_3E22[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TotalPieces;                                       // 0x34C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentPieces;                                     // 0x350(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E23[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            RepairStatusUpdate;                                // 0x358(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class ACondom_BP_C*>                  Pieces;                                            // 0x368(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class ABodyPawnPlayer_C*>             PlayersWhoNeedAirControlReset;                     // 0x378(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class ABodyPawnPlayer_C*>             PlayersToRemove;                                   // 0x388(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, ContainsInstancedReference)
	FMulticastInlineDelegateProperty_            FrobbedComplete;                                   // 0x398(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         HasFrobbedToRepair;                                // 0x3A8(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_3E24[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FOnScreen_Texture                     OnscreenIconData;                                  // 0x3B0(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               IconOnscreen;                                      // 0x3D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               IconOffscreen;                                     // 0x3E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FOffScreen_Texture                    OffscreenIconData;                                 // 0x3E8(0x20)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FIndicatorData                        Indicator_Data;                                    // 0x408(0x129)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	uint8                                        Pad_3E25[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         ReadyForRepair;                                    // 0x538(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_3E26[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               IconOnscreen_Generic;                              // 0x540(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class UClass*, class UMaterialInterface*> CondomTextureMap;                                  // 0x548(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class ACondom_BP_C*>                  CollectedPieces;                                   // 0x598(0x10)(Edit, BlueprintVisible, Net, DisableEditOnTemplate, DisableEditOnInstance, RepNotify)
	class FText                                  Frob_Prompt;                                       // 0x5A8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class ABrokenCatapult_BP_C* GetDefaultObj();

	void GetIndicatorData(struct FIndicatorData* IndicatorData);
	void OnRep_CollectedPieces(class UMaterialInterface* MatToUse, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool K2Node_SwitchInteger_CmpSuccess, int32 CallFunc_Add_IntInt_ReturnValue, class ACondom_BP_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, class UMaterialInterface* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void LOCAL_UpdateToggleVis();
	void OnRep_currentPieces();
	void OnRep_readyForRepair();
	void CreateIndicatorData();
	void DeliverCatapultPiece(class AQtnBodyPawn* Frobber, const TArray<class ACondom_BP_C*>& TempPieces, bool LOCAL_FoundCatapultPiece, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess, TArray<class UQtnCarryComponent*>& CallFunc_GetManagedCarryComponents_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, class UQtnCarryComponent* CallFunc_Array_Get_Item, class AActor* CallFunc_GetOwner_ReturnValue, class ACondom_BP_C* K2Node_DynamicCast_AsCondom_BP, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_K2_TeleportTo_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void OnRep_hasFrobbed(bool CallFunc_BooleanAND_ReturnValue);
	void UpdateFlyingPlayerList(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsServer_ReturnValue, class ABodyPawnPlayer_C* CallFunc_Array_Get_Item, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void OnRep_repaired();
	void Fling(class AActor* OtherActor, bool* GotFlung, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Fling_gotFlung, bool CallFunc_BooleanAND_ReturnValue);
	void UserConstructionScript();
	void BndEvt__BrokenCatapult_BP_QtnFrobbable_K2Node_ComponentBoundEvent_0_QtnOnFrobEvent__DelegateSignature(class UQtnFrobbableComponent* ThisFrobbable, class AQtnBodyPawn* FrobbingPawn, bool IsServer);
	void ForceDelay(class ABodyPawnPlayer_C* Player);
	void PiecePickup(class ACondom_BP_C* Piece, class AActor* Carrier);
	void Server_BindPiecePickupEvents();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BrokenCatapult_BP(int32 EntryPoint, class UQtnFrobbableComponent* K2Node_ComponentBoundEvent_ThisFrobbable, class AQtnBodyPawn* K2Node_ComponentBoundEvent_FrobbingPawn, bool K2Node_ComponentBoundEvent_isServer, class ABodyPawnPlayer_C* K2Node_CustomEvent_player, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsServer_ReturnValue, class ACondom_BP_C* K2Node_CustomEvent_piece, class AActor* K2Node_CustomEvent_carrier, float K2Node_Event_DeltaSeconds, bool CallFunc_IsServer_ReturnValue_1);
	void FrobbedComplete__DelegateSignature();
	void RepairStatusUpdate__DelegateSignature(int32 Current_Pieces, int32 Total_Pieces);
};

}


