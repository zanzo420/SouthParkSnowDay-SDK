#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x411 - 0x411)
// BlueprintGeneratedClass QtnSpawner_SnowCloset.QtnSpawner_SnowCloset_C
class AQtnSpawner_SnowCloset_C : public AQtnWaveSpawner_BP_C
{
public:

	static class UClass* StaticClass();
	static class AQtnSpawner_SnowCloset_C* GetDefaultObj();

	void PostSpawnAIPresentation(class AQtnBodyPawn* Body, const TArray<class UAnimMontage*>& AnimsLocal, TArray<class UAnimMontage*>& K2Node_MakeArray_Array, class AQtnBodyController* CallFunc_GetBodyController_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, int32 CallFunc_RandomInteger_ReturnValue, class UAnimMontage* CallFunc_Array_Get_Item, const struct FQtnPawnMontage& K2Node_MakeStruct_QtnPawnMontage, const struct FQtnActionIntention& K2Node_MakeStruct_QtnActionIntention);
};

}


