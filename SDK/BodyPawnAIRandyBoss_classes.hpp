#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x15E0 - 0x15D0)
// BlueprintGeneratedClass BodyPawnAIRandyBoss.BodyPawnAIRandyBoss_C
class ABodyPawnAIRandyBoss_C : public ABodyPawnAI_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x15D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UQtnGoalMarkerComponent*               QtnGoalMarker;                                     // 0x15D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABodyPawnAIRandyBoss_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BodyPawnAIRandyBoss(int32 EntryPoint, class UStatusEffect_DeathProof_C* CallFunc_AddStatusEffect_ServerOnly_ReturnValue, bool CallFunc_IsServer_ReturnValue);
};

}


