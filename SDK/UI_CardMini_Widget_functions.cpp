#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_CardMini_Widget.UI_CardMini_Widget_C
// (None)

class UClass* UUI_CardMini_Widget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_CardMini_Widget_C");

	return Clss;
}


// UI_CardMini_Widget_C UI_CardMini_Widget.Default__UI_CardMini_Widget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_CardMini_Widget_C* UUI_CardMini_Widget_C::GetDefaultObj()
{
	static class UUI_CardMini_Widget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_CardMini_Widget_C*>(UUI_CardMini_Widget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_CardMini_Widget.UI_CardMini_Widget_C.Change Paper Container
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              IndexRGB                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_CardMini_Widget_C::Change_Paper_Container(int32 IndexRGB, float CallFunc_Conv_IntToFloat_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CardMini_Widget_C", "Change Paper Container");

	Params::UUI_CardMini_Widget_C_Change_Paper_Container_Params Parms{};

	Parms.IndexRGB = IndexRGB;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_CardMini_Widget.UI_CardMini_Widget_C.RefreshCardArt
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_CardMini_Widget_C::RefreshCardArt(class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CardMini_Widget_C", "RefreshCardArt");

	Params::UUI_CardMini_Widget_C_RefreshCardArt_Params Parms{};

	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_CardMini_Widget.UI_CardMini_Widget_C.CollapseExtraUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_CardMini_Widget_C::CollapseExtraUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CardMini_Widget_C", "CollapseExtraUI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_CardMini_Widget.UI_CardMini_Widget_C.Completed_F74AEAE54491DCB911EF4FBDC3E88FEB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_CardMini_Widget_C::Completed_F74AEAE54491DCB911EF4FBDC3E88FEB(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CardMini_Widget_C", "Completed_F74AEAE54491DCB911EF4FBDC3E88FEB");

	Params::UUI_CardMini_Widget_C_Completed_F74AEAE54491DCB911EF4FBDC3E88FEB_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_CardMini_Widget.UI_CardMini_Widget_C.Tick_F74AEAE54491DCB911EF4FBDC3E88FEB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_CardMini_Widget_C::Tick_F74AEAE54491DCB911EF4FBDC3E88FEB(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CardMini_Widget_C", "Tick_F74AEAE54491DCB911EF4FBDC3E88FEB");

	Params::UUI_CardMini_Widget_C_Tick_F74AEAE54491DCB911EF4FBDC3E88FEB_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_CardMini_Widget.UI_CardMini_Widget_C.Completed_3BE2C388444B681E747C07A2F432D575
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_CardMini_Widget_C::Completed_3BE2C388444B681E747C07A2F432D575(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CardMini_Widget_C", "Completed_3BE2C388444B681E747C07A2F432D575");

	Params::UUI_CardMini_Widget_C_Completed_3BE2C388444B681E747C07A2F432D575_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_CardMini_Widget.UI_CardMini_Widget_C.Tick_3BE2C388444B681E747C07A2F432D575
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_CardMini_Widget_C::Tick_3BE2C388444B681E747C07A2F432D575(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CardMini_Widget_C", "Tick_3BE2C388444B681E747C07A2F432D575");

	Params::UUI_CardMini_Widget_C_Tick_3BE2C388444B681E747C07A2F432D575_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_CardMini_Widget.UI_CardMini_Widget_C.OnLoaded_CA0AC51443F2E5DC25DEE3A90E146D99
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_CardMini_Widget_C::OnLoaded_CA0AC51443F2E5DC25DEE3A90E146D99(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CardMini_Widget_C", "OnLoaded_CA0AC51443F2E5DC25DEE3A90E146D99");

	Params::UUI_CardMini_Widget_C_OnLoaded_CA0AC51443F2E5DC25DEE3A90E146D99_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_CardMini_Widget.UI_CardMini_Widget_C.AnimSeq_Hover
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsHovered                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_CardMini_Widget_C::AnimSeq_Hover(bool IsHovered)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CardMini_Widget_C", "AnimSeq_Hover");

	Params::UUI_CardMini_Widget_C_AnimSeq_Hover_Params Parms{};

	Parms.IsHovered = IsHovered;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_CardMini_Widget.UI_CardMini_Widget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_CardMini_Widget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CardMini_Widget_C", "PreConstruct");

	Params::UUI_CardMini_Widget_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_CardMini_Widget.UI_CardMini_Widget_C.RefreshCardData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQtnUpgradeSettings         UpgradeSettings                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FQtnRolledUpgradeData       UpgradeRolledData                                                (BlueprintVisible, BlueprintReadOnly, Parm)
// class UClass*                      EnemyBullshitBPBase                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtn_CheatVerb_Archetype_C*  PlayerBullshitVerbArchetype                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ForceRolledDataUpdate                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_CardMini_Widget_C::RefreshCardData(const struct FQtnUpgradeSettings& UpgradeSettings, const struct FQtnRolledUpgradeData& UpgradeRolledData, class UClass* EnemyBullshitBPBase, class UQtn_CheatVerb_Archetype_C* PlayerBullshitVerbArchetype, bool ForceRolledDataUpdate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CardMini_Widget_C", "RefreshCardData");

	Params::UUI_CardMini_Widget_C_RefreshCardData_Params Parms{};

	Parms.UpgradeSettings = UpgradeSettings;
	Parms.UpgradeRolledData = UpgradeRolledData;
	Parms.EnemyBullshitBPBase = EnemyBullshitBPBase;
	Parms.PlayerBullshitVerbArchetype = PlayerBullshitVerbArchetype;
	Parms.ForceRolledDataUpdate = ForceRolledDataUpdate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_CardMini_Widget.UI_CardMini_Widget_C.RefreshCardUI
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_CardMini_Widget_C::RefreshCardUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CardMini_Widget_C", "RefreshCardUI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_CardMini_Widget.UI_CardMini_Widget_C.SaveCardArtTexture
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_CardMini_Widget_C::SaveCardArtTexture()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CardMini_Widget_C", "SaveCardArtTexture");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_CardMini_Widget.UI_CardMini_Widget_C.OnHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Hovered_                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              HoveredIndex                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUI_Card_Struct             CardInfo                                                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UUI_CardMini_Widget_C::OnHovered(bool Hovered_, int32 HoveredIndex, const struct FUI_Card_Struct& CardInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CardMini_Widget_C", "OnHovered");

	Params::UUI_CardMini_Widget_C_OnHovered_Params Parms{};

	Parms.Hovered_ = Hovered_;
	Parms.HoveredIndex = HoveredIndex;
	Parms.CardInfo = CardInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_CardMini_Widget.UI_CardMini_Widget_C.ExecuteUbergraph_UI_CardMini_Widget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Value_2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// float                              K2Node_CustomEvent_Value_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Value                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_Loaded                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  CallFunc_GetIconForUI_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnBullshitBPBaseArchetype_C*CallFunc_GetBullshitArchetype_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_IsHovered                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// class UQtnAsyncInterpolateValue*   CallFunc_AsyncInterpolateValue_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnAsyncInterpolateValue*   CallFunc_AsyncInterpolateValue_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCanvasPanelSlot*            CallFunc_GetCanvasPanelSlot_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnUpgradeSettings         K2Node_Event_UpgradeSettings                                     (None)
// struct FQtnRolledUpgradeData       K2Node_Event_UpgradeRolledData                                   (None)
// class UClass*                      K2Node_Event_EnemyBullshitBPBase                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtn_CheatVerb_Archetype_C*  K2Node_Event_PlayerBullshitVerbArchetype                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_forceRolledDataUpdate                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_Value_3                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_Hovered_                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_HoveredIndex                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUI_Card_Struct             K2Node_CustomEvent_CardInfo                                      (HasGetValueTypeHash)
// bool                               CallFunc_IsHovered_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_CardMini_Widget_C::ExecuteUbergraph_UI_CardMini_Widget(int32 EntryPoint, float K2Node_CustomEvent_Value_2, float Temp_float_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float K2Node_CustomEvent_Value_1, float K2Node_CustomEvent_Value, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, float Temp_float_Variable_1, class UObject* K2Node_CustomEvent_Loaded, class UObject* Temp_object_Variable, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValidClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UTexture2D* CallFunc_GetIconForUI_ReturnValue, class UQtnBullshitBPBaseArchetype_C* CallFunc_GetBullshitArchetype_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable_1, bool K2Node_CustomEvent_IsHovered, bool Temp_bool_IsClosed_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UQtnAsyncInterpolateValue* CallFunc_AsyncInterpolateValue_ReturnValue, class UQtnAsyncInterpolateValue* CallFunc_AsyncInterpolateValue_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool K2Node_Event_IsDesignTime, class UCanvasPanelSlot* CallFunc_GetCanvasPanelSlot_ReturnValue, const struct FQtnUpgradeSettings& K2Node_Event_UpgradeSettings, const struct FQtnRolledUpgradeData& K2Node_Event_UpgradeRolledData, class UClass* K2Node_Event_EnemyBullshitBPBase, class UQtn_CheatVerb_Archetype_C* K2Node_Event_PlayerBullshitVerbArchetype, bool K2Node_Event_forceRolledDataUpdate, float K2Node_CustomEvent_Value_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, bool CallFunc_IsValidSoftObjectReference_ReturnValue, bool K2Node_CustomEvent_Hovered_, int32 K2Node_CustomEvent_HoveredIndex, const struct FUI_Card_Struct& K2Node_CustomEvent_CardInfo, bool CallFunc_IsHovered_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CardMini_Widget_C", "ExecuteUbergraph_UI_CardMini_Widget");

	Params::UUI_CardMini_Widget_C_ExecuteUbergraph_UI_CardMini_Widget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Value_2 = K2Node_CustomEvent_Value_2;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_Value_1 = K2Node_CustomEvent_Value_1;
	Parms.K2Node_CustomEvent_Value = K2Node_CustomEvent_Value;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_DynamicCast_AsTexture_2D = K2Node_DynamicCast_AsTexture_2D;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetIconForUI_ReturnValue = CallFunc_GetIconForUI_ReturnValue;
	Parms.CallFunc_GetBullshitArchetype_ReturnValue = CallFunc_GetBullshitArchetype_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.Temp_bool_Has_Been_Initd_Variable_1 = Temp_bool_Has_Been_Initd_Variable_1;
	Parms.K2Node_CustomEvent_IsHovered = K2Node_CustomEvent_IsHovered;
	Parms.Temp_bool_IsClosed_Variable_1 = Temp_bool_IsClosed_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_AsyncInterpolateValue_ReturnValue = CallFunc_AsyncInterpolateValue_ReturnValue;
	Parms.CallFunc_AsyncInterpolateValue_ReturnValue_1 = CallFunc_AsyncInterpolateValue_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetCanvasPanelSlot_ReturnValue = CallFunc_GetCanvasPanelSlot_ReturnValue;
	Parms.K2Node_Event_UpgradeSettings = K2Node_Event_UpgradeSettings;
	Parms.K2Node_Event_UpgradeRolledData = K2Node_Event_UpgradeRolledData;
	Parms.K2Node_Event_EnemyBullshitBPBase = K2Node_Event_EnemyBullshitBPBase;
	Parms.K2Node_Event_PlayerBullshitVerbArchetype = K2Node_Event_PlayerBullshitVerbArchetype;
	Parms.K2Node_Event_forceRolledDataUpdate = K2Node_Event_forceRolledDataUpdate;
	Parms.K2Node_CustomEvent_Value_3 = K2Node_CustomEvent_Value_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.K2Node_CustomEvent_Hovered_ = K2Node_CustomEvent_Hovered_;
	Parms.K2Node_CustomEvent_HoveredIndex = K2Node_CustomEvent_HoveredIndex;
	Parms.K2Node_CustomEvent_CardInfo = K2Node_CustomEvent_CardInfo;
	Parms.CallFunc_IsHovered_ReturnValue = CallFunc_IsHovered_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


