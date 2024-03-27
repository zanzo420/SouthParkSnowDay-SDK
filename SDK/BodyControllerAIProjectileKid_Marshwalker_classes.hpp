#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x14 (0x69C - 0x688)
// BlueprintGeneratedClass BodyControllerAIProjectileKid_Marshwalker.BodyControllerAIProjectileKid_Marshwalker_C
class ABodyControllerAIProjectileKid_Marshwalker_C : public ABodyControllerAISwarmer_Marshwalker_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x688(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        LifetimeSeconds;                                   // 0x690(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MinLifeSeconds;                                    // 0x694(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaxLifeSeconds;                                    // 0x698(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABodyControllerAIProjectileKid_Marshwalker_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void OnThink(float TimeSinceLastThought);
	void ExecuteUbergraph_BodyControllerAIProjectileKid_Marshwalker(int32 EntryPoint, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float K2Node_Event_timeSinceLastThought, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, class AQtnBodyPawn* CallFunc_GetBodyPawn_ReturnValue, const struct FQtnVerbRequest& K2Node_MakeStruct_QtnVerbRequest);
};

}


