#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x130 - 0x128)
// BlueprintGeneratedClass BP_NameplateManagerComponent.BP_NameplateManagerComponent_C
class UBP_NameplateManagerComponent_C : public UQtnPlayerNameplateManagerComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x128(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_NameplateManagerComponent_C* GetDefaultObj();

	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_NameplateManagerComponent(int32 EntryPoint, float K2Node_Event_DeltaSeconds);
};

}


