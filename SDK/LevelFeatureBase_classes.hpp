#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x260 - 0x250)
// BlueprintGeneratedClass LevelFeatureBase.LevelFeatureBase_C
class ALevelFeatureBase_C : public AActor
{
public:
	class UDayToggleComponent_C*                 DayToggleComponent;                                // 0x250(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x258(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ALevelFeatureBase_C* GetDefaultObj();

	void ToggleOff();
};

}


