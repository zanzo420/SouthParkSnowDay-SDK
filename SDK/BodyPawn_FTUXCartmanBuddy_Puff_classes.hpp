#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF (0x15F8 - 0x15E9)
// BlueprintGeneratedClass BodyPawn_FTUXCartmanBuddy_Puff.BodyPawn_FTUXCartmanBuddy_Puff_C
class ABodyPawn_FTUXCartmanBuddy_Puff_C : public ABodyPawn_CartmanBuddy_C
{
public:
	uint8                                        Pad_7361[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x15F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABodyPawn_FTUXCartmanBuddy_Puff_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BodyPawn_FTUXCartmanBuddy_Puff(int32 EntryPoint);
};

}


