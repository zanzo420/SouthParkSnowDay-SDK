#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x15E0 - 0x15D0)
// BlueprintGeneratedClass BodyPawnAIButters.BodyPawnAIButters_C
class ABodyPawnAIButters_C : public ABodyPawnAI_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x15D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UQtnGoalMarkerComponent*               QtnGoalMarker;                                     // 0x15D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABodyPawnAIButters_C* GetDefaultObj();

	void CanAcceptEnemyUpgrades(bool* Accept);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BodyPawnAIButters(int32 EntryPoint);
};

}


