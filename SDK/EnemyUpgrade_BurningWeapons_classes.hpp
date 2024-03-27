#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE (0xA8 - 0x9A)
// BlueprintGeneratedClass EnemyUpgrade_BurningWeapons.EnemyUpgrade_BurningWeapons_C
class UEnemyUpgrade_BurningWeapons_C : public UEnemyUpgrade_ChangeDamageTypeArchetype_C
{
public:
	uint8                                        Pad_3695[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UEnemyUpgrade_BurningWeapons_C* GetDefaultObj();

	void UpdateFX(class AQtnItem* Item, bool On);
	void ExecuteUbergraph_EnemyUpgrade_BurningWeapons(int32 EntryPoint, class AQtnItem* K2Node_Event_Item, bool K2Node_Event_On, class ABaseWeapon_C* K2Node_DynamicCast_AsBase_Weapon, bool K2Node_DynamicCast_bSuccess);
};

}


