#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x290 - 0x240)
// BlueprintGeneratedClass EnemyPlacementComp.EnemyPlacementComp_C
class UEnemyPlacementComp_C : public UActorPlacementComp_C
{
public:
	TMap<enum class EUIFactionEnum, class UClass*> FactionMap;                                        // 0x240(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UEnemyPlacementComp_C* GetDefaultObj();

	void GetClassToSpawn(enum class EUIFactionEnum Faction, class UClass** Class, class UClass* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
};

}


