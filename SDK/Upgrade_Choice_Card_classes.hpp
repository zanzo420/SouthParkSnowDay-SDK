#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF (0x720 - 0x711)
// BlueprintGeneratedClass Upgrade_Choice_Card.Upgrade_Choice_Card_C
class AUpgrade_Choice_Card_C : public ABS_Choice_Card_C
{
public:
	uint8                                        Pad_2DB6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x718(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class AUpgrade_Choice_Card_C* GetDefaultObj();

	void ExecuteUbergraph_Upgrade_Choice_Card(int32 EntryPoint);
};

}


