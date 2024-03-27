#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x17 (0x4D8 - 0x4C1)
// BlueprintGeneratedClass GenAdult_Actor_Cold.GenAdult_Actor_Cold_C
class AGenAdult_Actor_Cold_C : public ACuckooActor_BP_C
{
public:
	uint8                                        Pad_50A1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4C8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                     SnowShovel_Sys;                                    // 0x4D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AGenAdult_Actor_Cold_C* GetDefaultObj();

	void SpawnSNow();
	void ReleaseSnow();
	void ExecuteUbergraph_GenAdult_Actor_Cold(int32 EntryPoint);
};

}


