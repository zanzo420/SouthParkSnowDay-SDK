#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x548 - 0x538)
// BlueprintGeneratedClass Cine_ElfAmbush.Cine_ElfAmbush_C
class ACine_ElfAmbush_C : public ACinematicSceneCharacter_BP_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x538(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                     Snow;                                              // 0x540(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ACine_ElfAmbush_C* GetDefaultObj();

	void PlayNextShot();
	void PostFadeStartScene();
	void ExecuteUbergraph_Cine_ElfAmbush(int32 EntryPoint, const struct FTransform& Temp_struct_Variable, int32 Temp_int_Array_Index_Variable, bool K2Node_SwitchInteger_CmpSuccess, const struct FTransform& Temp_struct_Variable_1, class APlayerPaperDoll_BP_C* CallFunc_Array_Get_Item, class UClass* Temp_class_Variable, class APlayerPaperDoll_BP_C* CallFunc_Array_Get_Item_1, int32 Temp_int_Loop_Counter_Variable, class APlayerPaperDoll_BP_C* CallFunc_Array_Get_Item_2, int32 CallFunc_Add_IntInt_ReturnValue, class AScriptedSkeletalActor_Trial_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class APlayerPaperDoll_BP_C* CallFunc_Array_Get_Item_3, class UNiagaraComponent* CallFunc_AddComponent_ReturnValue, class UNiagaraComponent* CallFunc_AddComponent_ReturnValue_1, TArray<class UNiagaraComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, class UNiagaraComponent* CallFunc_Array_Get_Item_4, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
};

}


