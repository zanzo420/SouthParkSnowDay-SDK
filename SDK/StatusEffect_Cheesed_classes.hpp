#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x160 - 0x120)
// BlueprintGeneratedClass StatusEffect_Cheesed.StatusEffect_Cheesed_C
class UStatusEffect_Cheesed_C : public UStatusEffect_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x120(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TSubclassOf<class UQtnTeam>                  Team_at_Start;                                     // 0x128(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                        Radius;                                            // 0x130(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Tick_Time;                                         // 0x134(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Team_Swap_Interval;                                // 0x138(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6D14[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AQtnPawn*                              Instigator;                                        // 0x140(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AQtnFXActor*                           FX;                                                // 0x148(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        StatusEffect_MaxTime;                              // 0x150(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Affected_Body_Max_HP;                              // 0x154(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Upgade_HatefulCheesing_Active;                     // 0x158(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Upgade_VampiricCheesing_Active;                    // 0x159(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6D15[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BlastRadius;                                       // 0x15C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UStatusEffect_Cheesed_C* GetDefaultObj();

	void RemoveOverlayFromAttached(class USkeletalMesh* SkeletalMesh, TArray<class UMeshComponent*>& Temp_object_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class UMeshComponent* CallFunc_Array_Get_Item, class USkeletalMeshComponent* K2Node_DynamicCast_AsSkeletal_Mesh_Component, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, TScriptInterface<class IQtnOverlayFXInterface> K2Node_DynamicCast_AsQtn_Overlay_FXInterface, bool K2Node_DynamicCast_bSuccess_1, TArray<class UMeshComponent*>& CallFunc_GetOverlayMeshes_ReturnValue);
	void Gather_Actors_and_Set_Team(bool First_Time, bool Temp_bool_Variable, TSubclassOf<class UQtnTeam> Temp_class_Variable, class AActor* CallFunc_GetAffectedActor_ReturnValue, class AQtnBodyPawn* K2Node_DynamicCast_AsQtn_Body_Pawn, bool K2Node_DynamicCast_bSuccess, TSubclassOf<class UQtnTeam> CallFunc_GetTeam_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, TSubclassOf<class UQtnTeam> K2Node_Select_Default);
	void OnStatusEffectBegin(class AActor* AffectedActor, class AQtnPawn* Instigator);
	void OnStatusEffectEnd(class AActor* AffectedActor, class AQtnPawn* Instigator, bool IsActorBeingDestroyed);
	void OnStatusEffectTick(float DeltaSeconds);
	void Process_Damage_Effects(float Damage_Amount);
	void ExecuteUbergraph_StatusEffect_Cheesed(int32 EntryPoint, bool CallFunc_IsServer_ReturnValue, class UBrainwash_Verb_C* CallFunc_GetExistingVerb_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue, class UQtnAttributeComponent* CallFunc_GetComponentByClass_ReturnValue, float K2Node_Event_DeltaSeconds, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_GetAttributeValue_self_CastInput, float CallFunc_GetAttributeValue_ReturnValue, class AActor* K2Node_Event_affectedActor, class AQtnPawn* K2Node_Event_instigator, bool K2Node_Event_isActorBeingDestroyed, class ABodyPawnAI_C* K2Node_DynamicCast_AsBody_Pawn_AI, bool K2Node_DynamicCast_bSuccess, class AQtnBodyPawn* K2Node_DynamicCast_AsQtn_Body_Pawn, bool K2Node_DynamicCast_bSuccess_1, class UQtnDamageReceptorComponent* CallFunc_GetDamageReceptor_ReturnValue, class UDamageReceptorBodyPawn_C* K2Node_DynamicCast_AsDamage_Receptor_Body_Pawn, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsAliveAndConscious_ReturnValue, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue_1, class UQtnAttributeComponent* CallFunc_GetComponentByClass_ReturnValue_1, class AQtnBodyPawn* K2Node_DynamicCast_AsQtn_Body_Pawn_1, bool K2Node_DynamicCast_bSuccess_3, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface, bool K2Node_DynamicCast_bSuccess_4, class UBrainwash_Verb_C* CallFunc_GetExistingVerb_ReturnValue_1, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_1, class UQtnAttributeComponent* CallFunc_GetComponentByClass_ReturnValue_2, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface_1, bool K2Node_DynamicCast_bSuccess_5, class AQtnBodyPawn* K2Node_DynamicCast_AsQtn_Body_Pawn_2, bool K2Node_DynamicCast_bSuccess_6, bool CallFunc_IsServer_ReturnValue_1, class UBrainwash_Verb_C* CallFunc_GetExistingVerb_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsServer_ReturnValue_2, bool Temp_bool_Variable, class AActor* K2Node_Event_affectedActor_1, class AQtnPawn* K2Node_Event_instigator_1, class UBrainwash_Verb_C* CallFunc_GetExistingVerb_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_3, class AQtnBodyPawn* K2Node_DynamicCast_AsQtn_Body_Pawn_3, bool K2Node_DynamicCast_bSuccess_7, float K2Node_Select_Default, TSubclassOf<class UQtnTeam> CallFunc_GetTeam_ReturnValue, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue, float K2Node_CustomEvent_Damage_Amount, class UBrainwash_Verb_C* CallFunc_GetExistingVerb_ReturnValue_4, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess_8, float CallFunc_Multiply_FloatFloat_ReturnValue, class AActor* CallFunc_GetAffectedActor_ReturnValue, class AActor* CallFunc_GetAffectedActor_ReturnValue_1, bool CallFunc_IsServer_ReturnValue_3, class UBrainwash_Verb_C* CallFunc_GetExistingVerb_ReturnValue_5, const struct FQtnDamageInfo& K2Node_MakeStruct_QtnDamageInfo, bool CallFunc_IsServer_ReturnValue_4);
};

}


