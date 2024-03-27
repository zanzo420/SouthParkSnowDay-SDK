#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1F (0x4E0 - 0x4C1)
// BlueprintGeneratedClass GenAdult_Actor_Shovel.GenAdult_Actor_Shovel_C
class AGenAdult_Actor_Shovel_C : public ACuckooActor_BP_C
{
public:
	uint8                                        Pad_320A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4C8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                     SnowShovel_Sys;                                    // 0x4D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Shovel_SM;                                         // 0x4D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AGenAdult_Actor_Shovel_C* GetDefaultObj();

	void AnimNotifyCuckoo(bool On, int32 Index);
	void ExecuteUbergraph_GenAdult_Actor_Shovel(int32 EntryPoint, bool K2Node_Event_On, int32 K2Node_Event_index);
};

}


