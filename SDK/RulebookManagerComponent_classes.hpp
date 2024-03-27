#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x140 - 0xE0)
// BlueprintGeneratedClass RulebookManagerComponent.RulebookManagerComponent_C
class URulebookManagerComponent_C : public UActorComponent
{
public:
	TArray<class UClass*>                        R_AppliedRules;                                    // 0xE0(0x10)(Edit, BlueprintVisible, Net, Transient, DisableEditOnInstance)
	TArray<class UClass*>                        R_AppliedRewards;                                  // 0xF0(0x10)(Edit, BlueprintVisible, Net, Transient, DisableEditOnInstance)
	TArray<class UClass*>                        Not_Yet_Active_Rules;                              // 0x100(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                InactiveCosmeticReward;                            // 0x110(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ALoot_Rulebook_Parent_Frob_C*>  R_registeredRulebooks;                             // 0x118(0x10)(Edit, BlueprintVisible, Net, DisableEditOnTemplate, Transient, DisableEditOnInstance, ContainsInstancedReference)
	int32                                        R_numActivatedRulebooks;                           // 0x128(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_527A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnRulebookActivated;                               // 0x130(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class URulebookManagerComponent_C* GetDefaultObj();

	void RemoveScreenIndicators_ServerOnly(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class ALoot_Rulebook_Parent_Frob_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void Debug_Display_Rule_Book_Manager(class UQtnDebugWrapper*& DebugWrapper, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class ALoot_Rulebook_Parent_Frob_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void UnRegisterRulebook_ServerOnly(class ALoot_Rulebook_Parent_Frob_C* Rulebook, bool CallFunc_Array_RemoveItem_ReturnValue);
	void RegisterRulebook_ServerOnly(class ALoot_Rulebook_Parent_Frob_C* Rulebook, int32 Temp_int_Variable, class UQtnGlobalRunProgress* CallFunc_GetGlobalRunProgress_ServerOnly_ReturnValue, class URulebookSubProgress_C* CallFunc_GetSubProgress_ServerOnly_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void OnRulebookActivated__DelegateSignature(class ALoot_Rulebook_Parent_Frob_C* Rulebook);
};

}


