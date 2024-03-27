#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x88 - 0x78)
// BlueprintGeneratedClass QtnEnemyUpgradeArchetype.QtnEnemyUpgradeArchetype_C
class UQtnEnemyUpgradeArchetype_C : public UQtnUpgrade
{
public:
	TArray<TSoftClassPtr<class AQtnBodyPawn>>    AllowedEnemyTypes;                                 // 0x78(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UQtnEnemyUpgradeArchetype_C* GetDefaultObj();

	bool K2_CanUpgradeBeSlotted(class UQtnUpgradeSlot* TargetSlot, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, bool CallFunc_K2_CanUpgradeBeSlotted_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, TSoftClassPtr<class AQtnBodyPawn> CallFunc_Conv_ClassToSoftClassReference_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
};

}


