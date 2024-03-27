#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x80 (0x5B8 - 0x538)
// BlueprintGeneratedClass Cine_FTUXIntro.Cine_FTUXIntro_C
class ACine_FTUXIntro_C : public ACinematicSceneCharacter_BP_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x538(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                     CinematicLocalSnow_Sys;                            // 0x540(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     Trail;                                             // 0x548(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UQtnVOComponent*                       QtnVO;                                             // 0x550(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Door;                                              // 0x558(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  DoorFrame;                                         // 0x560(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class AActor>                 HouseSoftRef;                                      // 0x568(0x28)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftObjectPtr<class AActor>                 TeleportTarget;                                    // 0x590(0x28)(Edit, BlueprintVisible, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ACine_FTUXIntro_C* GetDefaultObj();

	void PlayNextShot();
	void EndScene();
	void EndPointTeleport();
	void CleanUpCutscene();
	void PostFadeStartScene();
	void ExecuteUbergraph_Cine_FTUXIntro(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, bool K2Node_SwitchInteger_CmpSuccess, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess, class AHub_House_BP_C* K2Node_DynamicCast_AsHub_House_BP, bool K2Node_DynamicCast_bSuccess_1, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1, class AActor* K2Node_DynamicCast_AsActor_1, bool K2Node_DynamicCast_bSuccess_2, class AHub_House_BP_C* K2Node_DynamicCast_AsHub_House_BP_1, bool K2Node_DynamicCast_bSuccess_3, TArray<class AQtnBodyPawn*>& CallFunc_GetAllQtnPlayerBodies_foundPlayerBodies, class AQtnBodyPawn* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_3, class AActor* K2Node_DynamicCast_AsActor_2, bool K2Node_DynamicCast_bSuccess_4, class AActor* K2Node_DynamicCast_AsActor_3, bool K2Node_DynamicCast_bSuccess_5, bool CallFunc_IsValid_ReturnValue, class APlayerPaperDoll_BP_C* CallFunc_Array_Get_Item_1, int32 Temp_int_Loop_Counter_Variable, class APlayerPaperDoll_BP_C* CallFunc_Array_Get_Item_2, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerPaperDoll_BP_C* CallFunc_Array_Get_Item_3, class APlayerPaperDoll_BP_C* CallFunc_Array_Get_Item_4);
};

}


