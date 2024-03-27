#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0xAA0 - 0xA80)
// BlueprintGeneratedClass Bombardier_RangedVerb_BS_ProjectileKids.Bombardier_RangedVerb_BS_ProjectileKids_C
class UBombardier_RangedVerb_BS_ProjectileKids_C : public UBombardier_RangedVerb_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA80(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                LaunchedCharacterClass;                            // 0xA88(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        KidsInBurst;                                       // 0xA90(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentBurstCount;                                 // 0xA94(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AQtnBodyPawn*                          IntendedBodyPawnTarget;                            // 0xA98(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBombardier_RangedVerb_BS_ProjectileKids_C* GetDefaultObj();

	bool CanVerbStart(class UObject* PotentialTarget, bool CallFunc_CanVerbStart_ReturnValue);
	void FireProjectile_ServerOnly(const struct FVector& Launch_Velocity, const struct FVector& Muzzle_Location, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, class AQtnBodyController* CallFunc_GetBodyController_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_1, class AQtnSkirmish* CallFunc_GetOwningSkirmish_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FTransform& CallFunc_MakeTransform_ReturnValue, int32 Temp_int_Variable, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_2, class ABodyPawnAI_C* CallFunc_SpawnActor_ServerOnly_ReturnValue, class AQtnBodyController* CallFunc_GetBodyController_ReturnValue_1);
	void OnVerbInit(bool IsServer);
	void ContinueVolley(const struct FVector& LaunchVelocity, const struct FVector& MuzzleLocation);
	void OnVerbStart(class UObject* IntendedTarget, bool IsServer);
	void LaunchFX_MULTI(class AQtnBodyPawn* Body);
	void ExecuteUbergraph_Bombardier_RangedVerb_BS_ProjectileKids(int32 EntryPoint, class AQtnBodyPawn* K2Node_CustomEvent_Body, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue, const struct FVector& K2Node_CustomEvent_LaunchVelocity, const struct FVector& K2Node_CustomEvent_MuzzleLocation, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, bool K2Node_Event_isServer_1, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue, class UObject* K2Node_Event_intendedTarget, bool K2Node_Event_isServer, class AQtnBodyPawn* K2Node_DynamicCast_AsQtn_Body_Pawn, bool K2Node_DynamicCast_bSuccess);
};

}


