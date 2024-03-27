#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass TeamPlayerWidget.TeamPlayerWidget_C
// (None)

class UClass* UTeamPlayerWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TeamPlayerWidget_C");

	return Clss;
}


// TeamPlayerWidget_C TeamPlayerWidget.Default__TeamPlayerWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTeamPlayerWidget_C* UTeamPlayerWidget_C::GetDefaultObj()
{
	static class UTeamPlayerWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTeamPlayerWidget_C*>(UTeamPlayerWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TeamPlayerWidget.TeamPlayerWidget_C.Set Font Colors Off Number
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                CallFunc_Get_Colors_FontColor                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Get_Colors_OutlineColor                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Get_Colors_BoxColor                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Subtract_LinearColorLinearColor_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// struct FFontOutlineSettings        K2Node_MakeStruct_FontOutlineSettings                            (NoDestructor, HasGetValueTypeHash)
// struct FSlateFontInfo              K2Node_MakeStruct_SlateFontInfo                                  (HasGetValueTypeHash)

void UTeamPlayerWidget_C::Set_Font_Colors_Off_Number(const struct FLinearColor& CallFunc_Get_Colors_FontColor, const struct FLinearColor& CallFunc_Get_Colors_OutlineColor, const struct FLinearColor& CallFunc_Get_Colors_BoxColor, const struct FLinearColor& CallFunc_Subtract_LinearColorLinearColor_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FFontOutlineSettings& K2Node_MakeStruct_FontOutlineSettings, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TeamPlayerWidget_C", "Set Font Colors Off Number");

	Params::UTeamPlayerWidget_C_Set_Font_Colors_Off_Number_Params Parms{};

	Parms.CallFunc_Get_Colors_FontColor = CallFunc_Get_Colors_FontColor;
	Parms.CallFunc_Get_Colors_OutlineColor = CallFunc_Get_Colors_OutlineColor;
	Parms.CallFunc_Get_Colors_BoxColor = CallFunc_Get_Colors_BoxColor;
	Parms.CallFunc_Subtract_LinearColorLinearColor_ReturnValue = CallFunc_Subtract_LinearColorLinearColor_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_MakeStruct_FontOutlineSettings = K2Node_MakeStruct_FontOutlineSettings;
	Parms.K2Node_MakeStruct_SlateFontInfo = K2Node_MakeStruct_SlateFontInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TeamPlayerWidget.TeamPlayerWidget_C.SetupPlayerNumber
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               LOCAL_NumberSet                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTeamPlayerWidget_C::SetupPlayerNumber(bool LOCAL_NumberSet)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TeamPlayerWidget_C", "SetupPlayerNumber");

	Params::UTeamPlayerWidget_C_SetupPlayerNumber_Params Parms{};

	Parms.LOCAL_NumberSet = LOCAL_NumberSet;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TeamPlayerWidget.TeamPlayerWidget_C.HandleBonusHealth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               HasBonusMaxHealth                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              BonusDifference                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              LOCAL_UI_MaxHealthFriendCap                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              LOCAL_MaxHealthRatio                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SafeDivide_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTeamPlayerWidget_C::HandleBonusHealth(bool HasBonusMaxHealth, float BonusDifference, float LOCAL_UI_MaxHealthFriendCap, float LOCAL_MaxHealthRatio, float CallFunc_Conv_BoolToFloat_ReturnValue, float CallFunc_SafeDivide_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TeamPlayerWidget_C", "HandleBonusHealth");

	Params::UTeamPlayerWidget_C_HandleBonusHealth_Params Parms{};

	Parms.HasBonusMaxHealth = HasBonusMaxHealth;
	Parms.BonusDifference = BonusDifference;
	Parms.LOCAL_UI_MaxHealthFriendCap = LOCAL_UI_MaxHealthFriendCap;
	Parms.LOCAL_MaxHealthRatio = LOCAL_MaxHealthRatio;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue = CallFunc_Conv_BoolToFloat_ReturnValue;
	Parms.CallFunc_SafeDivide_ReturnValue = CallFunc_SafeDivide_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TeamPlayerWidget.TeamPlayerWidget_C.UpdateHealth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              LOCAL_UpdatedHealthRatio                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              LOCAL_UpdatedHealth                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetHealth_health                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetHealth_maxHealth                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMin_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTeamPlayerWidget_C::UpdateHealth(float LOCAL_UpdatedHealthRatio, float LOCAL_UpdatedHealth, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetHealth_health, float CallFunc_GetHealth_maxHealth, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, float CallFunc_FMin_ReturnValue, float CallFunc_FMax_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TeamPlayerWidget_C", "UpdateHealth");

	Params::UTeamPlayerWidget_C_UpdateHealth_Params Parms{};

	Parms.LOCAL_UpdatedHealthRatio = LOCAL_UpdatedHealthRatio;
	Parms.LOCAL_UpdatedHealth = LOCAL_UpdatedHealth;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetHealth_health = CallFunc_GetHealth_health;
	Parms.CallFunc_GetHealth_maxHealth = CallFunc_GetHealth_maxHealth;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_1 = CallFunc_GetDynamicMaterial_ReturnValue_1;
	Parms.CallFunc_FMin_ReturnValue = CallFunc_FMin_ReturnValue;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TeamPlayerWidget.TeamPlayerWidget_C.MinimalInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enabled                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTeamPlayerWidget_C::MinimalInfo(bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TeamPlayerWidget_C", "MinimalInfo");

	Params::UTeamPlayerWidget_C_MinimalInfo_Params Parms{};

	Parms.Enabled = Enabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TeamPlayerWidget.TeamPlayerWidget_C.UpdateWoundRatio
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UTeamPlayerWidget_C::UpdateWoundRatio()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TeamPlayerWidget_C", "UpdateWoundRatio");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TeamPlayerWidget.TeamPlayerWidget_C.InitPlayerWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnPlayerState*             QtnPlayerState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      PlayerName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                Body                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTeamPlayerWidget_C::InitPlayerWidget(class AQtnPlayerState* QtnPlayerState, const class FString& PlayerName, class AQtnBodyPawn* Body)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TeamPlayerWidget_C", "InitPlayerWidget");

	Params::UTeamPlayerWidget_C_InitPlayerWidget_Params Parms{};

	Parms.QtnPlayerState = QtnPlayerState;
	Parms.PlayerName = PlayerName;
	Parms.Body = Body;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TeamPlayerWidget.TeamPlayerWidget_C.Aliveness
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnBodyPawn*                bodyPawn                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      AlivenessInstigator                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnBodyAliveness       OldBodyAliveness                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnBodyAliveness       bodyAliveness                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsServer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTeamPlayerWidget_C::Aliveness(class AQtnBodyPawn* bodyPawn, class AActor* AlivenessInstigator, enum class EQtnBodyAliveness OldBodyAliveness, enum class EQtnBodyAliveness bodyAliveness, bool IsServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TeamPlayerWidget_C", "Aliveness");

	Params::UTeamPlayerWidget_C_Aliveness_Params Parms{};

	Parms.bodyPawn = bodyPawn;
	Parms.AlivenessInstigator = AlivenessInstigator;
	Parms.OldBodyAliveness = OldBodyAliveness;
	Parms.bodyAliveness = bodyAliveness;
	Parms.IsServer = IsServer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TeamPlayerWidget.TeamPlayerWidget_C.BindAliveness
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UTeamPlayerWidget_C::BindAliveness()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TeamPlayerWidget_C", "BindAliveness");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TeamPlayerWidget.TeamPlayerWidget_C.UpdateModifiedMaxHealth
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewMaxHealth                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Difference                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTeamPlayerWidget_C::UpdateModifiedMaxHealth(float NewMaxHealth, float Difference)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TeamPlayerWidget_C", "UpdateModifiedMaxHealth");

	Params::UTeamPlayerWidget_C_UpdateModifiedMaxHealth_Params Parms{};

	Parms.NewMaxHealth = NewMaxHealth;
	Parms.Difference = Difference;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TeamPlayerWidget.TeamPlayerWidget_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UTeamPlayerWidget_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TeamPlayerWidget_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TeamPlayerWidget.TeamPlayerWidget_C.OnHealthChangedEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQtnAttribute*               Attribute                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTeamPlayerWidget_C::OnHealthChangedEvent(class UQtnAttribute* Attribute, float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TeamPlayerWidget_C", "OnHealthChangedEvent");

	Params::UTeamPlayerWidget_C_OnHealthChangedEvent_Params Parms{};

	Parms.Attribute = Attribute;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TeamPlayerWidget.TeamPlayerWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTeamPlayerWidget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TeamPlayerWidget_C", "PreConstruct");

	Params::UTeamPlayerWidget_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TeamPlayerWidget.TeamPlayerWidget_C.ExecuteUbergraph_TeamPlayerWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnAIAllyBot_C*        K2Node_DynamicCast_AsBody_Pawn_AIAlly_Bot                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPlayerState*             K2Node_CustomEvent_QtnPlayerState                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_PlayerName                                    (ZeroConstructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                K2Node_CustomEvent_Body                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                K2Node_CustomEvent_BodyPawn                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_alivenessInstigator                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnBodyAliveness       K2Node_CustomEvent_oldBodyAliveness                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnBodyAliveness       K2Node_CustomEvent_bodyAliveness                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_isServer                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPlayerController*        CallFunc_GetOccupyingLocalPlayerController_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAliveAndConscious_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTeamPlayerStatus_Widget_C*  CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnEntityTuningDataRow     CallFunc_GetEntityTuningData_ReturnValue                         (ConstParm)
// class UQtnAttributeComponent*      CallFunc_GetAttributeComponent_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IQtnAttributeContainerInterface>CallFunc_GetAttribute_self_CastInput                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnAttribute*               CallFunc_GetAttribute_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IQtnAttributeContainerInterface>CallFunc_GetAttribute_self_CastInput_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnAttribute*               CallFunc_GetAttribute_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurrentValue_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAttribute_MaxHealth_C*      K2Node_DynamicCast_AsAttribute_Max_Health                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_NewMaxHealth                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Difference                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnAttribute*               K2Node_CustomEvent_Attribute                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Value                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UTeamPlayerWidget_C::ExecuteUbergraph_TeamPlayerWidget(int32 EntryPoint, class ABodyPawnAIAllyBot_C* K2Node_DynamicCast_AsBody_Pawn_AIAlly_Bot, bool K2Node_DynamicCast_bSuccess, class AQtnPlayerState* K2Node_CustomEvent_QtnPlayerState, const class FString& K2Node_CustomEvent_PlayerName, class AQtnBodyPawn* K2Node_CustomEvent_Body, class FText CallFunc_Conv_StringToText_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, class AQtnBodyPawn* K2Node_CustomEvent_BodyPawn, class AActor* K2Node_CustomEvent_alivenessInstigator, enum class EQtnBodyAliveness K2Node_CustomEvent_oldBodyAliveness, enum class EQtnBodyAliveness K2Node_CustomEvent_bodyAliveness, bool K2Node_CustomEvent_isServer, bool CallFunc_IsValid_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, class AQtnPlayerController* CallFunc_GetOccupyingLocalPlayerController_ReturnValue, bool CallFunc_IsAliveAndConscious_ReturnValue, class UTeamPlayerStatus_Widget_C* CallFunc_Create_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, const struct FQtnEntityTuningDataRow& CallFunc_GetEntityTuningData_ReturnValue, class UQtnAttributeComponent* CallFunc_GetAttributeComponent_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_GetAttribute_self_CastInput, class UQtnAttribute* CallFunc_GetAttribute_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_GetAttribute_self_CastInput_1, class UQtnAttribute* CallFunc_GetAttribute_ReturnValue_1, float CallFunc_GetCurrentValue_ReturnValue, class UAttribute_MaxHealth_C* K2Node_DynamicCast_AsAttribute_Max_Health, bool K2Node_DynamicCast_bSuccess_1, float K2Node_CustomEvent_NewMaxHealth, float K2Node_CustomEvent_Difference, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, class UQtnAttribute* K2Node_CustomEvent_Attribute, float K2Node_CustomEvent_Value, bool CallFunc_IsValid_ReturnValue_3, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TeamPlayerWidget_C", "ExecuteUbergraph_TeamPlayerWidget");

	Params::UTeamPlayerWidget_C_ExecuteUbergraph_TeamPlayerWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_DynamicCast_AsBody_Pawn_AIAlly_Bot = K2Node_DynamicCast_AsBody_Pawn_AIAlly_Bot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_QtnPlayerState = K2Node_CustomEvent_QtnPlayerState;
	Parms.K2Node_CustomEvent_PlayerName = K2Node_CustomEvent_PlayerName;
	Parms.K2Node_CustomEvent_Body = K2Node_CustomEvent_Body;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CustomEvent_BodyPawn = K2Node_CustomEvent_BodyPawn;
	Parms.K2Node_CustomEvent_alivenessInstigator = K2Node_CustomEvent_alivenessInstigator;
	Parms.K2Node_CustomEvent_oldBodyAliveness = K2Node_CustomEvent_oldBodyAliveness;
	Parms.K2Node_CustomEvent_bodyAliveness = K2Node_CustomEvent_bodyAliveness;
	Parms.K2Node_CustomEvent_isServer = K2Node_CustomEvent_isServer;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetOccupyingLocalPlayerController_ReturnValue = CallFunc_GetOccupyingLocalPlayerController_ReturnValue;
	Parms.CallFunc_IsAliveAndConscious_ReturnValue = CallFunc_IsAliveAndConscious_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetEntityTuningData_ReturnValue = CallFunc_GetEntityTuningData_ReturnValue;
	Parms.CallFunc_GetAttributeComponent_ReturnValue = CallFunc_GetAttributeComponent_ReturnValue;
	Parms.CallFunc_GetAttribute_self_CastInput = CallFunc_GetAttribute_self_CastInput;
	Parms.CallFunc_GetAttribute_ReturnValue = CallFunc_GetAttribute_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_GetAttribute_self_CastInput_1 = CallFunc_GetAttribute_self_CastInput_1;
	Parms.CallFunc_GetAttribute_ReturnValue_1 = CallFunc_GetAttribute_ReturnValue_1;
	Parms.CallFunc_GetCurrentValue_ReturnValue = CallFunc_GetCurrentValue_ReturnValue;
	Parms.K2Node_DynamicCast_AsAttribute_Max_Health = K2Node_DynamicCast_AsAttribute_Max_Health;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_CustomEvent_NewMaxHealth = K2Node_CustomEvent_NewMaxHealth;
	Parms.K2Node_CustomEvent_Difference = K2Node_CustomEvent_Difference;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_1 = CallFunc_Greater_FloatFloat_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_1 = CallFunc_GetDynamicMaterial_ReturnValue_1;
	Parms.K2Node_CustomEvent_Attribute = K2Node_CustomEvent_Attribute;
	Parms.K2Node_CustomEvent_Value = K2Node_CustomEvent_Value;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


