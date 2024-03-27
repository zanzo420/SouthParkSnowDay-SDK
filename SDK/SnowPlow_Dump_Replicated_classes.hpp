#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x9 (0x369 - 0x360)
// BlueprintGeneratedClass SnowPlow_Dump_Replicated.SnowPlow_Dump_Replicated_C
class ASnowPlow_Dump_Replicated_C : public ASnowplow_BP_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x360(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         ShowPlow;                                          // 0x368(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)

	static class UClass* StaticClass();
	static class ASnowPlow_Dump_Replicated_C* GetDefaultObj();

	void OnRep_ShowPlow();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_SnowPlow_Dump_Replicated(int32 EntryPoint);
};

}


