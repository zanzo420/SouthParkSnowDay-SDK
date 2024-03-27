#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass PerkSlot_Widget.PerkSlot_Widget_C
// (None)

class UClass* UPerkSlot_Widget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PerkSlot_Widget_C");

	return Clss;
}


// PerkSlot_Widget_C PerkSlot_Widget.Default__PerkSlot_Widget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPerkSlot_Widget_C* UPerkSlot_Widget_C::GetDefaultObj()
{
	static class UPerkSlot_Widget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPerkSlot_Widget_C*>(UPerkSlot_Widget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PerkSlot_Widget.PerkSlot_Widget_C.SequenceEvent__ENTRYPOINTPerkSlot_Widget_0
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPerkSlot_Widget_C::SequenceEvent__ENTRYPOINTPerkSlot_Widget_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PerkSlot_Widget_C", "SequenceEvent__ENTRYPOINTPerkSlot_Widget_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PerkSlot_Widget.PerkSlot_Widget_C.Social Hub Training Moment Can Click
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Allow_Click                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPerkSlot_Widget_C::Social_Hub_Training_Moment_Can_Click(bool* Allow_Click, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PerkSlot_Widget_C", "Social Hub Training Moment Can Click");

	Params::UPerkSlot_Widget_C_Social_Hub_Training_Moment_Can_Click_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Allow_Click != nullptr)
		*Allow_Click = Parms.Allow_Click;

}


// Function PerkSlot_Widget.PerkSlot_Widget_C.CheckPerkConnectionsForIslands
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               AsSimulation                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UPerkSlot_Widget_C*>  InvalidNodes                                                     (Parm, OutParm, ContainsInstancedReference)
// bool                               LOCAL_IsValidIsland                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UPerkSlot_Widget_C*>  LOCAL_InvalidConnections                                         (Edit, BlueprintVisible, ContainsInstancedReference)
// TArray<class UPerkSlot_Widget_C*>  LOCAL_VisitedConnections                                         (Edit, BlueprintVisible, ContainsInstancedReference)

void UPerkSlot_Widget_C::CheckPerkConnectionsForIslands(bool AsSimulation, TArray<class UPerkSlot_Widget_C*>* InvalidNodes, bool LOCAL_IsValidIsland, const TArray<class UPerkSlot_Widget_C*>& LOCAL_InvalidConnections, const TArray<class UPerkSlot_Widget_C*>& LOCAL_VisitedConnections)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PerkSlot_Widget_C", "CheckPerkConnectionsForIslands");

	Params::UPerkSlot_Widget_C_CheckPerkConnectionsForIslands_Params Parms{};

	Parms.AsSimulation = AsSimulation;
	Parms.LOCAL_IsValidIsland = LOCAL_IsValidIsland;
	Parms.LOCAL_InvalidConnections = LOCAL_InvalidConnections;
	Parms.LOCAL_VisitedConnections = LOCAL_VisitedConnections;

	UObject::ProcessEvent(Func, &Parms);

	if (InvalidNodes != nullptr)
		*InvalidNodes = std::move(Parms.InvalidNodes);

}


// Function PerkSlot_Widget.PerkSlot_Widget_C.RecurseFloodFill
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPerkSlot_Widget_C*          TargetPerk                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UPerkSlot_Widget_C*>  NodeIsland                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               IsSimulation                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPerkSlot_Widget_C::RecurseFloodFill(class UPerkSlot_Widget_C* TargetPerk, TArray<class UPerkSlot_Widget_C*>& NodeIsland, bool IsSimulation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PerkSlot_Widget_C", "RecurseFloodFill");

	Params::UPerkSlot_Widget_C_RecurseFloodFill_Params Parms{};

	Parms.TargetPerk = TargetPerk;
	Parms.NodeIsland = NodeIsland;
	Parms.IsSimulation = IsSimulation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PerkSlot_Widget.PerkSlot_Widget_C.CheckAffordNewPerk
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CanAfford                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Calculate_Perk_Cost_or_Refund_CostOrRefund              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Calculate_Perk_Cost_or_Refund_OldWalletAmount           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Calculate_Perk_Cost_or_Refund_NewWalletAmount           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPerkSlot_Widget_C::CheckAffordNewPerk(bool* CanAfford, int32 CallFunc_Calculate_Perk_Cost_or_Refund_CostOrRefund, int32 CallFunc_Calculate_Perk_Cost_or_Refund_OldWalletAmount, int32 CallFunc_Calculate_Perk_Cost_or_Refund_NewWalletAmount, bool CallFunc_GreaterEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PerkSlot_Widget_C", "CheckAffordNewPerk");

	Params::UPerkSlot_Widget_C_CheckAffordNewPerk_Params Parms{};

	Parms.CallFunc_Calculate_Perk_Cost_or_Refund_CostOrRefund = CallFunc_Calculate_Perk_Cost_or_Refund_CostOrRefund;
	Parms.CallFunc_Calculate_Perk_Cost_or_Refund_OldWalletAmount = CallFunc_Calculate_Perk_Cost_or_Refund_OldWalletAmount;
	Parms.CallFunc_Calculate_Perk_Cost_or_Refund_NewWalletAmount = CallFunc_Calculate_Perk_Cost_or_Refund_NewWalletAmount;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CanAfford != nullptr)
		*CanAfford = Parms.CanAfford;

}


// Function PerkSlot_Widget.PerkSlot_Widget_C.UpdateFlare
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsHovered                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsEquipped                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    LOCAL_FlareMat                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable_2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_4                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_5                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_4                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_MakeLiteralBool_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                Temp_struct_Variable_5                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_4                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                K2Node_Select_Default_5                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_6                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_7                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default_6                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPerkSlot_Widget_C::UpdateFlare(bool IsHovered, bool IsEquipped, class UMaterialInstanceDynamic* LOCAL_FlareMat, const struct FLinearColor& Temp_struct_Variable, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable_1, float Temp_float_Variable_2, float Temp_float_Variable_3, bool Temp_bool_Variable_2, float K2Node_Select_Default, float Temp_float_Variable_4, float Temp_float_Variable_5, bool Temp_bool_Variable_3, float K2Node_Select_Default_1, const struct FLinearColor& Temp_struct_Variable_1, const struct FLinearColor& Temp_struct_Variable_2, bool Temp_bool_Variable_4, const struct FLinearColor& K2Node_Select_Default_2, const struct FLinearColor& Temp_struct_Variable_3, const struct FLinearColor& Temp_struct_Variable_4, const struct FLinearColor& K2Node_Select_Default_3, bool CallFunc_MakeLiteralBool_ReturnValue, const struct FLinearColor& Temp_struct_Variable_5, float K2Node_Select_Default_4, bool Temp_bool_Variable_5, const struct FLinearColor& K2Node_Select_Default_5, const struct FLinearColor& Temp_struct_Variable_6, const struct FLinearColor& Temp_struct_Variable_7, bool Temp_bool_Variable_6, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, const struct FLinearColor& K2Node_Select_Default_6)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PerkSlot_Widget_C", "UpdateFlare");

	Params::UPerkSlot_Widget_C_UpdateFlare_Params Parms{};

	Parms.IsHovered = IsHovered;
	Parms.IsEquipped = IsEquipped;
	Parms.LOCAL_FlareMat = LOCAL_FlareMat;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_float_Variable_2 = Temp_float_Variable_2;
	Parms.Temp_float_Variable_3 = Temp_float_Variable_3;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_float_Variable_4 = Temp_float_Variable_4;
	Parms.Temp_float_Variable_5 = Temp_float_Variable_5;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.Temp_struct_Variable_3 = Temp_struct_Variable_3;
	Parms.Temp_struct_Variable_4 = Temp_struct_Variable_4;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.CallFunc_MakeLiteralBool_ReturnValue = CallFunc_MakeLiteralBool_ReturnValue;
	Parms.Temp_struct_Variable_5 = Temp_struct_Variable_5;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.Temp_bool_Variable_5 = Temp_bool_Variable_5;
	Parms.K2Node_Select_Default_5 = K2Node_Select_Default_5;
	Parms.Temp_struct_Variable_6 = Temp_struct_Variable_6;
	Parms.Temp_struct_Variable_7 = Temp_struct_Variable_7;
	Parms.Temp_bool_Variable_6 = Temp_bool_Variable_6;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.K2Node_Select_Default_6 = K2Node_Select_Default_6;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PerkSlot_Widget.PerkSlot_Widget_C.UpdatePerkVisuals
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UTexture2D>   LOCAL_Icon                                                       (Edit, BlueprintVisible, HasGetValueTypeHash)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGameInstance*            CallFunc_GetQtnGameInstance_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnPerk*                    CallFunc_GetClassDefaultObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnPerkArchetype_C*         K2Node_DynamicCast_AsQtn_Perk_Archetype                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetPerkUnlockData_unlocked                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetPerkUnlockData_LockCondition                         (None)
// class UQtnPerk*                    CallFunc_GetClassDefaultObject_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnPerkArchetype_C*         K2Node_DynamicCast_AsQtn_Perk_Archetype_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnPerkSettings            CallFunc_GetPerkSettings_ReturnValue                             (None)
// TSubclassOf<class UQtnPerk>        CallFunc_SyncLoadPerkClass_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UQtnPerk*                    CallFunc_GetClassDefaultObject_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetFormattedValueAtIndexAtInstanceCount_ReturnValue     (None)
// class FText                        CallFunc_GetFormattedValueAtIndexAtInstanceCount_ReturnValue_1   (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// class FText                        CallFunc_GetFormattedValueAtIndexAtInstanceCount_ReturnValue_2   (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UPerkSlot_Widget_C::UpdatePerkVisuals(TSoftObjectPtr<class UTexture2D> LOCAL_Icon, float CallFunc_Conv_BoolToFloat_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_2, enum class ESlateVisibility Temp_byte_Variable, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, enum class ESlateVisibility Temp_byte_Variable_1, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_Variable, class UQtnGameInstance* CallFunc_GetQtnGameInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, class UQtnPerk* CallFunc_GetClassDefaultObject_ReturnValue, class UQtnPerkArchetype_C* K2Node_DynamicCast_AsQtn_Perk_Archetype, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValidClass_ReturnValue, bool CallFunc_GetPerkUnlockData_unlocked, class FText CallFunc_GetPerkUnlockData_LockCondition, class UQtnPerk* CallFunc_GetClassDefaultObject_ReturnValue_1, class UQtnPerkArchetype_C* K2Node_DynamicCast_AsQtn_Perk_Archetype_1, bool K2Node_DynamicCast_bSuccess_2, const struct FQtnPerkSettings& CallFunc_GetPerkSettings_ReturnValue, TSubclassOf<class UQtnPerk> CallFunc_SyncLoadPerkClass_ReturnValue, class UQtnPerk* CallFunc_GetClassDefaultObject_ReturnValue_2, class FText CallFunc_GetFormattedValueAtIndexAtInstanceCount_ReturnValue, class FText CallFunc_GetFormattedValueAtIndexAtInstanceCount_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, class FText CallFunc_GetFormattedValueAtIndexAtInstanceCount_ReturnValue_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PerkSlot_Widget_C", "UpdatePerkVisuals");

	Params::UPerkSlot_Widget_C_UpdatePerkVisuals_Params Parms{};

	Parms.LOCAL_Icon = LOCAL_Icon;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue = CallFunc_Conv_BoolToFloat_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_1 = CallFunc_GetDynamicMaterial_ReturnValue_1;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_2 = CallFunc_GetDynamicMaterial_ReturnValue_2;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_1 = CallFunc_RandomFloatInRange_ReturnValue_1;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue = CallFunc_LoadAsset_Blocking_ReturnValue;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.K2Node_DynamicCast_AsTexture_2D = K2Node_DynamicCast_AsTexture_2D;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetQtnGameInstance_ReturnValue = CallFunc_GetQtnGameInstance_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetClassDefaultObject_ReturnValue = CallFunc_GetClassDefaultObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Perk_Archetype = K2Node_DynamicCast_AsQtn_Perk_Archetype;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_GetPerkUnlockData_unlocked = CallFunc_GetPerkUnlockData_unlocked;
	Parms.CallFunc_GetPerkUnlockData_LockCondition = CallFunc_GetPerkUnlockData_LockCondition;
	Parms.CallFunc_GetClassDefaultObject_ReturnValue_1 = CallFunc_GetClassDefaultObject_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsQtn_Perk_Archetype_1 = K2Node_DynamicCast_AsQtn_Perk_Archetype_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetPerkSettings_ReturnValue = CallFunc_GetPerkSettings_ReturnValue;
	Parms.CallFunc_SyncLoadPerkClass_ReturnValue = CallFunc_SyncLoadPerkClass_ReturnValue;
	Parms.CallFunc_GetClassDefaultObject_ReturnValue_2 = CallFunc_GetClassDefaultObject_ReturnValue_2;
	Parms.CallFunc_GetFormattedValueAtIndexAtInstanceCount_ReturnValue = CallFunc_GetFormattedValueAtIndexAtInstanceCount_ReturnValue;
	Parms.CallFunc_GetFormattedValueAtIndexAtInstanceCount_ReturnValue_1 = CallFunc_GetFormattedValueAtIndexAtInstanceCount_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.CallFunc_GetFormattedValueAtIndexAtInstanceCount_ReturnValue_2 = CallFunc_GetFormattedValueAtIndexAtInstanceCount_ReturnValue_2;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PerkSlot_Widget.PerkSlot_Widget_C.Is A Connection Equipped
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ValidConnection                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              ValidParentCount                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPerkSlot_Widget_C*          CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPerkSlot_Widget_C::Is_A_Connection_Equipped(bool* ValidConnection, int32 ValidParentCount, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, class UPerkSlot_Widget_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PerkSlot_Widget_C", "Is A Connection Equipped");

	Params::UPerkSlot_Widget_C_Is_A_Connection_Equipped_Params Parms{};

	Parms.ValidParentCount = ValidParentCount;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ValidConnection != nullptr)
		*ValidConnection = Parms.ValidConnection;

}


// Function PerkSlot_Widget.PerkSlot_Widget_C.UpdateLockedUI
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Unlocked                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              ValidParentCount                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Calculate_Perk_Cost_or_Refund_CostOrRefund              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Calculate_Perk_Cost_or_Refund_OldWalletAmount           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Calculate_Perk_Cost_or_Refund_NewWalletAmount           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnPerk*                    CallFunc_GetClassDefaultObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnPerkArchetype_C*         K2Node_DynamicCast_AsQtn_Perk_Archetype                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetPerkUnlockData_unlocked                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetPerkUnlockData_LockCondition                         (None)
// bool                               CallFunc_Is_A_Connection_Equipped_ValidConnection                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPerkSlot_Widget_C::UpdateLockedUI(bool* Unlocked, int32 ValidParentCount, int32 CallFunc_Calculate_Perk_Cost_or_Refund_CostOrRefund, int32 CallFunc_Calculate_Perk_Cost_or_Refund_OldWalletAmount, int32 CallFunc_Calculate_Perk_Cost_or_Refund_NewWalletAmount, bool CallFunc_GreaterEqual_IntInt_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, class UQtnPerk* CallFunc_GetClassDefaultObject_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, class UQtnPerkArchetype_C* K2Node_DynamicCast_AsQtn_Perk_Archetype, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetPerkUnlockData_unlocked, class FText CallFunc_GetPerkUnlockData_LockCondition, bool CallFunc_Is_A_Connection_Equipped_ValidConnection, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PerkSlot_Widget_C", "UpdateLockedUI");

	Params::UPerkSlot_Widget_C_UpdateLockedUI_Params Parms{};

	Parms.ValidParentCount = ValidParentCount;
	Parms.CallFunc_Calculate_Perk_Cost_or_Refund_CostOrRefund = CallFunc_Calculate_Perk_Cost_or_Refund_CostOrRefund;
	Parms.CallFunc_Calculate_Perk_Cost_or_Refund_OldWalletAmount = CallFunc_Calculate_Perk_Cost_or_Refund_OldWalletAmount;
	Parms.CallFunc_Calculate_Perk_Cost_or_Refund_NewWalletAmount = CallFunc_Calculate_Perk_Cost_or_Refund_NewWalletAmount;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue = CallFunc_Conv_BoolToFloat_ReturnValue;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue_1 = CallFunc_Conv_BoolToFloat_ReturnValue_1;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_GetClassDefaultObject_ReturnValue = CallFunc_GetClassDefaultObject_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_1 = CallFunc_GetDynamicMaterial_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsQtn_Perk_Archetype = K2Node_DynamicCast_AsQtn_Perk_Archetype;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetPerkUnlockData_unlocked = CallFunc_GetPerkUnlockData_unlocked;
	Parms.CallFunc_GetPerkUnlockData_LockCondition = CallFunc_GetPerkUnlockData_LockCondition;
	Parms.CallFunc_Is_A_Connection_Equipped_ValidConnection = CallFunc_Is_A_Connection_Equipped_ValidConnection;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Unlocked != nullptr)
		*Unlocked = Parms.Unlocked;

}


// Function PerkSlot_Widget.PerkSlot_Widget_C.SimplifyPerkOnZoom
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ZoomedOut                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPerkSlot_Widget_C::SimplifyPerkOnZoom(bool ZoomedOut, bool CallFunc_Not_PreBool_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PerkSlot_Widget_C", "SimplifyPerkOnZoom");

	Params::UPerkSlot_Widget_C_SimplifyPerkOnZoom_Params Parms{};

	Parms.ZoomedOut = ZoomedOut;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue = CallFunc_Conv_BoolToFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PerkSlot_Widget.PerkSlot_Widget_C.UpdateSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewSize                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPerkSlot_Widget_C::UpdateSize(float NewSize, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PerkSlot_Widget_C", "UpdateSize");

	Params::UPerkSlot_Widget_C_UpdateSize_Params Parms{};

	Parms.NewSize = NewSize;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PerkSlot_Widget.PerkSlot_Widget_C.Completed_D7FB99E04550A7A0BE4A398D9F7731DC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPerkSlot_Widget_C::Completed_D7FB99E04550A7A0BE4A398D9F7731DC(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PerkSlot_Widget_C", "Completed_D7FB99E04550A7A0BE4A398D9F7731DC");

	Params::UPerkSlot_Widget_C_Completed_D7FB99E04550A7A0BE4A398D9F7731DC_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PerkSlot_Widget.PerkSlot_Widget_C.Tick_D7FB99E04550A7A0BE4A398D9F7731DC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPerkSlot_Widget_C::Tick_D7FB99E04550A7A0BE4A398D9F7731DC(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PerkSlot_Widget_C", "Tick_D7FB99E04550A7A0BE4A398D9F7731DC");

	Params::UPerkSlot_Widget_C_Tick_D7FB99E04550A7A0BE4A398D9F7731DC_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PerkSlot_Widget.PerkSlot_Widget_C.Completed_D593A95747714446038F06AD635919F4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPerkSlot_Widget_C::Completed_D593A95747714446038F06AD635919F4(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PerkSlot_Widget_C", "Completed_D593A95747714446038F06AD635919F4");

	Params::UPerkSlot_Widget_C_Completed_D593A95747714446038F06AD635919F4_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PerkSlot_Widget.PerkSlot_Widget_C.Tick_D593A95747714446038F06AD635919F4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPerkSlot_Widget_C::Tick_D593A95747714446038F06AD635919F4(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PerkSlot_Widget_C", "Tick_D593A95747714446038F06AD635919F4");

	Params::UPerkSlot_Widget_C_Tick_D593A95747714446038F06AD635919F4_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PerkSlot_Widget.PerkSlot_Widget_C.BndEvt__PerkSlot_Widget_Button_Perk_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UPerkSlot_Widget_C::BndEvt__PerkSlot_Widget_Button_Perk_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PerkSlot_Widget_C", "BndEvt__PerkSlot_Widget_Button_Perk_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PerkSlot_Widget.PerkSlot_Widget_C.BndEvt__PerkSlot_Widget_Button_Perk_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UPerkSlot_Widget_C::BndEvt__PerkSlot_Widget_Button_Perk_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PerkSlot_Widget_C", "BndEvt__PerkSlot_Widget_Button_Perk_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PerkSlot_Widget.PerkSlot_Widget_C.ClickRepeater
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPerkSlot_Widget_C::ClickRepeater()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PerkSlot_Widget_C", "ClickRepeater");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PerkSlot_Widget.PerkSlot_Widget_C.BndEvt__PerkSlot_Widget_Button_Perk_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UPerkSlot_Widget_C::BndEvt__PerkSlot_Widget_Button_Perk_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PerkSlot_Widget_C", "BndEvt__PerkSlot_Widget_Button_Perk_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PerkSlot_Widget.PerkSlot_Widget_C.AnimSeq_EquipPerk
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               WantEquipped                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPerkSlot_Widget_C::AnimSeq_EquipPerk(bool WantEquipped)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PerkSlot_Widget_C", "AnimSeq_EquipPerk");

	Params::UPerkSlot_Widget_C_AnimSeq_EquipPerk_Params Parms{};

	Parms.WantEquipped = WantEquipped;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PerkSlot_Widget.PerkSlot_Widget_C.InitPerkSlot
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMenu_DarkMatterPerks_C*     OwningMenu                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPerkSlot_Widget_C::InitPerkSlot(class UMenu_DarkMatterPerks_C* OwningMenu)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PerkSlot_Widget_C", "InitPerkSlot");

	Params::UPerkSlot_Widget_C_InitPerkSlot_Params Parms{};

	Parms.OwningMenu = OwningMenu;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PerkSlot_Widget.PerkSlot_Widget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPerkSlot_Widget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PerkSlot_Widget_C", "PreConstruct");

	Params::UPerkSlot_Widget_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PerkSlot_Widget.PerkSlot_Widget_C.EquipPerkUI
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEquipped                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPerkSlot_Widget_C::EquipPerkUI(bool IsEquipped)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PerkSlot_Widget_C", "EquipPerkUI");

	Params::UPerkSlot_Widget_C_EquipPerkUI_Params Parms{};

	Parms.IsEquipped = IsEquipped;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PerkSlot_Widget.PerkSlot_Widget_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UPerkSlot_Widget_C::OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PerkSlot_Widget_C", "OnMouseEnter");

	Params::UPerkSlot_Widget_C_OnMouseEnter_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PerkSlot_Widget.PerkSlot_Widget_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UPerkSlot_Widget_C::OnMouseLeave(struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PerkSlot_Widget_C", "OnMouseLeave");

	Params::UPerkSlot_Widget_C_OnMouseLeave_Params Parms{};

	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PerkSlot_Widget.PerkSlot_Widget_C.StartTrainingHighlight_Equipping
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPerkSlot_Widget_C::StartTrainingHighlight_Equipping()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PerkSlot_Widget_C", "StartTrainingHighlight_Equipping");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PerkSlot_Widget.PerkSlot_Widget_C.PauseTrainingHighlight
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPerkSlot_Widget_C::PauseTrainingHighlight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PerkSlot_Widget_C", "PauseTrainingHighlight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PerkSlot_Widget.PerkSlot_Widget_C.ResumeTrainingHighlight
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPerkSlot_Widget_C::ResumeTrainingHighlight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PerkSlot_Widget_C", "ResumeTrainingHighlight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PerkSlot_Widget.PerkSlot_Widget_C.UnbindTrainingEvents
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPerkSlot_Widget_C::UnbindTrainingEvents()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PerkSlot_Widget_C", "UnbindTrainingEvents");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PerkSlot_Widget.PerkSlot_Widget_C.StartTrainingHighlight_Unequipping
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPerkSlot_Widget_C::StartTrainingHighlight_Unequipping()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PerkSlot_Widget_C", "StartTrainingHighlight_Unequipping");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PerkSlot_Widget.PerkSlot_Widget_C.PauseTrainingHighlight2
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPerkSlot_Widget_C::PauseTrainingHighlight2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PerkSlot_Widget_C", "PauseTrainingHighlight2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PerkSlot_Widget.PerkSlot_Widget_C.ResumeTrainingHighlight2
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPerkSlot_Widget_C::ResumeTrainingHighlight2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PerkSlot_Widget_C", "ResumeTrainingHighlight2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PerkSlot_Widget.PerkSlot_Widget_C.UnbindTrainingEvents2
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPerkSlot_Widget_C::UnbindTrainingEvents2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PerkSlot_Widget_C", "UnbindTrainingEvents2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PerkSlot_Widget.PerkSlot_Widget_C.ExecuteUbergraph_PerkSlot_Widget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnimationPlayingForward_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_GetAnimationCurrentTime_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CheckAffordNewPerk_CanAfford                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_MultiplyMultiply_FloatFloat_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_MaxPerksReached__Maxed                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Social_Hub_Training_Moment_Can_Click_Allow_Click        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_Value_3                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnAsyncInterpolateValue*   CallFunc_AsyncInterpolateValue_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnAsyncInterpolateValue*   CallFunc_AsyncInterpolateValue_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Ease_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_WantEquipped                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Equip_or_Unequip_Perk_Server_Equipping                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_Value                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckAffordNewPerk_CanAfford_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// class UMenu_DarkMatterPerks_C*     K2Node_CustomEvent_OwningMenu                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_IsEquipped                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Value_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// struct FPointerEvent               K2Node_Event_MouseEvent_1                                        (ConstParm)
// struct FPointerEvent               K2Node_Event_MouseEvent                                          (ConstParm)
// class FText                        CallFunc_Conv_NameToText_ReturnValue                             (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// bool                               CallFunc_IsHovered_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_4                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Value_2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPerkSlot_Widget_C::ExecuteUbergraph_PerkSlot_Widget(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, float CallFunc_Lerp_ReturnValue, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_1, bool CallFunc_IsAnimationPlayingForward_ReturnValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue, float CallFunc_GetAnimationCurrentTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, bool CallFunc_CheckAffordNewPerk_CanAfford, float CallFunc_Subtract_FloatFloat_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_1, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_Lerp_ReturnValue_1, bool CallFunc_MaxPerksReached__Maxed, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_2, bool CallFunc_Social_Hub_Training_Moment_Can_Click_Allow_Click, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_3, bool Temp_bool_IsClosed_Variable_1, float K2Node_CustomEvent_Value_3, class UQtnAsyncInterpolateValue* CallFunc_AsyncInterpolateValue_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, bool CallFunc_IsValid_ReturnValue, class UQtnAsyncInterpolateValue* CallFunc_AsyncInterpolateValue_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_Ease_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, bool K2Node_CustomEvent_WantEquipped, bool CallFunc_Not_PreBool_ReturnValue, float Temp_float_Variable, bool CallFunc_Equip_or_Unequip_Perk_Server_Equipping, float K2Node_CustomEvent_Value, bool CallFunc_CheckAffordNewPerk_CanAfford_1, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class UMenu_DarkMatterPerks_C* K2Node_CustomEvent_OwningMenu, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool K2Node_Event_IsDesignTime, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, bool K2Node_CustomEvent_IsEquipped, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, float CallFunc_Conv_BoolToFloat_ReturnValue, float K2Node_CustomEvent_Value_1, const struct FGeometry& K2Node_Event_MyGeometry, const struct FPointerEvent& K2Node_Event_MouseEvent_1, const struct FPointerEvent& K2Node_Event_MouseEvent, class FText CallFunc_Conv_NameToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool CallFunc_IsHovered_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_4, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, float Temp_float_Variable_1, float K2Node_CustomEvent_Value_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PerkSlot_Widget_C", "ExecuteUbergraph_PerkSlot_Widget");

	Params::UPerkSlot_Widget_C_ExecuteUbergraph_PerkSlot_Widget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_LinearColorLerp_ReturnValue = CallFunc_LinearColorLerp_ReturnValue;
	Parms.CallFunc_LinearColorLerp_ReturnValue_1 = CallFunc_LinearColorLerp_ReturnValue_1;
	Parms.CallFunc_IsAnimationPlayingForward_ReturnValue = CallFunc_IsAnimationPlayingForward_ReturnValue;
	Parms.CallFunc_Conv_BoolToString_ReturnValue = CallFunc_Conv_BoolToString_ReturnValue;
	Parms.CallFunc_GetAnimationCurrentTime_ReturnValue = CallFunc_GetAnimationCurrentTime_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.CallFunc_Conv_BoolToString_ReturnValue_1 = CallFunc_Conv_BoolToString_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_CheckAffordNewPerk_CanAfford = CallFunc_CheckAffordNewPerk_CanAfford;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable_1 = Temp_bool_Has_Been_Initd_Variable_1;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue = CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_1 = CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_1 = CallFunc_Add_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Lerp_ReturnValue_1 = CallFunc_Lerp_ReturnValue_1;
	Parms.CallFunc_MaxPerksReached__Maxed = CallFunc_MaxPerksReached__Maxed;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_1 = CallFunc_GetDynamicMaterial_ReturnValue_1;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_2 = CallFunc_GetDynamicMaterial_ReturnValue_2;
	Parms.CallFunc_Social_Hub_Training_Moment_Can_Click_Allow_Click = CallFunc_Social_Hub_Training_Moment_Can_Click_Allow_Click;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_3 = CallFunc_GetDynamicMaterial_ReturnValue_3;
	Parms.Temp_bool_IsClosed_Variable_1 = Temp_bool_IsClosed_Variable_1;
	Parms.K2Node_CustomEvent_Value_3 = K2Node_CustomEvent_Value_3;
	Parms.CallFunc_AsyncInterpolateValue_ReturnValue = CallFunc_AsyncInterpolateValue_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_AsyncInterpolateValue_ReturnValue_1 = CallFunc_AsyncInterpolateValue_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Ease_ReturnValue = CallFunc_Ease_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.K2Node_CustomEvent_WantEquipped = K2Node_CustomEvent_WantEquipped;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.CallFunc_Equip_or_Unequip_Perk_Server_Equipping = CallFunc_Equip_or_Unequip_Perk_Server_Equipping;
	Parms.K2Node_CustomEvent_Value = K2Node_CustomEvent_Value;
	Parms.CallFunc_CheckAffordNewPerk_CanAfford_1 = CallFunc_CheckAffordNewPerk_CanAfford_1;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_CustomEvent_OwningMenu = K2Node_CustomEvent_OwningMenu;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.K2Node_CustomEvent_IsEquipped = K2Node_CustomEvent_IsEquipped;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue = CallFunc_Conv_BoolToFloat_ReturnValue;
	Parms.K2Node_CustomEvent_Value_1 = K2Node_CustomEvent_Value_1;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_MouseEvent_1 = K2Node_Event_MouseEvent_1;
	Parms.K2Node_Event_MouseEvent = K2Node_Event_MouseEvent;
	Parms.CallFunc_Conv_NameToText_ReturnValue = CallFunc_Conv_NameToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_IsHovered_ReturnValue = CallFunc_IsHovered_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_4 = CallFunc_GetDynamicMaterial_ReturnValue_4;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.K2Node_CustomEvent_Value_2 = K2Node_CustomEvent_Value_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PerkSlot_Widget.PerkSlot_Widget_C.OnIslandsUnequippedEvent__DelegateSignature
// (Public, Delegate, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UPerkSlot_Widget_C*>  PerkWidgetsDisconnected                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void UPerkSlot_Widget_C::OnIslandsUnequippedEvent__DelegateSignature(TArray<class UPerkSlot_Widget_C*>& PerkWidgetsDisconnected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PerkSlot_Widget_C", "OnIslandsUnequippedEvent__DelegateSignature");

	Params::UPerkSlot_Widget_C_OnIslandsUnequippedEvent__DelegateSignature_Params Parms{};

	Parms.PerkWidgetsDisconnected = PerkWidgetsDisconnected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PerkSlot_Widget.PerkSlot_Widget_C.UpdateLineWithEquippedState__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPerkSlot_Widget_C::UpdateLineWithEquippedState__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PerkSlot_Widget_C", "UpdateLineWithEquippedState__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


