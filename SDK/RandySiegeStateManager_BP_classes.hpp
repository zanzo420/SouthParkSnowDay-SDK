#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x290 - 0x250)
// BlueprintGeneratedClass RandySiegeStateManager_BP.RandySiegeStateManager_BP_C
class ARandySiegeStateManager_BP_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x250(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x258(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        IceCaveStateProgression;                           // 0x260(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3A3C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ASP_TruckCrash_CinematicBP_C*          TruckCinematicActor;                               // 0x268(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<TSoftObjectPtr<class AActor>>         BlockageToHide;                                    // 0x270(0x10)(Edit, BlueprintVisible)
	TArray<TSoftObjectPtr<class AActor>>         BlockageToUnhide;                                  // 0x280(0x10)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class ARandySiegeStateManager_BP_C* GetDefaultObj();

	void OnRep_SiegeStateProgression();
	void ReceiveBeginPlay();
	void SetSiegeState_Server(int32 IceCaveStateProgress);
	void UpdateSiegeState();
	void ExecuteUbergraph_RandySiegeStateManager_BP(int32 EntryPoint, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, TSoftObjectPtr<class AActor> CallFunc_Array_Get_Item, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess, int32 K2Node_CustomEvent_IceCaveStateProgress, bool CallFunc_IsServer_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, bool CallFunc_IsReadyForGameplay_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, TSoftObjectPtr<class AActor> CallFunc_Array_Get_Item_1, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class AActor* K2Node_DynamicCast_AsActor_1, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1);
};

}


