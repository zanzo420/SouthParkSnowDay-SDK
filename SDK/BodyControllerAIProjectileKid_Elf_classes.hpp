#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x17 (0x694 - 0x67D)
// BlueprintGeneratedClass BodyControllerAIProjectileKid_Elf.BodyControllerAIProjectileKid_Elf_C
class ABodyControllerAIProjectileKid_Elf_C : public ABodyControllerAISwarmer_C
{
public:
	uint8                                        Pad_44D5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x680(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        LifetimeSeconds;                                   // 0x688(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MinLifeSeconds;                                    // 0x68C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaxLifeSeconds;                                    // 0x690(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABodyControllerAIProjectileKid_Elf_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void OnThink(float TimeSinceLastThought);
	void OnQtnReadyForGameplay(class AQtnBodyPawn* bodyPawn);
	void ExecuteUbergraph_BodyControllerAIProjectileKid_Elf(int32 EntryPoint, float K2Node_Event_timeSinceLastThought, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, class AQtnBodyPawn* CallFunc_GetBodyPawn_ReturnValue, class AQtnPawn* CallFunc_GetRelevantEnemy_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, const struct FQtnVerbRequest& K2Node_MakeStruct_QtnVerbRequest, class AQtnBodyPawn* K2Node_Event_bodyPawn, class AQtnBodyPawn* CallFunc_GetBodyPawn_ReturnValue_1);
};

}


