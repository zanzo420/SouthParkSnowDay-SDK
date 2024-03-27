#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass GoalHUD.GoalHUD_C
// (None)

class UClass* UGoalHUD_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GoalHUD_C");

	return Clss;
}


// GoalHUD_C GoalHUD.Default__GoalHUD_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGoalHUD_C* UGoalHUD_C::GetDefaultObj()
{
	static class UGoalHUD_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGoalHUD_C*>(UGoalHUD_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GoalHUD.GoalHUD_C.SequenceEvent__ENTRYPOINTGoalHUD_0
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGoalHUD_C::SequenceEvent__ENTRYPOINTGoalHUD_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GoalHUD_C", "SequenceEvent__ENTRYPOINTGoalHUD_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GoalHUD.GoalHUD_C.IsBSPresentationInProgress
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               Yes                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_TimerExistsHandle_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGoalHUD_C::IsBSPresentationInProgress(bool* Yes, bool CallFunc_IsValidClass_ReturnValue, bool CallFunc_K2_TimerExistsHandle_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GoalHUD_C", "IsBSPresentationInProgress");

	Params::UGoalHUD_C_IsBSPresentationInProgress_Params Parms{};

	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_K2_TimerExistsHandle_ReturnValue = CallFunc_K2_TimerExistsHandle_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Yes != nullptr)
		*Yes = Parms.Yes;

}


// Function GoalHUD.GoalHUD_C.Handle Enemy Bullshit Camera Start
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGoalHUD_C::Handle_Enemy_Bullshit_Camera_Start()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GoalHUD_C", "Handle Enemy Bullshit Camera Start");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GoalHUD.GoalHUD_C.RefreshActiveEnemyBullshit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      BSClass                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NewCount                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OldCount                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                AffectedBody                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              TimerMax                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      LOCAL_IncomingBSClass                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ClassIsChildOf_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGoalHUD_C::RefreshActiveEnemyBullshit(class UClass* BSClass, int32 NewCount, int32 OldCount, class AQtnBodyPawn* AffectedBody, float TimerMax, class UClass* LOCAL_IncomingBSClass, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GoalHUD_C", "RefreshActiveEnemyBullshit");

	Params::UGoalHUD_C_RefreshActiveEnemyBullshit_Params Parms{};

	Parms.BSClass = BSClass;
	Parms.NewCount = NewCount;
	Parms.OldCount = OldCount;
	Parms.AffectedBody = AffectedBody;
	Parms.TimerMax = TimerMax;
	Parms.LOCAL_IncomingBSClass = LOCAL_IncomingBSClass;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_ClassIsChildOf_ReturnValue = CallFunc_ClassIsChildOf_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GoalHUD.GoalHUD_C.IsAnnouncementEnemyBullshit
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UGoalHUD_C::IsAnnouncementEnemyBullshit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GoalHUD_C", "IsAnnouncementEnemyBullshit");

	Params::UGoalHUD_C_IsAnnouncementEnemyBullshit_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GoalHUD.GoalHUD_C.GetBullshitClassFromCheatVerb
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      EnemyCheatActivationVerbBase                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      QtnBullshitBPBaseArchetype                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Found                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetClassDisplayName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_SyncLoadClass_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsQtn_Bullshit_BPBase_Archetype          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGoalHUD_C::GetBullshitClassFromCheatVerb(class UClass* EnemyCheatActivationVerbBase, class UClass** QtnBullshitBPBaseArchetype, bool* Found, const class FString& CallFunc_GetClassDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class UClass* CallFunc_SyncLoadClass_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsQtn_Bullshit_BPBase_Archetype, bool K2Node_ClassDynamicCast_bSuccess, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_IsValidClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GoalHUD_C", "GetBullshitClassFromCheatVerb");

	Params::UGoalHUD_C_GetBullshitClassFromCheatVerb_Params Parms{};

	Parms.EnemyCheatActivationVerbBase = EnemyCheatActivationVerbBase;
	Parms.CallFunc_GetClassDisplayName_ReturnValue = CallFunc_GetClassDisplayName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_SyncLoadClass_ReturnValue = CallFunc_SyncLoadClass_ReturnValue;
	Parms.K2Node_ClassDynamicCast_AsQtn_Bullshit_BPBase_Archetype = K2Node_ClassDynamicCast_AsQtn_Bullshit_BPBase_Archetype;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (QtnBullshitBPBaseArchetype != nullptr)
		*QtnBullshitBPBaseArchetype = Parms.QtnBullshitBPBaseArchetype;

	if (Found != nullptr)
		*Found = Parms.Found;

}


// Function GoalHUD.GoalHUD_C.CreateCardStructFromBullshitArchetype
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TSubclassOf<class UQtnBullshit>    bullshitClass                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FUI_Card_Struct             UI_Card_Struct                                                   (Parm, OutParm, HasGetValueTypeHash)
// class UQtnBullshit*                CallFunc_GetBullshitArchetype_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_GetIconForUI_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue            (UObjectWrapper, HasGetValueTypeHash)
// struct FUI_Card_Struct             K2Node_MakeStruct_UI_Card_Struct                                 (HasGetValueTypeHash)

void UGoalHUD_C::CreateCardStructFromBullshitArchetype(TSubclassOf<class UQtnBullshit> bullshitClass, struct FUI_Card_Struct* UI_Card_Struct, class UQtnBullshit* CallFunc_GetBullshitArchetype_ReturnValue, class UTexture2D* CallFunc_GetIconForUI_ReturnValue, TSoftObjectPtr<class UTexture2D> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue, const struct FUI_Card_Struct& K2Node_MakeStruct_UI_Card_Struct)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GoalHUD_C", "CreateCardStructFromBullshitArchetype");

	Params::UGoalHUD_C_CreateCardStructFromBullshitArchetype_Params Parms{};

	Parms.bullshitClass = bullshitClass;
	Parms.CallFunc_GetBullshitArchetype_ReturnValue = CallFunc_GetBullshitArchetype_ReturnValue;
	Parms.CallFunc_GetIconForUI_ReturnValue = CallFunc_GetIconForUI_ReturnValue;
	Parms.CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue = CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue;
	Parms.K2Node_MakeStruct_UI_Card_Struct = K2Node_MakeStruct_UI_Card_Struct;

	UObject::ProcessEvent(Func, &Parms);

	if (UI_Card_Struct != nullptr)
		*UI_Card_Struct = std::move(Parms.UI_Card_Struct);

}


// Function GoalHUD.GoalHUD_C.Refresh Scroll Text
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        GoalText                                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UGoalHUD_C::Refresh_Scroll_Text(class FText GoalText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GoalHUD_C", "Refresh Scroll Text");

	Params::UGoalHUD_C_Refresh_Scroll_Text_Params Parms{};

	Parms.GoalText = GoalText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GoalHUD.GoalHUD_C.HandleEnemyBullshitReset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGoalHUD_C::HandleEnemyBullshitReset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GoalHUD_C", "HandleEnemyBullshitReset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GoalHUD.GoalHUD_C.HandleEnemyBullshitResumePlay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGoalHUD_C::HandleEnemyBullshitResumePlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GoalHUD_C", "HandleEnemyBullshitResumePlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GoalHUD.GoalHUD_C.HandleEnemyBullshitReveal
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      CallFunc_GetBullshitClassFromCheatVerb_QtnBullshitBPBaseArchetype(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetBullshitClassFromCheatVerb_Found                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FUI_Card_Struct             CallFunc_CreateCardStructFromBullshitArchetype_UI_Card_Struct    (HasGetValueTypeHash)
// struct FUI_Card_Struct             CallFunc_CreateCardStructFromBullshitArchetype_UI_Card_Struct_1  (HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGoalHUD_C::HandleEnemyBullshitReveal(class UClass* CallFunc_GetBullshitClassFromCheatVerb_QtnBullshitBPBaseArchetype, bool CallFunc_GetBullshitClassFromCheatVerb_Found, const struct FUI_Card_Struct& CallFunc_CreateCardStructFromBullshitArchetype_UI_Card_Struct, const struct FUI_Card_Struct& CallFunc_CreateCardStructFromBullshitArchetype_UI_Card_Struct_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GoalHUD_C", "HandleEnemyBullshitReveal");

	Params::UGoalHUD_C_HandleEnemyBullshitReveal_Params Parms{};

	Parms.CallFunc_GetBullshitClassFromCheatVerb_QtnBullshitBPBaseArchetype = CallFunc_GetBullshitClassFromCheatVerb_QtnBullshitBPBaseArchetype;
	Parms.CallFunc_GetBullshitClassFromCheatVerb_Found = CallFunc_GetBullshitClassFromCheatVerb_Found;
	Parms.CallFunc_CreateCardStructFromBullshitArchetype_UI_Card_Struct = CallFunc_CreateCardStructFromBullshitArchetype_UI_Card_Struct;
	Parms.CallFunc_CreateCardStructFromBullshitArchetype_UI_Card_Struct_1 = CallFunc_CreateCardStructFromBullshitArchetype_UI_Card_Struct_1;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GoalHUD.GoalHUD_C.HandleEnemyBullshitStarted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      Enemy_Cheat_Activation_Verb_Base                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      NewLocalVar_0                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGoalHUD_C::HandleEnemyBullshitStarted(class UClass* Enemy_Cheat_Activation_Verb_Base, class UClass* NewLocalVar_0)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GoalHUD_C", "HandleEnemyBullshitStarted");

	Params::UGoalHUD_C_HandleEnemyBullshitStarted_Params Parms{};

	Parms.Enemy_Cheat_Activation_Verb_Base = Enemy_Cheat_Activation_Verb_Base;
	Parms.NewLocalVar_0 = NewLocalVar_0;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GoalHUD.GoalHUD_C.HandleLaunchFinished
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGoalHUD_C::HandleLaunchFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GoalHUD_C", "HandleLaunchFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GoalHUD.GoalHUD_C.HandleLaunchStarted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Arc                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnDifficulty          Difficulty                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGoalHUD_C::HandleLaunchStarted(int32 Arc, enum class EQtnDifficulty Difficulty)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GoalHUD_C", "HandleLaunchStarted");

	Params::UGoalHUD_C_HandleLaunchStarted_Params Parms{};

	Parms.Arc = Arc;
	Parms.Difficulty = Difficulty;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GoalHUD.GoalHUD_C.AddRemoveBossHealthBar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsAdding                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGoalHUD_C::AddRemoveBossHealthBar(bool IsAdding, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GoalHUD_C", "AddRemoveBossHealthBar");

	Params::UGoalHUD_C_AddRemoveBossHealthBar_Params Parms{};

	Parms.IsAdding = IsAdding;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Conv_BoolToString_ReturnValue = CallFunc_Conv_BoolToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GoalHUD.GoalHUD_C.RefreshEnemyBullshit
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEnemyBSManagerComponent_C*  LOCAL_EBS_Manager                                                (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNotificationEnemyBullshit_Widget_C*LOCAL_CurrentEBS_Widget                                          (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNotificationEnemyBullshit_Widget_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UNotificationEnemyBullshit_Widget_C*>CallFunc_Map_Values_Values                                       (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNotificationEnemyBullshit_Widget_C*CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Map_Length_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGoalHUD_C::RefreshEnemyBullshit(class UEnemyBSManagerComponent_C* LOCAL_EBS_Manager, class UNotificationEnemyBullshit_Widget_C* LOCAL_CurrentEBS_Widget, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UNotificationEnemyBullshit_Widget_C* CallFunc_Array_Get_Item, TArray<class UNotificationEnemyBullshit_Widget_C*>& CallFunc_Map_Values_Values, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsVisible_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, class UNotificationEnemyBullshit_Widget_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Map_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GoalHUD_C", "RefreshEnemyBullshit");

	Params::UGoalHUD_C_RefreshEnemyBullshit_Params Parms{};

	Parms.LOCAL_EBS_Manager = LOCAL_EBS_Manager;
	Parms.LOCAL_CurrentEBS_Widget = LOCAL_CurrentEBS_Widget;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Map_Values_Values = CallFunc_Map_Values_Values;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Map_Length_ReturnValue = CallFunc_Map_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GoalHUD.GoalHUD_C.SelectEnemyBullshitWidget
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      Key                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNotificationEnemyBullshit_Widget_C*EBS_Widget                                                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               BullshitAlreadyOnscreen                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              LOCAL_IndexToInit                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<class UClass*, int32>         LOCAL_CurrentBullshitBPB                                         (Edit, BlueprintVisible)
// class UNotificationEnemyBullshit_Widget_C*LOCAL_WidgetToInit                                               (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      LOCAL_IncomingBullshitBPB                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        CallFunc_GetVisibility_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UNotificationEnemyBullshit_Widget_C*>CallFunc_Map_Values_Values                                       (ReferenceParm, ContainsInstancedReference)
// class UNotificationEnemyBullshit_Widget_C*CallFunc_Map_Find_Value                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UNotificationEnemyBullshit_Widget_C*K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Map_Length_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGoalHUD_C::SelectEnemyBullshitWidget(class UClass*& Key, class UNotificationEnemyBullshit_Widget_C** EBS_Widget, bool* BullshitAlreadyOnscreen, int32 LOCAL_IndexToInit, TMap<class UClass*, int32> LOCAL_CurrentBullshitBPB, class UNotificationEnemyBullshit_Widget_C* LOCAL_WidgetToInit, class UClass* LOCAL_IncomingBullshitBPB, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool Temp_bool_Variable, TArray<class UNotificationEnemyBullshit_Widget_C*>& CallFunc_Map_Values_Values, class UNotificationEnemyBullshit_Widget_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, class UNotificationEnemyBullshit_Widget_C* K2Node_Select_Default, int32 CallFunc_Map_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GoalHUD_C", "SelectEnemyBullshitWidget");

	Params::UGoalHUD_C_SelectEnemyBullshitWidget_Params Parms{};

	Parms.Key = Key;
	Parms.LOCAL_IndexToInit = LOCAL_IndexToInit;
	Parms.LOCAL_CurrentBullshitBPB = LOCAL_CurrentBullshitBPB;
	Parms.LOCAL_WidgetToInit = LOCAL_WidgetToInit;
	Parms.LOCAL_IncomingBullshitBPB = LOCAL_IncomingBullshitBPB;
	Parms.CallFunc_GetVisibility_ReturnValue = CallFunc_GetVisibility_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Map_Values_Values = CallFunc_Map_Values_Values;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Map_Length_ReturnValue = CallFunc_Map_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (EBS_Widget != nullptr)
		*EBS_Widget = Parms.EBS_Widget;

	if (BullshitAlreadyOnscreen != nullptr)
		*BullshitAlreadyOnscreen = Parms.BullshitAlreadyOnscreen;

}


// Function GoalHUD.GoalHUD_C.Create Activation Verb to Bullshit Archetype Map
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UClass*>              LOCAL_OldValues                                                  (Edit, BlueprintVisible)
// TArray<class UClass*>              LOCAL_OldKeys                                                    (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGameInstance*            CallFunc_GetQtnGameInstance_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnCombatSettings*          CallFunc_GetCombatSettings_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGlobalCombatSettings_C*     K2Node_DynamicCast_AsGlobal_Combat_Settings                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<TSoftClassPtr<class UQtnBullshitBPBaseArchetype_C>>CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// TArray<TSoftClassPtr<class UEnemyCheatActivationVerbBase_C>>CallFunc_Map_Values_Values                                       (ReferenceParm)
// TSoftClassPtr<class UQtnBullshitBPBaseArchetype_C>CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// TSoftClassPtr<class UEnemyCheatActivationVerbBase_C>CallFunc_Array_Get_Item_1                                        (HasGetValueTypeHash)
// class UClass*                      CallFunc_SyncLoadClass_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_SyncLoadClass_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsQtn_Bullshit_BPBase_Archetype          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_ClassDynamicCast_AsEnemy_Cheat_Activation_Verb_Base       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGoalHUD_C::Create_Activation_Verb_to_Bullshit_Archetype_Map(const TArray<class UClass*>& LOCAL_OldValues, const TArray<class UClass*>& LOCAL_OldKeys, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UQtnGameInstance* CallFunc_GetQtnGameInstance_ReturnValue, class UQtnCombatSettings* CallFunc_GetCombatSettings_ReturnValue, class UGlobalCombatSettings_C* K2Node_DynamicCast_AsGlobal_Combat_Settings, bool K2Node_DynamicCast_bSuccess, TArray<TSoftClassPtr<class UQtnBullshitBPBaseArchetype_C>>& CallFunc_Map_Keys_Keys, TArray<TSoftClassPtr<class UEnemyCheatActivationVerbBase_C>>& CallFunc_Map_Values_Values, TSoftClassPtr<class UQtnBullshitBPBaseArchetype_C> CallFunc_Array_Get_Item, TSoftClassPtr<class UEnemyCheatActivationVerbBase_C> CallFunc_Array_Get_Item_1, class UClass* CallFunc_SyncLoadClass_ReturnValue, class UClass* CallFunc_SyncLoadClass_ReturnValue_1, class UClass* K2Node_ClassDynamicCast_AsQtn_Bullshit_BPBase_Archetype, bool K2Node_ClassDynamicCast_bSuccess, class UClass* K2Node_ClassDynamicCast_AsEnemy_Cheat_Activation_Verb_Base, bool K2Node_ClassDynamicCast_bSuccess_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GoalHUD_C", "Create Activation Verb to Bullshit Archetype Map");

	Params::UGoalHUD_C_Create_Activation_Verb_to_Bullshit_Archetype_Map_Params Parms{};

	Parms.LOCAL_OldValues = LOCAL_OldValues;
	Parms.LOCAL_OldKeys = LOCAL_OldKeys;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetQtnGameInstance_ReturnValue = CallFunc_GetQtnGameInstance_ReturnValue;
	Parms.CallFunc_GetCombatSettings_ReturnValue = CallFunc_GetCombatSettings_ReturnValue;
	Parms.K2Node_DynamicCast_AsGlobal_Combat_Settings = K2Node_DynamicCast_AsGlobal_Combat_Settings;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Map_Values_Values = CallFunc_Map_Values_Values;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_SyncLoadClass_ReturnValue = CallFunc_SyncLoadClass_ReturnValue;
	Parms.CallFunc_SyncLoadClass_ReturnValue_1 = CallFunc_SyncLoadClass_ReturnValue_1;
	Parms.K2Node_ClassDynamicCast_AsQtn_Bullshit_BPBase_Archetype = K2Node_ClassDynamicCast_AsQtn_Bullshit_BPBase_Archetype;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.K2Node_ClassDynamicCast_AsEnemy_Cheat_Activation_Verb_Base = K2Node_ClassDynamicCast_AsEnemy_Cheat_Activation_Verb_Base;
	Parms.K2Node_ClassDynamicCast_bSuccess_1 = K2Node_ClassDynamicCast_bSuccess_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GoalHUD.GoalHUD_C.checkActiveGoals
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        New_goal_subtext                                                 (Parm, OutParm)
// bool                               Only_one_goal_active                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        LOCAL_Text                                                       (Edit, BlueprintVisible)
// TArray<class UQtnGoal*>            LOCAL_GoalsToShow                                                (Edit, BlueprintVisible, ContainsInstancedReference)
// int32                              LOCAL_HighestPriority                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoal*                    CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGoalBase_C*                 K2Node_DynamicCast_AsGoal_Base                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_2                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class UQtnGoal*                    CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGoalBase_C*                 CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGoalBase_C*                 CallFunc_Array_Get_Item_3                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGoalHUD_C::CheckActiveGoals(class FText* New_goal_subtext, bool* Only_one_goal_active, class FText LOCAL_Text, const TArray<class UQtnGoal*>& LOCAL_GoalsToShow, int32 LOCAL_HighestPriority, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_Not_PreBool_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, class UQtnGoal* CallFunc_Array_Get_Item, class UGoalBase_C* K2Node_DynamicCast_AsGoal_Base, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, bool CallFunc_EqualEqual_StrStr_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue, class UQtnGoal* CallFunc_Array_Get_Item_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, class UGoalBase_C* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_AddUnique_ReturnValue, class UGoalBase_C* CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GoalHUD_C", "checkActiveGoals");

	Params::UGoalHUD_C_CheckActiveGoals_Params Parms{};

	Parms.LOCAL_Text = LOCAL_Text;
	Parms.LOCAL_GoalsToShow = LOCAL_GoalsToShow;
	Parms.LOCAL_HighestPriority = LOCAL_HighestPriority;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsGoal_Base = K2Node_DynamicCast_AsGoal_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue_2 = CallFunc_Conv_TextToString_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (New_goal_subtext != nullptr)
		*New_goal_subtext = Parms.New_goal_subtext;

	if (Only_one_goal_active != nullptr)
		*Only_one_goal_active = Parms.Only_one_goal_active;

}


// Function GoalHUD.GoalHUD_C.RefreshGoalText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        GoalText                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        GoalSubtext                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               CallFunc_NotEqual_TextText_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_TextText_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGoalHUD_C::RefreshGoalText(class FText GoalText, class FText GoalSubtext, bool CallFunc_NotEqual_TextText_ReturnValue, bool CallFunc_NotEqual_TextText_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GoalHUD_C", "RefreshGoalText");

	Params::UGoalHUD_C_RefreshGoalText_Params Parms{};

	Parms.GoalText = GoalText;
	Parms.GoalSubtext = GoalSubtext;
	Parms.CallFunc_NotEqual_TextText_ReturnValue = CallFunc_NotEqual_TextText_ReturnValue;
	Parms.CallFunc_NotEqual_TextText_ReturnValue_1 = CallFunc_NotEqual_TextText_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GoalHUD.GoalHUD_C.TickActiveGoalUI
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_checkActiveGoals_new_goal_subtext                       (None)
// bool                               CallFunc_checkActiveGoals_only_one_goal_active                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGoalBase_C*                 CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGoalHUD_C::TickActiveGoalUI(bool CallFunc_TextIsEmpty_ReturnValue, class FText CallFunc_checkActiveGoals_new_goal_subtext, bool CallFunc_checkActiveGoals_only_one_goal_active, class UGoalBase_C* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GoalHUD_C", "TickActiveGoalUI");

	Params::UGoalHUD_C_TickActiveGoalUI_Params Parms{};

	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.CallFunc_checkActiveGoals_new_goal_subtext = CallFunc_checkActiveGoals_new_goal_subtext;
	Parms.CallFunc_checkActiveGoals_only_one_goal_active = CallFunc_checkActiveGoals_only_one_goal_active;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GoalHUD.GoalHUD_C.UnregisterActiveGoal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGoalBase_C*                 Goal                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGoalHUD_C::UnregisterActiveGoal(class UGoalBase_C* Goal, bool CallFunc_Array_RemoveItem_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GoalHUD_C", "UnregisterActiveGoal");

	Params::UGoalHUD_C_UnregisterActiveGoal_Params Parms{};

	Parms.Goal = Goal;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GoalHUD.GoalHUD_C.Register Active Goal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGoalBase_C*                 Goal                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               NeedAdd                                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              GoalPriority                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGoalBase_C*                 CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGoalHUD_C::Register_Active_Goal(class UGoalBase_C* Goal, bool NeedAdd, int32 GoalPriority, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UGoalBase_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GoalHUD_C", "Register Active Goal");

	Params::UGoalHUD_C_Register_Active_Goal_Params Parms{};

	Parms.Goal = Goal;
	Parms.NeedAdd = NeedAdd;
	Parms.GoalPriority = GoalPriority;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GoalHUD.GoalHUD_C.Finished_801CAF73482C72604A57818E0A41CF5F
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGoalHUD_C::Finished_801CAF73482C72604A57818E0A41CF5F()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GoalHUD_C", "Finished_801CAF73482C72604A57818E0A41CF5F");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GoalHUD.GoalHUD_C.BackdropRepeater
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGoalHUD_C::BackdropRepeater()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GoalHUD_C", "BackdropRepeater");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GoalHUD.GoalHUD_C.AnimSeq_Backdrop
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Add                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGoalHUD_C::AnimSeq_Backdrop(bool Add)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GoalHUD_C", "AnimSeq_Backdrop");

	Params::UGoalHUD_C_AnimSeq_Backdrop_Params Parms{};

	Parms.Add = Add;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GoalHUD.GoalHUD_C.RemoveBackdrop
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGoalHUD_C::RemoveBackdrop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GoalHUD_C", "RemoveBackdrop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GoalHUD.GoalHUD_C.OnQtnWidgetResumed
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UQtnScreen*                  PreviousScreen                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGoalHUD_C::OnQtnWidgetResumed(class UQtnScreen* PreviousScreen)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GoalHUD_C", "OnQtnWidgetResumed");

	Params::UGoalHUD_C_OnQtnWidgetResumed_Params Parms{};

	Parms.PreviousScreen = PreviousScreen;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GoalHUD.GoalHUD_C.displaySubGoal
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        GoalText                                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UGoalHUD_C::DisplaySubGoal(class FText GoalText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GoalHUD_C", "displaySubGoal");

	Params::UGoalHUD_C_DisplaySubGoal_Params Parms{};

	Parms.GoalText = GoalText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GoalHUD.GoalHUD_C.UpdateGoalDetails
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UGoalHUD_C::UpdateGoalDetails(class FText Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GoalHUD_C", "UpdateGoalDetails");

	Params::UGoalHUD_C_UpdateGoalDetails_Params Parms{};

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GoalHUD.GoalHUD_C.OnQtnWidgetInitialized
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGoalHUD_C::OnQtnWidgetInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GoalHUD_C", "OnQtnWidgetInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GoalHUD.GoalHUD_C.HandleToggleUI
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsHidden                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGoalHUD_C::HandleToggleUI(bool IsHidden)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GoalHUD_C", "HandleToggleUI");

	Params::UGoalHUD_C_HandleToggleUI_Params Parms{};

	Parms.IsHidden = IsHidden;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GoalHUD.GoalHUD_C.OnQtnWidgetPaused
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGoalHUD_C::OnQtnWidgetPaused()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GoalHUD_C", "OnQtnWidgetPaused");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GoalHUD.GoalHUD_C.CleanUpGoalBanner
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGoalHUD_C::CleanUpGoalBanner()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GoalHUD_C", "CleanUpGoalBanner");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GoalHUD.GoalHUD_C.OnQtnWidgetTicked
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGoalHUD_C::OnQtnWidgetTicked(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GoalHUD_C", "OnQtnWidgetTicked");

	Params::UGoalHUD_C_OnQtnWidgetTicked_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GoalHUD.GoalHUD_C.HUD_AnnounceGoal
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        GoalText                                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UGoalHUD_C::HUD_AnnounceGoal(class FText GoalText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GoalHUD_C", "HUD_AnnounceGoal");

	Params::UGoalHUD_C_HUD_AnnounceGoal_Params Parms{};

	Parms.GoalText = GoalText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GoalHUD.GoalHUD_C.UpgradeCardNotify
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              OrigLevel                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnUpgradeSettings         UpgradeSettings                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FQtnRolledUpgradeData       RolledUpgradeData                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UGoalHUD_C::UpgradeCardNotify(int32 OrigLevel, const struct FQtnUpgradeSettings& UpgradeSettings, const struct FQtnRolledUpgradeData& RolledUpgradeData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GoalHUD_C", "UpgradeCardNotify");

	Params::UGoalHUD_C_UpgradeCardNotify_Params Parms{};

	Parms.OrigLevel = OrigLevel;
	Parms.UpgradeSettings = UpgradeSettings;
	Parms.RolledUpgradeData = RolledUpgradeData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GoalHUD.GoalHUD_C.Anim_RulebookActivated
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGoalHUD_C::Anim_RulebookActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GoalHUD_C", "Anim_RulebookActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GoalHUD.GoalHUD_C.CardNotification_EnemyBullshitStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      StartedBullshit                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              TimerMax                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGoalHUD_C::CardNotification_EnemyBullshitStart(class UClass* StartedBullshit, float TimerMax)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GoalHUD_C", "CardNotification_EnemyBullshitStart");

	Params::UGoalHUD_C_CardNotification_EnemyBullshitStart_Params Parms{};

	Parms.StartedBullshit = StartedBullshit;
	Parms.TimerMax = TimerMax;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GoalHUD.GoalHUD_C.BullshitStopUI
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      StoppedBullshit                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGoalHUD_C::BullshitStopUI(class UClass* StoppedBullshit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GoalHUD_C", "BullshitStopUI");

	Params::UGoalHUD_C_BullshitStopUI_Params Parms{};

	Parms.StoppedBullshit = StoppedBullshit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GoalHUD.GoalHUD_C.RemoveEnemyBullshitReference
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      BullshitToRemove                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGoalHUD_C::RemoveEnemyBullshitReference(class UClass* BullshitToRemove)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GoalHUD_C", "RemoveEnemyBullshitReference");

	Params::UGoalHUD_C_RemoveEnemyBullshitReference_Params Parms{};

	Parms.BullshitToRemove = BullshitToRemove;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GoalHUD.GoalHUD_C.EventOnRulebookActivated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ALoot_Rulebook_Parent_Frob_C*RulebookActivated                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGoalHUD_C::EventOnRulebookActivated(class ALoot_Rulebook_Parent_Frob_C* RulebookActivated)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GoalHUD_C", "EventOnRulebookActivated");

	Params::UGoalHUD_C_EventOnRulebookActivated_Params Parms{};

	Parms.RulebookActivated = RulebookActivated;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GoalHUD.GoalHUD_C.AnnounceRulebookActivation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGoalHUD_C::AnnounceRulebookActivation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GoalHUD_C", "AnnounceRulebookActivation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GoalHUD.GoalHUD_C.EnemyBullshit_StartLightningTimer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGoalHUD_C::EnemyBullshit_StartLightningTimer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GoalHUD_C", "EnemyBullshit_StartLightningTimer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GoalHUD.GoalHUD_C.EnemyBullshit_FireLightning
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGoalHUD_C::EnemyBullshit_FireLightning()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GoalHUD_C", "EnemyBullshit_FireLightning");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GoalHUD.GoalHUD_C.CardNotification_EnemyBullshitStartAnimation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGoalHUD_C::CardNotification_EnemyBullshitStartAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GoalHUD_C", "CardNotification_EnemyBullshitStartAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GoalHUD.GoalHUD_C.CombatInhibitedEvent_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsInhibited                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsServer                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGoalHUD_C::CombatInhibitedEvent_Event_0(bool IsInhibited, bool IsServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GoalHUD_C", "CombatInhibitedEvent_Event_0");

	Params::UGoalHUD_C_CombatInhibitedEvent_Event_0_Params Parms{};

	Parms.IsInhibited = IsInhibited;
	Parms.IsServer = IsServer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GoalHUD.GoalHUD_C.Anim_RemoveBannerGoal
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGoalHUD_C::Anim_RemoveBannerGoal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GoalHUD_C", "Anim_RemoveBannerGoal");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GoalHUD.GoalHUD_C.OnSocialHubMissionReady
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Arc                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnDifficulty          Difficulty                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGoalHUD_C::OnSocialHubMissionReady(int32 Arc, enum class EQtnDifficulty Difficulty)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GoalHUD_C", "OnSocialHubMissionReady");

	Params::UGoalHUD_C_OnSocialHubMissionReady_Params Parms{};

	Parms.Arc = Arc;
	Parms.Difficulty = Difficulty;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GoalHUD.GoalHUD_C.OnSocialHubAllPlayersReady
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGoalHUD_C::OnSocialHubAllPlayersReady()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GoalHUD_C", "OnSocialHubAllPlayersReady");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GoalHUD.GoalHUD_C.ExecuteUbergraph_GoalHUD
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        CallFunc_GetVisibility_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Add                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnimationPlayingForward_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetAnimationCurrentTime_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnScreen*                  K2Node_Event_previousScreen                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_goalText_1                                    (None)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_Text                                          (None)
// class AQtnPlayerUI*                CallFunc_GetOwningPlayerUI_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_isHidden                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnScreen*                  CallFunc_GetOwningScreen_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsScreenActive_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_goalText                                      (None)
// int32                              K2Node_CustomEvent_OrigLevel                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnUpgradeSettings         K2Node_CustomEvent_UpgradeSettings                               (None)
// struct FQtnRolledUpgradeData       K2Node_CustomEvent_RolledUpgradeData                             (None)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnGameStateArchetype_C*    K2Node_DynamicCast_AsQtn_Game_State_Archetype                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UClass*                      K2Node_CustomEvent_StartedBullshit                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_TimerMax                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetBullshitClassFromCheatVerb_QtnBullshitBPBaseArchetype(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetBullshitClassFromCheatVerb_Found                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class UNotificationEnemyBullshit_Widget_C*CallFunc_SelectEnemyBullshitWidget_EBS_Widget                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SelectEnemyBullshitWidget_BullshitAlreadyOnscreen       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FUI_Card_Struct             CallFunc_CreateCardStructFromBullshitArchetype_UI_Card_Struct    (HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class UClass*                      K2Node_CustomEvent_StoppedBullshit                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetClassDisplayName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class UNotificationEnemyBullshit_Widget_C*CallFunc_Map_Find_Value_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_CustomEvent_BullshitToRemove                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Remove_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UNotificationEnemyBullshit_Widget_C*CallFunc_Map_Find_Value_2                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetClassDisplayName_ReturnValue_1                       (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue_1                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// class FString                      CallFunc_GetDisplayName_ReturnValue_2                            (ZeroConstructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetDisplayName_ReturnValue_3                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (ZeroConstructor, HasGetValueTypeHash)
// class UNotificationEnemyBullshit_Widget_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ALoot_Rulebook_Parent_Frob_C*K2Node_CustomEvent_RulebookActivated                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// class UQtnScreen*                  CallFunc_GetOwningScreen_ReturnValue_1                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsScreenActive_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsAnnouncementEnemyBullshit_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (ZeroConstructor, NoDestructor)
// class AQtnPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerControllerArchetype_C*K2Node_DynamicCast_AsQtn_Player_Controller_Archetype             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetDisplayName_ReturnValue_4                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_7                             (ZeroConstructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_11                          (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_12                          (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_13                          (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_14                          (ZeroConstructor, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_CreatePlayAnimationProxyObject_Result                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimationPlayCallbackProxy*CallFunc_CreatePlayAnimationProxyObject_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_15                          (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_16                          (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_isInhibited                                   (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_isServer                                      (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue_1                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_arc                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnDifficulty          K2Node_CustomEvent_difficulty                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnGameStateArchetype_C*    K2Node_DynamicCast_AsQtn_Game_State_Archetype_1                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsBSPresentationInProgress_yes                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_17                          (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_1                       (NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_TimerExistsHandle_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGoalHUD_C::ExecuteUbergraph_GoalHUD(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_1, bool K2Node_SwitchEnum_CmpSuccess, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool K2Node_CustomEvent_Add, bool Temp_bool_Variable, const class FString& CallFunc_Conv_BoolToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_IsAnimationPlayingForward_ReturnValue, float CallFunc_GetAnimationCurrentTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UQtnScreen* K2Node_Event_previousScreen, class FText K2Node_CustomEvent_goalText_1, int32 Temp_int_Array_Index_Variable, class FText K2Node_CustomEvent_Text, class AQtnPlayerUI* CallFunc_GetOwningPlayerUI_ReturnValue, bool K2Node_CustomEvent_isHidden, class UQtnScreen* CallFunc_GetOwningScreen_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsScreenActive_ReturnValue, float K2Node_Event_DeltaSeconds, class FText K2Node_CustomEvent_goalText, int32 K2Node_CustomEvent_OrigLevel, const struct FQtnUpgradeSettings& K2Node_CustomEvent_UpgradeSettings, const struct FQtnRolledUpgradeData& K2Node_CustomEvent_RolledUpgradeData, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UClass* K2Node_CustomEvent_StartedBullshit, float K2Node_CustomEvent_TimerMax, class UClass* CallFunc_GetBullshitClassFromCheatVerb_QtnBullshitBPBaseArchetype, bool CallFunc_GetBullshitClassFromCheatVerb_Found, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class UNotificationEnemyBullshit_Widget_C* CallFunc_SelectEnemyBullshitWidget_EBS_Widget, bool CallFunc_SelectEnemyBullshitWidget_BullshitAlreadyOnscreen, const struct FUI_Card_Struct& CallFunc_CreateCardStructFromBullshitArchetype_UI_Card_Struct, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UClass* K2Node_CustomEvent_StoppedBullshit, const class FString& CallFunc_GetClassDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, class UClass* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UNotificationEnemyBullshit_Widget_C* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, class UClass* K2Node_CustomEvent_BullshitToRemove, bool CallFunc_Map_Remove_ReturnValue, class UNotificationEnemyBullshit_Widget_C* CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2, const class FString& CallFunc_GetClassDisplayName_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_GetDisplayName_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const class FString& CallFunc_GetDisplayName_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, class UNotificationEnemyBullshit_Widget_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue_1, class ALoot_Rulebook_Parent_Frob_C* K2Node_CustomEvent_RulebookActivated, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class UQtnScreen* CallFunc_GetOwningScreen_ReturnValue_1, bool CallFunc_IsScreenActive_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, bool CallFunc_IsAnnouncementEnemyBullshit_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, class AQtnPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class AQtnPlayerControllerArchetype_C* K2Node_DynamicCast_AsQtn_Player_Controller_Archetype, bool K2Node_DynamicCast_bSuccess_1, const class FString& CallFunc_GetDisplayName_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_15, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_16, bool Temp_bool_Variable_1, bool K2Node_CustomEvent_isInhibited, bool K2Node_CustomEvent_isServer, bool CallFunc_Not_PreBool_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default, float CallFunc_Conv_BoolToFloat_ReturnValue, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue_1, int32 K2Node_CustomEvent_arc, enum class EQtnDifficulty K2Node_CustomEvent_difficulty, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsBSPresentationInProgress_yes, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_17, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_1, bool CallFunc_K2_TimerExistsHandle_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GoalHUD_C", "ExecuteUbergraph_GoalHUD");

	Params::UGoalHUD_C_ExecuteUbergraph_GoalHUD_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetVisibility_ReturnValue = CallFunc_GetVisibility_ReturnValue;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.K2Node_CustomEvent_Add = K2Node_CustomEvent_Add;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Conv_BoolToString_ReturnValue = CallFunc_Conv_BoolToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_IsAnimationPlayingForward_ReturnValue = CallFunc_IsAnimationPlayingForward_ReturnValue;
	Parms.CallFunc_GetAnimationCurrentTime_ReturnValue = CallFunc_GetAnimationCurrentTime_ReturnValue;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.K2Node_Event_previousScreen = K2Node_Event_previousScreen;
	Parms.K2Node_CustomEvent_goalText_1 = K2Node_CustomEvent_goalText_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_CustomEvent_Text = K2Node_CustomEvent_Text;
	Parms.CallFunc_GetOwningPlayerUI_ReturnValue = CallFunc_GetOwningPlayerUI_ReturnValue;
	Parms.K2Node_CustomEvent_isHidden = K2Node_CustomEvent_isHidden;
	Parms.CallFunc_GetOwningScreen_ReturnValue = CallFunc_GetOwningScreen_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsScreenActive_ReturnValue = CallFunc_IsScreenActive_ReturnValue;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.K2Node_CustomEvent_goalText = K2Node_CustomEvent_goalText;
	Parms.K2Node_CustomEvent_OrigLevel = K2Node_CustomEvent_OrigLevel;
	Parms.K2Node_CustomEvent_UpgradeSettings = K2Node_CustomEvent_UpgradeSettings;
	Parms.K2Node_CustomEvent_RolledUpgradeData = K2Node_CustomEvent_RolledUpgradeData;
	Parms.CallFunc_GetQtnGameState_ReturnValue = CallFunc_GetQtnGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Game_State_Archetype = K2Node_DynamicCast_AsQtn_Game_State_Archetype;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_StartedBullshit = K2Node_CustomEvent_StartedBullshit;
	Parms.K2Node_CustomEvent_TimerMax = K2Node_CustomEvent_TimerMax;
	Parms.CallFunc_GetBullshitClassFromCheatVerb_QtnBullshitBPBaseArchetype = CallFunc_GetBullshitClassFromCheatVerb_QtnBullshitBPBaseArchetype;
	Parms.CallFunc_GetBullshitClassFromCheatVerb_Found = CallFunc_GetBullshitClassFromCheatVerb_Found;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_SelectEnemyBullshitWidget_EBS_Widget = CallFunc_SelectEnemyBullshitWidget_EBS_Widget;
	Parms.CallFunc_SelectEnemyBullshitWidget_BullshitAlreadyOnscreen = CallFunc_SelectEnemyBullshitWidget_BullshitAlreadyOnscreen;
	Parms.CallFunc_CreateCardStructFromBullshitArchetype_UI_Card_Struct = CallFunc_CreateCardStructFromBullshitArchetype_UI_Card_Struct;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_StoppedBullshit = K2Node_CustomEvent_StoppedBullshit;
	Parms.CallFunc_GetClassDisplayName_ReturnValue = CallFunc_GetClassDisplayName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.K2Node_CustomEvent_BullshitToRemove = K2Node_CustomEvent_BullshitToRemove;
	Parms.CallFunc_Map_Remove_ReturnValue = CallFunc_Map_Remove_ReturnValue;
	Parms.CallFunc_Map_Find_Value_2 = CallFunc_Map_Find_Value_2;
	Parms.CallFunc_Map_Find_ReturnValue_2 = CallFunc_Map_Find_ReturnValue_2;
	Parms.CallFunc_GetClassDisplayName_ReturnValue_1 = CallFunc_GetClassDisplayName_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_GetDisplayName_ReturnValue_1 = CallFunc_GetDisplayName_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_GetDisplayName_ReturnValue_2 = CallFunc_GetDisplayName_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue_3 = CallFunc_GetDisplayName_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_6 = CallFunc_Concat_StrStr_ReturnValue_6;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue_1 = CallFunc_Array_AddUnique_ReturnValue_1;
	Parms.K2Node_CustomEvent_RulebookActivated = K2Node_CustomEvent_RulebookActivated;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.CallFunc_GetOwningScreen_ReturnValue_1 = CallFunc_GetOwningScreen_ReturnValue_1;
	Parms.CallFunc_IsScreenActive_ReturnValue_1 = CallFunc_IsScreenActive_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.CallFunc_IsAnnouncementEnemyBullshit_ReturnValue = CallFunc_IsAnnouncementEnemyBullshit_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = K2Node_CreateDelegate_OutputDelegate_10;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Player_Controller_Archetype = K2Node_DynamicCast_AsQtn_Player_Controller_Archetype;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetDisplayName_ReturnValue_4 = CallFunc_GetDisplayName_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_7 = CallFunc_Concat_StrStr_ReturnValue_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_11 = K2Node_CreateDelegate_OutputDelegate_11;
	Parms.K2Node_CreateDelegate_OutputDelegate_12 = K2Node_CreateDelegate_OutputDelegate_12;
	Parms.K2Node_CreateDelegate_OutputDelegate_13 = K2Node_CreateDelegate_OutputDelegate_13;
	Parms.K2Node_CreateDelegate_OutputDelegate_14 = K2Node_CreateDelegate_OutputDelegate_14;
	Parms.CallFunc_CreatePlayAnimationProxyObject_Result = CallFunc_CreatePlayAnimationProxyObject_Result;
	Parms.CallFunc_CreatePlayAnimationProxyObject_ReturnValue = CallFunc_CreatePlayAnimationProxyObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_15 = K2Node_CreateDelegate_OutputDelegate_15;
	Parms.K2Node_CreateDelegate_OutputDelegate_16 = K2Node_CreateDelegate_OutputDelegate_16;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_CustomEvent_isInhibited = K2Node_CustomEvent_isInhibited;
	Parms.K2Node_CustomEvent_isServer = K2Node_CustomEvent_isServer;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue = CallFunc_Conv_BoolToFloat_ReturnValue;
	Parms.CallFunc_GetQtnGameState_ReturnValue_1 = CallFunc_GetQtnGameState_ReturnValue_1;
	Parms.K2Node_CustomEvent_arc = K2Node_CustomEvent_arc;
	Parms.K2Node_CustomEvent_difficulty = K2Node_CustomEvent_difficulty;
	Parms.K2Node_DynamicCast_AsQtn_Game_State_Archetype_1 = K2Node_DynamicCast_AsQtn_Game_State_Archetype_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_IsBSPresentationInProgress_yes = CallFunc_IsBSPresentationInProgress_yes;
	Parms.K2Node_CreateDelegate_OutputDelegate_17 = K2Node_CreateDelegate_OutputDelegate_17;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_1 = CallFunc_K2_SetTimerDelegate_ReturnValue_1;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_K2_TimerExistsHandle_ReturnValue = CallFunc_K2_TimerExistsHandle_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GoalHUD.GoalHUD_C.UI_LightningEnemyBullshit__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGoalHUD_C::UI_LightningEnemyBullshit__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GoalHUD_C", "UI_LightningEnemyBullshit__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GoalHUD.GoalHUD_C.RulebookActivated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGoalHUD_C::RulebookActivated__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GoalHUD_C", "RulebookActivated__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GoalHUD.GoalHUD_C.AddOrRemoveBackdrop__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Add                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGoalHUD_C::AddOrRemoveBackdrop__DelegateSignature(bool Add)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GoalHUD_C", "AddOrRemoveBackdrop__DelegateSignature");

	Params::UGoalHUD_C_AddOrRemoveBackdrop__DelegateSignature_Params Parms{};

	Parms.Add = Add;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GoalHUD.GoalHUD_C.RulebookLocalVoteCast__DelegateSignature
// (Public, Delegate, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               YesVote                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UClass*>              RulebookEnemyUpgrade                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UClass*                      RulebookReward                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGoalHUD_C::RulebookLocalVoteCast__DelegateSignature(bool YesVote, TArray<class UClass*>& RulebookEnemyUpgrade, class UClass* RulebookReward)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GoalHUD_C", "RulebookLocalVoteCast__DelegateSignature");

	Params::UGoalHUD_C_RulebookLocalVoteCast__DelegateSignature_Params Parms{};

	Parms.YesVote = YesVote;
	Parms.RulebookEnemyUpgrade = RulebookEnemyUpgrade;
	Parms.RulebookReward = RulebookReward;

	UObject::ProcessEvent(Func, &Parms);

}

}


