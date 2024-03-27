#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x48 - 0x28)
// BlueprintGeneratedClass ContactSubsystemResultSelector_Ricochet.ContactSubsystemResultSelector_Ricochet_C
class UContactSubsystemResultSelector_Ricochet_C : public UQtnContactSubsystemSystemResultSelector
{
public:
	TArray<class UClass*>                        ActorFX_OnRicochet;                                // 0x28(0x10)(Edit, BlueprintVisible)
	TArray<class UClass*>                        ActorFX_NoRicochet;                                // 0x38(0x10)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UContactSubsystemResultSelector_Ricochet_C* GetDefaultObj();

	struct FQtnContactSystemResult SelectSystemResult(class UQtnContactData* ContactData, struct FQtnContactEventInfo& ContactInfo, struct FQtnSurfaceData& SurfaceData, const struct FQtnContactSystemResult& K2Node_MakeStruct_QtnContactSystemResult, class AProjectile_ArrowBase_C* K2Node_DynamicCast_AsProjectile_Arrow_Base, bool K2Node_DynamicCast_bSuccess, const struct FQtnContactSystemResult& K2Node_MakeStruct_QtnContactSystemResult_1);
};

}


