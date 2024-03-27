#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x30 - 0x30)
// BlueprintGeneratedClass AnimWindowHideWeapons.AnimWindowHideWeapons_C
class UAnimWindowHideWeapons_C : public UQtnAnimWindow
{
public:

	static class UClass* StaticClass();
	static class UAnimWindowHideWeapons_C* GetDefaultObj();

	void OnVerbWindowEnd(class AQtnPawn* AffectedPawn, class UQtnVerb* EncompassingVerb, bool Interrupted, class AQtnItem* CallFunc_GetOwningItem_ReturnValue, class ABaseWeapon_C* K2Node_DynamicCast_AsBase_Weapon, bool K2Node_DynamicCast_bSuccess);
	void OnVerbWindowBegin(class AQtnPawn* AffectedPawn, class UQtnVerb* EncompassingVerb, float TotalDuration, class AQtnBodyPawn* K2Node_DynamicCast_AsQtn_Body_Pawn, bool K2Node_DynamicCast_bSuccess, class AQtnItem* CallFunc_GetActualEquippedItem_ReturnValue, class AQtnItem* CallFunc_GetActualEquippedItem_ReturnValue_1, class ABaseWeapon_C* K2Node_DynamicCast_AsBase_Weapon, bool K2Node_DynamicCast_bSuccess_1, class ABaseWeapon_C* K2Node_DynamicCast_AsBase_Weapon_1, bool K2Node_DynamicCast_bSuccess_2);
};

}


