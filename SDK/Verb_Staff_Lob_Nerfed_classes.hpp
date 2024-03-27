#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0xB58 - 0xB38)
// BlueprintGeneratedClass Verb_Staff_Lob_Nerfed.Verb_Staff_Lob_Nerfed_C
class UVerb_Staff_Lob_Nerfed_C : public UVerb_Staff_Lob_Archetype_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB38(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<class UClass*>                        All_Possible_Projectiles;                          // 0xB40(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                LastSpawnedProjectile;                             // 0xB50(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UVerb_Staff_Lob_Nerfed_C* GetDefaultObj();

	void OnDebugDisplay(class UQtnDebugWrapper* DebugWrapper, const class FString& CallFunc_GetClassNameWithoutSuffix_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue);
	void Spawn_Projectile_from_Local(const struct FVector& CallFunc_Get_Projectile_Aim_Return_Value_Start_Position, const struct FVector& CallFunc_Get_Projectile_Aim_Return_Value_Velocity);
	void Spawn_Nerfed_Projectile(const struct FVector& StartPosition, const struct FVector& Velocity);
	void ExecuteUbergraph_Verb_Staff_Lob_Nerfed(int32 EntryPoint, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, const struct FVector& K2Node_CustomEvent_startPosition, const struct FVector& K2Node_CustomEvent_velocity, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class UClass* CallFunc_Array_Random_OutItem, int32 CallFunc_Array_Random_OutIndex, class ANerfedProjectile_Base_C* CallFunc_SpawnActor_ServerOnly_ReturnValue);
};

}


