#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x248 - 0x240)
// BlueprintGeneratedClass PlayerPlacementComp.PlayerPlacementComp_C
class UPlayerPlacementComp_C : public UActorPlacementComp_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x240(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UPlayerPlacementComp_C* GetDefaultObj();

	void SnapPlayerPositionToGround();
	void ExecuteUbergraph_PlayerPlacementComp(int32 EntryPoint);
};

}


