#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x268 - 0x250)
// BlueprintGeneratedClass TrainingMomentManager.TrainingMomentManager_C
class ATrainingMomentManager_C : public AActor
{
public:
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x250(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class ATrainingMoment_BP_C*>          TrainingMoments;                                   // 0x258(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate)

	static class UClass* StaticClass();
	static class ATrainingMomentManager_C* GetDefaultObj();

};

}


