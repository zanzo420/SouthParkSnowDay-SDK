#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB (0x688 - 0x67D)
// BlueprintGeneratedClass BodyControllerAISwarmer_Marshwalker.BodyControllerAISwarmer_Marshwalker_C
class ABodyControllerAISwarmer_Marshwalker_C : public ABodyControllerAISwarmer_C
{
public:
	uint8                                        Pad_43EF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x680(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABodyControllerAISwarmer_Marshwalker_C* GetDefaultObj();

	void OnQtnReadyForGameplay(class AQtnBodyPawn* bodyPawn);
	void ExecuteUbergraph_BodyControllerAISwarmer_Marshwalker(int32 EntryPoint, const struct FQtnRangedFloat& K2Node_MakeStruct_QtnRangedFloat, class AQtnBodyPawn* K2Node_Event_bodyPawn);
};

}


