#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x128 - 0x128)
// BlueprintGeneratedClass JobCluster_DouseFire.JobCluster_DouseFire_C
class UJobCluster_DouseFire_C : public UQtnAIJobCluster
{
public:

	static class UClass* StaticClass();
	static class UJobCluster_DouseFire_C* GetDefaultObj();

	bool IsAIJobClusterViable_ServerOnly(class AQtnPawn* Pawn, bool ForInitialAdoption, bool IsOnFire, const struct FVector& Temp_struct_Variable, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UQtnDamageReceptorComponent* CallFunc_GetDamageReceptor_ReturnValue, bool CallFunc_QtnHasPath_ReturnValue, bool CallFunc_HasStatusEffect_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, TScriptInterface<class IQtnNavHelperInterface> K2Node_DynamicCast_AsQtn_Nav_Helper_Interface, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_GetNavLocation_ReturnValue);
};

}


