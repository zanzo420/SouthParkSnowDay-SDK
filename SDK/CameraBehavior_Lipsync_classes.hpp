#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x110 - 0xF0)
// BlueprintGeneratedClass CameraBehavior_Lipsync.CameraBehavior_Lipsync_C
class UCameraBehavior_Lipsync_C : public UQtnCameraBehavior
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xF0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                               Location;                                          // 0xF8(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              Rotation;                                          // 0x104(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UCameraBehavior_Lipsync_C* GetDefaultObj();

	void OnCameraBehaviorTick(float DeltaSeconds);
	void ExecuteUbergraph_CameraBehavior_Lipsync(int32 EntryPoint, float K2Node_Event_DeltaSeconds);
};

}


