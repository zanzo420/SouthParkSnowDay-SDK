#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x3C0 - 0x398)
// BlueprintGeneratedClass ButtersSmallBook_Actor.ButtersSmallBook_Actor_C
class AButtersSmallBook_Actor_C : public AButters_Actor_BP_C
{
public:
	class USkeletalMeshComponent*                Book;                                              // 0x398(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class UAnimMontage*>                  ButtersAnims;                                      // 0x3A0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UAnimSequence*>                 BookAnims;                                         // 0x3B0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class AButtersSmallBook_Actor_C* GetDefaultObj();

	void FindBookAnim(class UAnimMontage* Anim, class UAnimSequence** OutBookAnim, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UAnimSequence* CallFunc_Array_Get_Item, class UAnimMontage* CallFunc_Array_Get_Item_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
};

}


