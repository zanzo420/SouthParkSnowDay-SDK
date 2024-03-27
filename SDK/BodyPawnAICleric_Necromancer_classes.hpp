#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x15E8 - 0x15D8)
// BlueprintGeneratedClass BodyPawnAICleric_Necromancer.BodyPawnAICleric_Necromancer_C
class ABodyPawnAICleric_Necromancer_C : public ABodyPawnAICleric_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x15D8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UClericResurrectionBurstVerb_C*        Resurrection_Verb;                                 // 0x15E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABodyPawnAICleric_Necromancer_C* GetDefaultObj();

	void HandleDeath();
	void ExecuteUbergraph_BodyPawnAICleric_Necromancer(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue);
};

}


