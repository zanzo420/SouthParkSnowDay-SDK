#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x550 - 0x538)
// BlueprintGeneratedClass Cine_KennyPreBoss.Cine_KennyPreBoss_C
class ACine_KennyPreBoss_C : public ACinematicSceneCharacter_BP_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x538(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UQtnGoalMarkerComponent*               QtnGoalMarker;                                     // 0x540(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         CollisionCheck;                                    // 0x548(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ACine_KennyPreBoss_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void PlayNextShot();
	void EndScene();
	void CleanUpCutscene();
	void PostFadeStartScene();
	void ExecuteUbergraph_Cine_KennyPreBoss(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UUserWidget* CallFunc_GetMainWidget_ReturnValue, class UCutsceneHUD_Widget_C* K2Node_DynamicCast_AsCutscene_HUD_Widget, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchInteger_CmpSuccess, int32 Temp_int_Array_Index_Variable_1, float CallFunc_Multiply_IntFloat_ReturnValue, class APlayerPaperDoll_BP_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class APlayerPaperDoll_BP_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1);
};

}


