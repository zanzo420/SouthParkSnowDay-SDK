#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x260 - 0x250)
// BlueprintGeneratedClass CinematicSceneSolo_Archetype.CinematicSceneSolo_Archetype_C
class ACinematicSceneSolo_Archetype_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x250(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x258(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ACinematicSceneSolo_Archetype_C* GetDefaultObj();

	void EndScene_Server(class AQtnBodyPawn* BodyToEndScene);
	void ExecuteUbergraph_CinematicSceneSolo_Archetype(int32 EntryPoint, class AQtnBodyPawn* K2Node_CustomEvent_BodyToEndScene);
};

}


