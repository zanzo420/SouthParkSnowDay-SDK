#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF (0x8E8 - 0x8D9)
// BlueprintGeneratedClass DefensiveEncroacherSpear.DefensiveEncroacherSpear_C
class ADefensiveEncroacherSpear_C : public ABaseWeapon_C
{
public:
	uint8                                        Pad_1C37[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMeshComponent*                  Shield;                                            // 0x8E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ADefensiveEncroacherSpear_C* GetDefaultObj();

	void HandleUnequip_Derived(class AQtnBodyPawn* bodyPawn);
	void HandleEquip_Derived(class AQtnBodyPawn* bodyPawn);
	void Set_Visibility(bool Is_Visible);
};

}


