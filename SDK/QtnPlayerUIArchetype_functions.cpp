#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass QtnPlayerUIArchetype.QtnPlayerUIArchetype_C
// (Actor)

class UClass* AQtnPlayerUIArchetype_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QtnPlayerUIArchetype_C");

	return Clss;
}


// QtnPlayerUIArchetype_C QtnPlayerUIArchetype.Default__QtnPlayerUIArchetype_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AQtnPlayerUIArchetype_C* AQtnPlayerUIArchetype_C::GetDefaultObj()
{
	static class AQtnPlayerUIArchetype_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AQtnPlayerUIArchetype_C*>(AQtnPlayerUIArchetype_C::StaticClass()->DefaultObject);

	return Default;
}


// Function QtnPlayerUIArchetype.QtnPlayerUIArchetype_C.GetViewportHUD
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQtnViewportHUD*             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UViewportHUDScreen_C*        CallFunc_GetScreen_ReturnValue                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetMainWidget_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnViewportHUD*             K2Node_DynamicCast_AsQtn_Viewport_HUD                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

class UQtnViewportHUD* AQtnPlayerUIArchetype_C::GetViewportHUD(class UViewportHUDScreen_C* CallFunc_GetScreen_ReturnValue, class UUserWidget* CallFunc_GetMainWidget_ReturnValue, class UQtnViewportHUD* K2Node_DynamicCast_AsQtn_Viewport_HUD, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnPlayerUIArchetype_C", "GetViewportHUD");

	Params::AQtnPlayerUIArchetype_C_GetViewportHUD_Params Parms{};

	Parms.CallFunc_GetScreen_ReturnValue = CallFunc_GetScreen_ReturnValue;
	Parms.CallFunc_GetMainWidget_ReturnValue = CallFunc_GetMainWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Viewport_HUD = K2Node_DynamicCast_AsQtn_Viewport_HUD;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function QtnPlayerUIArchetype.QtnPlayerUIArchetype_C.Check for Subtitle Inhibitors
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Inhibited                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void AQtnPlayerUIArchetype_C::Check_for_Subtitle_Inhibitors(bool* Inhibited, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnPlayerUIArchetype_C", "Check for Subtitle Inhibitors");

	Params::AQtnPlayerUIArchetype_C_Check_for_Subtitle_Inhibitors_Params Parms{};

	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Inhibited != nullptr)
		*Inhibited = Parms.Inhibited;

}


// Function QtnPlayerUIArchetype.QtnPlayerUIArchetype_C.RemoveSubtitleInhibitor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     InhibitingObject                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Check_for_Subtitle_Inhibitors_Inhibited                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void AQtnPlayerUIArchetype_C::RemoveSubtitleInhibitor(class UObject*& InhibitingObject, bool CallFunc_Check_for_Subtitle_Inhibitors_Inhibited, bool CallFunc_Array_RemoveItem_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnPlayerUIArchetype_C", "RemoveSubtitleInhibitor");

	Params::AQtnPlayerUIArchetype_C_RemoveSubtitleInhibitor_Params Parms{};

	Parms.InhibitingObject = InhibitingObject;
	Parms.CallFunc_Check_for_Subtitle_Inhibitors_Inhibited = CallFunc_Check_for_Subtitle_Inhibitors_Inhibited;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnPlayerUIArchetype.QtnPlayerUIArchetype_C.AddSubtitleInhibitor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     NewInhibitor                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Check_for_Subtitle_Inhibitors_Inhibited                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQtnPlayerUIArchetype_C::AddSubtitleInhibitor(class UObject*& NewInhibitor, bool CallFunc_Check_for_Subtitle_Inhibitors_Inhibited, int32 CallFunc_Array_AddUnique_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnPlayerUIArchetype_C", "AddSubtitleInhibitor");

	Params::AQtnPlayerUIArchetype_C_AddSubtitleInhibitor_Params Parms{};

	Parms.NewInhibitor = NewInhibitor;
	Parms.CallFunc_Check_for_Subtitle_Inhibitors_Inhibited = CallFunc_Check_for_Subtitle_Inhibitors_Inhibited;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnPlayerUIArchetype.QtnPlayerUIArchetype_C.RemoveRangedThreat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      RangedThreatActor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerHUDScreen_C*          CallFunc_GetScreen_ReturnValue                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCombatHUDScreen_C*          CallFunc_GetSubScreen_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCombatHUD_C*                CallFunc_GetUserWidget_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQtnPlayerUIArchetype_C::RemoveRangedThreat(class AActor* RangedThreatActor, class UPlayerHUDScreen_C* CallFunc_GetScreen_ReturnValue, class UCombatHUDScreen_C* CallFunc_GetSubScreen_ReturnValue, class UCombatHUD_C* CallFunc_GetUserWidget_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnPlayerUIArchetype_C", "RemoveRangedThreat");

	Params::AQtnPlayerUIArchetype_C_RemoveRangedThreat_Params Parms{};

	Parms.RangedThreatActor = RangedThreatActor;
	Parms.CallFunc_GetScreen_ReturnValue = CallFunc_GetScreen_ReturnValue;
	Parms.CallFunc_GetSubScreen_ReturnValue = CallFunc_GetSubScreen_ReturnValue;
	Parms.CallFunc_GetUserWidget_ReturnValue = CallFunc_GetUserWidget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnPlayerUIArchetype.QtnPlayerUIArchetype_C.AddRangedThreat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      RangedThreatActor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerHUDScreen_C*          CallFunc_GetScreen_ReturnValue                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCombatHUDScreen_C*          CallFunc_GetSubScreen_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCombatHUD_C*                CallFunc_GetUserWidget_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQtnPlayerUIArchetype_C::AddRangedThreat(class AActor* RangedThreatActor, class UPlayerHUDScreen_C* CallFunc_GetScreen_ReturnValue, class UCombatHUDScreen_C* CallFunc_GetSubScreen_ReturnValue, class UCombatHUD_C* CallFunc_GetUserWidget_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnPlayerUIArchetype_C", "AddRangedThreat");

	Params::AQtnPlayerUIArchetype_C_AddRangedThreat_Params Parms{};

	Parms.RangedThreatActor = RangedThreatActor;
	Parms.CallFunc_GetScreen_ReturnValue = CallFunc_GetScreen_ReturnValue;
	Parms.CallFunc_GetSubScreen_ReturnValue = CallFunc_GetSubScreen_ReturnValue;
	Parms.CallFunc_GetUserWidget_ReturnValue = CallFunc_GetUserWidget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnPlayerUIArchetype.QtnPlayerUIArchetype_C.RefreshCombatFillRatio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              FillRatio                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              FadeDuration                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ForVictimEscape                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AQtnPlayerUIArchetype_C::RefreshCombatFillRatio(float FillRatio, float FadeDuration, bool ForVictimEscape)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnPlayerUIArchetype_C", "RefreshCombatFillRatio");

	Params::AQtnPlayerUIArchetype_C_RefreshCombatFillRatio_Params Parms{};

	Parms.FillRatio = FillRatio;
	Parms.FadeDuration = FadeDuration;
	Parms.ForVictimEscape = ForVictimEscape;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnPlayerUIArchetype.QtnPlayerUIArchetype_C.RemoveCombatAbility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQtnVerb*                    VerbObject                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCombatHUD_FoundWidget                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCombatHUD_C*                CallFunc_GetCombatHUD_CombatHUD                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQtnPlayerUIArchetype_C::RemoveCombatAbility(class UQtnVerb* VerbObject, bool CallFunc_GetCombatHUD_FoundWidget, class UCombatHUD_C* CallFunc_GetCombatHUD_CombatHUD)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnPlayerUIArchetype_C", "RemoveCombatAbility");

	Params::AQtnPlayerUIArchetype_C_RemoveCombatAbility_Params Parms{};

	Parms.VerbObject = VerbObject;
	Parms.CallFunc_GetCombatHUD_FoundWidget = CallFunc_GetCombatHUD_FoundWidget;
	Parms.CallFunc_GetCombatHUD_CombatHUD = CallFunc_GetCombatHUD_CombatHUD;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnPlayerUIArchetype.QtnPlayerUIArchetype_C.AddCombatAbility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQtnVerb*                    VerbObject                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCombatHUD_FoundWidget                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCombatHUD_C*                CallFunc_GetCombatHUD_CombatHUD                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQtnPlayerUIArchetype_C::AddCombatAbility(class UQtnVerb* VerbObject, bool CallFunc_GetCombatHUD_FoundWidget, class UCombatHUD_C* CallFunc_GetCombatHUD_CombatHUD)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnPlayerUIArchetype_C", "AddCombatAbility");

	Params::AQtnPlayerUIArchetype_C_AddCombatAbility_Params Parms{};

	Parms.VerbObject = VerbObject;
	Parms.CallFunc_GetCombatHUD_FoundWidget = CallFunc_GetCombatHUD_FoundWidget;
	Parms.CallFunc_GetCombatHUD_CombatHUD = CallFunc_GetCombatHUD_CombatHUD;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnPlayerUIArchetype.QtnPlayerUIArchetype_C.Get FTUX Training Moment Screen
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_FTUX_TrainingMoment_Screen_C*FtuxTrainingMomentScreen                                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_FTUX_TrainingMoment_Screen_C*CallFunc_GetScreen_ReturnValue                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQtnPlayerUIArchetype_C::Get_FTUX_Training_Moment_Screen(class UUI_FTUX_TrainingMoment_Screen_C** FtuxTrainingMomentScreen, class UUI_FTUX_TrainingMoment_Screen_C* CallFunc_GetScreen_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnPlayerUIArchetype_C", "Get FTUX Training Moment Screen");

	Params::AQtnPlayerUIArchetype_C_Get_FTUX_Training_Moment_Screen_Params Parms{};

	Parms.CallFunc_GetScreen_ReturnValue = CallFunc_GetScreen_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (FtuxTrainingMomentScreen != nullptr)
		*FtuxTrainingMomentScreen = Parms.FtuxTrainingMomentScreen;

}


// Function QtnPlayerUIArchetype.QtnPlayerUIArchetype_C.GetGoalHUD
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UGoalHUD_C*                  GoalHUD                                                          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerHUDScreen_C*          CallFunc_GetScreen_ReturnValue                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGoalHUD_C*                  CallFunc_GetUserWidget_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQtnPlayerUIArchetype_C::GetGoalHUD(class UGoalHUD_C** GoalHUD, class UPlayerHUDScreen_C* CallFunc_GetScreen_ReturnValue, class UGoalHUD_C* CallFunc_GetUserWidget_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnPlayerUIArchetype_C", "GetGoalHUD");

	Params::AQtnPlayerUIArchetype_C_GetGoalHUD_Params Parms{};

	Parms.CallFunc_GetScreen_ReturnValue = CallFunc_GetScreen_ReturnValue;
	Parms.CallFunc_GetUserWidget_ReturnValue = CallFunc_GetUserWidget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (GoalHUD != nullptr)
		*GoalHUD = Parms.GoalHUD;

}


// Function QtnPlayerUIArchetype.QtnPlayerUIArchetype_C.ClearGoalTextOverrides
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGoalHUD_C*                  GoalHUD                                                          (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGoalHUD_C*                  CallFunc_GetGoalHUD_goalHUD                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQtnPlayerUIArchetype_C::ClearGoalTextOverrides(class UGoalHUD_C* GoalHUD, class UGoalHUD_C* CallFunc_GetGoalHUD_goalHUD)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnPlayerUIArchetype_C", "ClearGoalTextOverrides");

	Params::AQtnPlayerUIArchetype_C_ClearGoalTextOverrides_Params Parms{};

	Parms.GoalHUD = GoalHUD;
	Parms.CallFunc_GetGoalHUD_goalHUD = CallFunc_GetGoalHUD_goalHUD;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnPlayerUIArchetype.QtnPlayerUIArchetype_C.SetGoalTextOverrides
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        GoalTitle                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        GoalSubtext                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        NewLocalVar_0                                                    (Edit, BlueprintVisible)
// class UGoalHUD_C*                  GoalHUD                                                          (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGoalHUD_C*                  CallFunc_GetGoalHUD_goalHUD                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQtnPlayerUIArchetype_C::SetGoalTextOverrides(class FText GoalTitle, class FText GoalSubtext, class FText NewLocalVar_0, class UGoalHUD_C* GoalHUD, class UGoalHUD_C* CallFunc_GetGoalHUD_goalHUD)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnPlayerUIArchetype_C", "SetGoalTextOverrides");

	Params::AQtnPlayerUIArchetype_C_SetGoalTextOverrides_Params Parms{};

	Parms.GoalTitle = GoalTitle;
	Parms.GoalSubtext = GoalSubtext;
	Parms.NewLocalVar_0 = NewLocalVar_0;
	Parms.GoalHUD = GoalHUD;
	Parms.CallFunc_GetGoalHUD_goalHUD = CallFunc_GetGoalHUD_goalHUD;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnPlayerUIArchetype.QtnPlayerUIArchetype_C.AnnounceNewArea
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        AreaAnnouncementName                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void AQtnPlayerUIArchetype_C::AnnounceNewArea(class FText& AreaAnnouncementName, class FText CallFunc_MakeLiteralText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnPlayerUIArchetype_C", "AnnounceNewArea");

	Params::AQtnPlayerUIArchetype_C_AnnounceNewArea_Params Parms{};

	Parms.AreaAnnouncementName = AreaAnnouncementName;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnPlayerUIArchetype.QtnPlayerUIArchetype_C.GetBugItInfoFromBP
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
// class FString                      Info                                                             (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class UQtnGoalManager*             CallFunc_GetGoalManager_ReturnValue                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoalManagerBase_C*       K2Node_DynamicCast_AsQtn_Goal_Manager_Base                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_getCurrentLevel_level_name                              (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentArc_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UQtnGoal*>            CallFunc_Get_Current_Goals_activeGoals                           (ReferenceParm, ContainsInstancedReference)
// TArray<class UClass*>              CallFunc_Get_Current_Goals_activeGoalClassses                    (ReferenceParm)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class UQtnGoal*                    CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_7                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

class FString AQtnPlayerUIArchetype_C::GetBugItInfoFromBP(const class FString& Info, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, class UQtnGoalManagerBase_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Base, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_getCurrentLevel_level_name, int32 CallFunc_GetCurrentArc_ReturnValue, TArray<class UQtnGoal*>& CallFunc_Get_Current_Goals_activeGoals, TArray<class UClass*>& CallFunc_Get_Current_Goals_activeGoalClassses, const class FString& CallFunc_Conv_IntToString_ReturnValue, class UQtnGoal* CallFunc_Array_Get_Item, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnPlayerUIArchetype_C", "GetBugItInfoFromBP");

	Params::AQtnPlayerUIArchetype_C_GetBugItInfoFromBP_Params Parms{};

	Parms.Info = Info;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_GetGoalManager_ReturnValue = CallFunc_GetGoalManager_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Goal_Manager_Base = K2Node_DynamicCast_AsQtn_Goal_Manager_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_getCurrentLevel_level_name = CallFunc_getCurrentLevel_level_name;
	Parms.CallFunc_GetCurrentArc_ReturnValue = CallFunc_GetCurrentArc_ReturnValue;
	Parms.CallFunc_Get_Current_Goals_activeGoals = CallFunc_Get_Current_Goals_activeGoals;
	Parms.CallFunc_Get_Current_Goals_activeGoalClassses = CallFunc_Get_Current_Goals_activeGoalClassses;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_Concat_StrStr_ReturnValue_6 = CallFunc_Concat_StrStr_ReturnValue_6;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_7 = CallFunc_Concat_StrStr_ReturnValue_7;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function QtnPlayerUIArchetype.QtnPlayerUIArchetype_C.GetFTUXWeaponScreen
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_FTUX_DedicatedMap_Screen_C*FtuxWeaponScreen                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_FTUX_DedicatedMap_Screen_C*CallFunc_GetScreen_ReturnValue                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQtnPlayerUIArchetype_C::GetFTUXWeaponScreen(class UUI_FTUX_DedicatedMap_Screen_C** FtuxWeaponScreen, class UUI_FTUX_DedicatedMap_Screen_C* CallFunc_GetScreen_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnPlayerUIArchetype_C", "GetFTUXWeaponScreen");

	Params::AQtnPlayerUIArchetype_C_GetFTUXWeaponScreen_Params Parms{};

	Parms.CallFunc_GetScreen_ReturnValue = CallFunc_GetScreen_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (FtuxWeaponScreen != nullptr)
		*FtuxWeaponScreen = Parms.FtuxWeaponScreen;

}


// Function QtnPlayerUIArchetype.QtnPlayerUIArchetype_C.UnRegisterHUDSubscreen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      ScreenClass                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerHUDScreen_C*          CallFunc_GetScreen_ReturnValue                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void AQtnPlayerUIArchetype_C::UnRegisterHUDSubscreen(class UClass* ScreenClass, class UPlayerHUDScreen_C* CallFunc_GetScreen_ReturnValue, bool CallFunc_IsValidClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnPlayerUIArchetype_C", "UnRegisterHUDSubscreen");

	Params::AQtnPlayerUIArchetype_C_UnRegisterHUDSubscreen_Params Parms{};

	Parms.ScreenClass = ScreenClass;
	Parms.CallFunc_GetScreen_ReturnValue = CallFunc_GetScreen_ReturnValue;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnPlayerUIArchetype.QtnPlayerUIArchetype_C.RegisterHUDSubscreen
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      SubScreenClass                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnScreen*                  SubScreen                                                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlayerHUDScreen_C*          CallFunc_GetScreen_ReturnValue                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnScreen*                  CallFunc_RegisterSubScreen_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQtnPlayerUIArchetype_C::RegisterHUDSubscreen(class UClass* SubScreenClass, class UQtnScreen** SubScreen, bool CallFunc_IsValidClass_ReturnValue, class UPlayerHUDScreen_C* CallFunc_GetScreen_ReturnValue, class UQtnScreen* CallFunc_RegisterSubScreen_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnPlayerUIArchetype_C", "RegisterHUDSubscreen");

	Params::AQtnPlayerUIArchetype_C_RegisterHUDSubscreen_Params Parms{};

	Parms.SubScreenClass = SubScreenClass;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_GetScreen_ReturnValue = CallFunc_GetScreen_ReturnValue;
	Parms.CallFunc_RegisterSubScreen_ReturnValue = CallFunc_RegisterSubScreen_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (SubScreen != nullptr)
		*SubScreen = Parms.SubScreen;

}


// Function QtnPlayerUIArchetype.QtnPlayerUIArchetype_C.OnGetCanPlayFailModalDialog
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Ok                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AQtnPlayerUIArchetype_C::OnGetCanPlayFailModalDialog(bool Ok)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnPlayerUIArchetype_C", "OnGetCanPlayFailModalDialog");

	Params::AQtnPlayerUIArchetype_C_OnGetCanPlayFailModalDialog_Params Parms{};

	Parms.Ok = Ok;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnPlayerUIArchetype.QtnPlayerUIArchetype_C.MinimizeTeamInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enabled                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMessagingHUDScreen_C*       CallFunc_GetScreen_ReturnValue                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerPanelHUD_C*           CallFunc_GetUserWidget_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQtnPlayerUIArchetype_C::MinimizeTeamInfo(bool Enabled, class UMessagingHUDScreen_C* CallFunc_GetScreen_ReturnValue, class UPlayerPanelHUD_C* CallFunc_GetUserWidget_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnPlayerUIArchetype_C", "MinimizeTeamInfo");

	Params::AQtnPlayerUIArchetype_C_MinimizeTeamInfo_Params Parms{};

	Parms.Enabled = Enabled;
	Parms.CallFunc_GetScreen_ReturnValue = CallFunc_GetScreen_ReturnValue;
	Parms.CallFunc_GetUserWidget_ReturnValue = CallFunc_GetUserWidget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnPlayerUIArchetype.QtnPlayerUIArchetype_C.UpdateHintText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        HintText                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class UQtnScreenMessagingHUD*      CallFunc_GetMessagingHUD_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMessagingHUDScreen_C*       K2Node_DynamicCast_AsMessaging_HUDScreen                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void AQtnPlayerUIArchetype_C::UpdateHintText(class FText HintText, class UQtnScreenMessagingHUD* CallFunc_GetMessagingHUD_ReturnValue, class UMessagingHUDScreen_C* K2Node_DynamicCast_AsMessaging_HUDScreen, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnPlayerUIArchetype_C", "UpdateHintText");

	Params::AQtnPlayerUIArchetype_C_UpdateHintText_Params Parms{};

	Parms.HintText = HintText;
	Parms.CallFunc_GetMessagingHUD_ReturnValue = CallFunc_GetMessagingHUD_ReturnValue;
	Parms.K2Node_DynamicCast_AsMessaging_HUDScreen = K2Node_DynamicCast_AsMessaging_HUDScreen;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnPlayerUIArchetype.QtnPlayerUIArchetype_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AQtnPlayerUIArchetype_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnPlayerUIArchetype_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnPlayerUIArchetype.QtnPlayerUIArchetype_C.ReadyForUIEvent_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnPlayerController*        LocalPlayerController                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerUI*                LocalPlayerUI                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQtnPlayerUIArchetype_C::ReadyForUIEvent_Event_0(class AQtnPlayerController* LocalPlayerController, class AQtnPlayerUI* LocalPlayerUI)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnPlayerUIArchetype_C", "ReadyForUIEvent_Event_0");

	Params::AQtnPlayerUIArchetype_C_ReadyForUIEvent_Event_0_Params Parms{};

	Parms.LocalPlayerController = LocalPlayerController;
	Parms.LocalPlayerUI = LocalPlayerUI;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnPlayerUIArchetype.QtnPlayerUIArchetype_C.OnPlayerUIOccupy
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AQtnBodyPawn*                OccupiedBodyPawn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               FirstTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AQtnPlayerUIArchetype_C::OnPlayerUIOccupy(class AQtnBodyPawn* OccupiedBodyPawn, bool FirstTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnPlayerUIArchetype_C", "OnPlayerUIOccupy");

	Params::AQtnPlayerUIArchetype_C_OnPlayerUIOccupy_Params Parms{};

	Parms.OccupiedBodyPawn = OccupiedBodyPawn;
	Parms.FirstTime = FirstTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnPlayerUIArchetype.QtnPlayerUIArchetype_C.BndEvt__QtnPlayerUIArchetype_QtnPlayerUILateTickComponent_K2Node_ComponentBoundEvent_0_OnLateTick__DelegateSignature
// (BlueprintEvent)
// Parameters:

void AQtnPlayerUIArchetype_C::BndEvt__QtnPlayerUIArchetype_QtnPlayerUILateTickComponent_K2Node_ComponentBoundEvent_0_OnLateTick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnPlayerUIArchetype_C", "BndEvt__QtnPlayerUIArchetype_QtnPlayerUILateTickComponent_K2Node_ComponentBoundEvent_0_OnLateTick__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnPlayerUIArchetype.QtnPlayerUIArchetype_C.Show Process Invite Spinner
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AQtnPlayerUIArchetype_C::Show_Process_Invite_Spinner()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnPlayerUIArchetype_C", "Show Process Invite Spinner");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnPlayerUIArchetype.QtnPlayerUIArchetype_C.Start Loading Spinner
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               DisableCancel                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        LoadingDescription                                               (BlueprintVisible, BlueprintReadOnly, Parm)

void AQtnPlayerUIArchetype_C::Start_Loading_Spinner(bool DisableCancel, class FText LoadingDescription)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnPlayerUIArchetype_C", "Start Loading Spinner");

	Params::AQtnPlayerUIArchetype_C_Start_Loading_Spinner_Params Parms{};

	Parms.DisableCancel = DisableCancel;
	Parms.LoadingDescription = LoadingDescription;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnPlayerUIArchetype.QtnPlayerUIArchetype_C.Loading Spinner Cancel
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AQtnPlayerUIArchetype_C::Loading_Spinner_Cancel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnPlayerUIArchetype_C", "Loading Spinner Cancel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnPlayerUIArchetype.QtnPlayerUIArchetype_C.Hide Process Invite Spinner
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EQtnAcceptInviteResult  Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnOnlineErrorCode         ErrorCode                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void AQtnPlayerUIArchetype_C::Hide_Process_Invite_Spinner(enum class EQtnAcceptInviteResult Result, const struct FQtnOnlineErrorCode& ErrorCode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnPlayerUIArchetype_C", "Hide Process Invite Spinner");

	Params::AQtnPlayerUIArchetype_C_Hide_Process_Invite_Spinner_Params Parms{};

	Parms.Result = Result;
	Parms.ErrorCode = ErrorCode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnPlayerUIArchetype.QtnPlayerUIArchetype_C.OnLostConnection
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AQtnPlayerUIArchetype_C::OnLostConnection()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnPlayerUIArchetype_C", "OnLostConnection");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnPlayerUIArchetype.QtnPlayerUIArchetype_C.ExecuteUbergraph_QtnPlayerUIArchetype
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_QueueSimpleModalDialog_ReturnValue                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class UUserWidget*                 CallFunc_QueueSimpleModalDialog_ReturnValue_1                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerController*        K2Node_CustomEvent_localPlayerController                         (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerUI*                K2Node_CustomEvent_localPlayerUI                                 (ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                K2Node_Event_occupiedBodyPawn                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_firstTime                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlayerHUDScreen_C*          CallFunc_GetScreen_ReturnValue                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerHUDScreen_C*          CallFunc_GetScreen_ReturnValue_1                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetMainWidget_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_FTUX_TrainingMoment_Screen_C*CallFunc_GetScreen_ReturnValue_2                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerHUD_C*                K2Node_DynamicCast_AsPlayer_HUD                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ULoadingSpinner_Screen_C*    CallFunc_GetScreen_ReturnValue_3                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_DisableCancel                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_CustomEvent_LoadingDescription                            (None)
// enum class EQtnAcceptInviteResult  K2Node_CustomEvent_Result                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnOnlineErrorCode         K2Node_CustomEvent_ErrorCode                                     (NoDestructor)
// class FText                        CallFunc_Conv_OnlineErrorToText_ReturnValue                      (None)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// enum class EQtnPlatform            CallFunc_GetPlatform_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// class UQtnOnlineManager*           CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UViewportHUDScreen_C*        CallFunc_GetScreen_ReturnValue_4                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// enum class EQtnPlatform            CallFunc_GetPlatform_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_1                           (None)
// class UUserWidget*                 CallFunc_QueueSimpleModalDialog_ReturnValue_2                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_2                           (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_3                           (None)
// class UUserWidget*                 CallFunc_QueueSimpleModalDialog_ReturnValue_3                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_QueueSimpleModalDialog_ReturnValue_4                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_QueueSimpleModalDialog_ReturnValue_5                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_4                           (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_5                           (None)
// class UUserWidget*                 CallFunc_QueueSimpleModalDialog_ReturnValue_6                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_QueueSimpleModalDialog_ReturnValue_7                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnPlatform            CallFunc_GetPlatform_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void AQtnPlayerUIArchetype_C::ExecuteUbergraph_QtnPlayerUIArchetype(int32 EntryPoint, class UUserWidget* CallFunc_QueueSimpleModalDialog_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class UUserWidget* CallFunc_QueueSimpleModalDialog_ReturnValue_1, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnPlayerController* K2Node_CustomEvent_localPlayerController, class AQtnPlayerUI* K2Node_CustomEvent_localPlayerUI, class AQtnBodyPawn* K2Node_Event_occupiedBodyPawn, bool K2Node_Event_firstTime, class UPlayerHUDScreen_C* CallFunc_GetScreen_ReturnValue, class UPlayerHUDScreen_C* CallFunc_GetScreen_ReturnValue_1, class UUserWidget* CallFunc_GetMainWidget_ReturnValue, class UUI_FTUX_TrainingMoment_Screen_C* CallFunc_GetScreen_ReturnValue_2, class UPlayerHUD_C* K2Node_DynamicCast_AsPlayer_HUD, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class ULoadingSpinner_Screen_C* CallFunc_GetScreen_ReturnValue_3, bool K2Node_CustomEvent_DisableCancel, class FText K2Node_CustomEvent_LoadingDescription, enum class EQtnAcceptInviteResult K2Node_CustomEvent_Result, const struct FQtnOnlineErrorCode& K2Node_CustomEvent_ErrorCode, class FText CallFunc_Conv_OnlineErrorToText_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, enum class EQtnPlatform CallFunc_GetPlatform_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, bool K2Node_SwitchEnum_CmpSuccess_1, class FText CallFunc_Format_ReturnValue_1, class UQtnOnlineManager* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UViewportHUDScreen_C* CallFunc_GetScreen_ReturnValue_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, enum class EQtnPlatform CallFunc_GetPlatform_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_2, class FText CallFunc_MakeLiteralText_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FText CallFunc_MakeLiteralText_ReturnValue_1, class UUserWidget* CallFunc_QueueSimpleModalDialog_ReturnValue_2, class FText CallFunc_MakeLiteralText_ReturnValue_2, class FText CallFunc_MakeLiteralText_ReturnValue_3, class UUserWidget* CallFunc_QueueSimpleModalDialog_ReturnValue_3, class UUserWidget* CallFunc_QueueSimpleModalDialog_ReturnValue_4, class UUserWidget* CallFunc_QueueSimpleModalDialog_ReturnValue_5, class FText CallFunc_MakeLiteralText_ReturnValue_4, class FText CallFunc_MakeLiteralText_ReturnValue_5, class UUserWidget* CallFunc_QueueSimpleModalDialog_ReturnValue_6, class UUserWidget* CallFunc_QueueSimpleModalDialog_ReturnValue_7, enum class EQtnPlatform CallFunc_GetPlatform_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool K2Node_SwitchEnum_CmpSuccess_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnPlayerUIArchetype_C", "ExecuteUbergraph_QtnPlayerUIArchetype");

	Params::AQtnPlayerUIArchetype_C_ExecuteUbergraph_QtnPlayerUIArchetype_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_QueueSimpleModalDialog_ReturnValue = CallFunc_QueueSimpleModalDialog_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_QueueSimpleModalDialog_ReturnValue_1 = CallFunc_QueueSimpleModalDialog_ReturnValue_1;
	Parms.CallFunc_GetQtnGameState_ReturnValue = CallFunc_GetQtnGameState_ReturnValue;
	Parms.K2Node_CustomEvent_localPlayerController = K2Node_CustomEvent_localPlayerController;
	Parms.K2Node_CustomEvent_localPlayerUI = K2Node_CustomEvent_localPlayerUI;
	Parms.K2Node_Event_occupiedBodyPawn = K2Node_Event_occupiedBodyPawn;
	Parms.K2Node_Event_firstTime = K2Node_Event_firstTime;
	Parms.CallFunc_GetScreen_ReturnValue = CallFunc_GetScreen_ReturnValue;
	Parms.CallFunc_GetScreen_ReturnValue_1 = CallFunc_GetScreen_ReturnValue_1;
	Parms.CallFunc_GetMainWidget_ReturnValue = CallFunc_GetMainWidget_ReturnValue;
	Parms.CallFunc_GetScreen_ReturnValue_2 = CallFunc_GetScreen_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsPlayer_HUD = K2Node_DynamicCast_AsPlayer_HUD;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetScreen_ReturnValue_3 = CallFunc_GetScreen_ReturnValue_3;
	Parms.K2Node_CustomEvent_DisableCancel = K2Node_CustomEvent_DisableCancel;
	Parms.K2Node_CustomEvent_LoadingDescription = K2Node_CustomEvent_LoadingDescription;
	Parms.K2Node_CustomEvent_Result = K2Node_CustomEvent_Result;
	Parms.K2Node_CustomEvent_ErrorCode = K2Node_CustomEvent_ErrorCode;
	Parms.CallFunc_Conv_OnlineErrorToText_ReturnValue = CallFunc_Conv_OnlineErrorToText_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_GetPlatform_ReturnValue = CallFunc_GetPlatform_ReturnValue;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetScreen_ReturnValue_4 = CallFunc_GetScreen_ReturnValue_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetPlatform_ReturnValue_1 = CallFunc_GetPlatform_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_MakeLiteralText_ReturnValue_1 = CallFunc_MakeLiteralText_ReturnValue_1;
	Parms.CallFunc_QueueSimpleModalDialog_ReturnValue_2 = CallFunc_QueueSimpleModalDialog_ReturnValue_2;
	Parms.CallFunc_MakeLiteralText_ReturnValue_2 = CallFunc_MakeLiteralText_ReturnValue_2;
	Parms.CallFunc_MakeLiteralText_ReturnValue_3 = CallFunc_MakeLiteralText_ReturnValue_3;
	Parms.CallFunc_QueueSimpleModalDialog_ReturnValue_3 = CallFunc_QueueSimpleModalDialog_ReturnValue_3;
	Parms.CallFunc_QueueSimpleModalDialog_ReturnValue_4 = CallFunc_QueueSimpleModalDialog_ReturnValue_4;
	Parms.CallFunc_QueueSimpleModalDialog_ReturnValue_5 = CallFunc_QueueSimpleModalDialog_ReturnValue_5;
	Parms.CallFunc_MakeLiteralText_ReturnValue_4 = CallFunc_MakeLiteralText_ReturnValue_4;
	Parms.CallFunc_MakeLiteralText_ReturnValue_5 = CallFunc_MakeLiteralText_ReturnValue_5;
	Parms.CallFunc_QueueSimpleModalDialog_ReturnValue_6 = CallFunc_QueueSimpleModalDialog_ReturnValue_6;
	Parms.CallFunc_QueueSimpleModalDialog_ReturnValue_7 = CallFunc_QueueSimpleModalDialog_ReturnValue_7;
	Parms.CallFunc_GetPlatform_ReturnValue_2 = CallFunc_GetPlatform_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_SwitchEnum_CmpSuccess_3 = K2Node_SwitchEnum_CmpSuccess_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnPlayerUIArchetype.QtnPlayerUIArchetype_C.SubtitleInhibitorChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Inhibited                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AQtnPlayerUIArchetype_C::SubtitleInhibitorChanged__DelegateSignature(bool Inhibited)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnPlayerUIArchetype_C", "SubtitleInhibitorChanged__DelegateSignature");

	Params::AQtnPlayerUIArchetype_C_SubtitleInhibitorChanged__DelegateSignature_Params Parms{};

	Parms.Inhibited = Inhibited;

	UObject::ProcessEvent(Func, &Parms);

}

}


