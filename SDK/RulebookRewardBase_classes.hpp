#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x24 (0x4C - 0x28)
// BlueprintGeneratedClass RulebookRewardBase.RulebookRewardBase_C
class URulebookRewardBase_C : public UObject
{
public:
	class FText                                  RewardName;                                        // 0x28(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        Quantity_to_Add;                                   // 0x40(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          Currency_to_Add;                                   // 0x44(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class URulebookRewardBase_C* GetDefaultObj();

	void Calculate_Perk_Multiplier(class AQtnBodyPawn* Player, float* Perk_Multiplier, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UPerk_RulebookRewardBonus_C* CallFunc_GetClassDefaultObject_ReturnValue, class AQtnPlayerController* CallFunc_GetLocalPlayerControllerBP_localPlayerController, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerControllerBP_outputPin, class UQtnLocalOptionsSaveData* CallFunc_GetSaveLoadDataBP_localOptionsSaveData, class UQtnCloudOptionsSaveData* CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData, class UQtnProgressSaveData* CallFunc_GetSaveLoadDataBP_progressSaveData, enum class EQtnOutputValidityEnum CallFunc_GetSaveLoadDataBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, class UPerkDataBag_C* CallFunc_GetCustomDataBag_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FQtnSavedPerkLoadoutData& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue);
	void Apply_Reward(class UObject* Object_That_Has_World, TArray<class AQtnBodyPawn*>& CallFunc_GetAllQtnPlayerBodies_foundPlayerBodies, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, class AQtnBodyPawn* CallFunc_Array_Get_Item, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue);
};

}


