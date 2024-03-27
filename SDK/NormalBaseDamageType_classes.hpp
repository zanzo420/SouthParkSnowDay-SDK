#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1A (0x1AA - 0x190)
// BlueprintGeneratedClass NormalBaseDamageType.NormalBaseDamageType_C
class UNormalBaseDamageType_C : public UQtnDamageType
{
public:
	class FText                                  Type_Description;                                  // 0x190(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         Always_Cause_Reaction;                             // 0x1A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         AllowPlayerJuggling;                               // 0x1A9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UNormalBaseDamageType_C* GetDefaultObj();

	void Test_Whether_Normal_Status_Effect_Thresholding_Should_Apply(class AActor* Actor_Being_Damaged, const struct FQtnDamageInfo& Incoming_Damage, bool* Thresholding_Should_Apply, bool AllowDamage, const struct FQtnHitReactionInfo& CallFunc_GetDefaultHitReaction_suggestedHitReact, class UClass* CallFunc_GetObjectClass_ReturnValue, class AQtnPawn* K2Node_DynamicCast_AsQtn_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue, class UQtnDamageReceptorComponent* CallFunc_GetDamageReceptor_ReturnValue, bool CallFunc_CanHitReact_ReturnValue, bool CallFunc_HasDamageImmunity_permanentlyImmune, bool CallFunc_HasDamageImmunity_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_HasAuthority_ReturnValue);
	void Apply_Threshold_Attribute_For_Status_Effects(class UClass* Threshold_Attribute_To_Add, class AActor* Target, float Amount_To_Add_To_Threshold, bool ShouldModify, class UQtnAttributeComponent* Victim_s_Actor_Attributes, bool CallFunc_Greater_FloatFloat_ReturnValue, class AQtnBodyPawn* K2Node_DynamicCast_AsQtn_Body_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValidClass_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class UQtnAttribute* CallFunc_GetClassDefaultObject_ReturnValue, class UQtnAttributeComponent* CallFunc_GetAttributeComponent_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_HasAttribute_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface_1, bool K2Node_DynamicCast_bSuccess_2, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface_2, bool K2Node_DynamicCast_bSuccess_3, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface_3, bool K2Node_DynamicCast_bSuccess_4, class UQtnAttribute* CallFunc_AddAttribute_ReturnValue);
};

}


