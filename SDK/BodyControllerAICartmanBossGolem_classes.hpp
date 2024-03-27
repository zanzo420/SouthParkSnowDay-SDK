#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB (0x688 - 0x67D)
// BlueprintGeneratedClass BodyControllerAICartmanBossGolem.BodyControllerAICartmanBossGolem_C
class ABodyControllerAICartmanBossGolem_C : public ABodyControllerAI_C
{
public:
	uint8                                        Pad_2DE8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x680(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABodyControllerAICartmanBossGolem_C* GetDefaultObj();

	void OnQtnReadyForGameplay(class AQtnBodyPawn* bodyPawn);
	void ExecuteUbergraph_BodyControllerAICartmanBossGolem(int32 EntryPoint, const struct FQtnRangedFloat& K2Node_MakeStruct_QtnRangedFloat, class AQtnBodyPawn* K2Node_Event_bodyPawn);
};

}


