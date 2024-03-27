#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x248 - 0x248)
// BlueprintGeneratedClass StatusEffect_BS_StupidProjectiles.StatusEffect_BS_StupidProjectiles_C
class UStatusEffect_BS_StupidProjectiles_C : public UStatusEffect_BS_Nerfed_C
{
public:

	static class UClass* StaticClass();
	static class UStatusEffect_BS_StupidProjectiles_C* GetDefaultObj();

	void OnNerfStart_SideEffects(bool CallFunc_IsServer_ReturnValue, class UFTUXDataBag_C* CallFunc_GetLocalProgressDataBag_ReturnValue, const struct FQtnReplicatedSaveData& CallFunc_GetReplicatedEnemyBSSaveData_ServerOnly_combinedReplicatedSaveData);
};

}


