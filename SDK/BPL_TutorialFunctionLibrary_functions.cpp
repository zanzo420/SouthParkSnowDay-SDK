#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPL_TutorialFunctionLibrary.BPL_TutorialFunctionLibrary_C
// (None)

class UClass* UBPL_TutorialFunctionLibrary_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPL_TutorialFunctionLibrary_C");

	return Clss;
}


// BPL_TutorialFunctionLibrary_C BPL_TutorialFunctionLibrary.Default__BPL_TutorialFunctionLibrary_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPL_TutorialFunctionLibrary_C* UBPL_TutorialFunctionLibrary_C::GetDefaultObj()
{
	static class UBPL_TutorialFunctionLibrary_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPL_TutorialFunctionLibrary_C*>(UBPL_TutorialFunctionLibrary_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPL_TutorialFunctionLibrary.BPL_TutorialFunctionLibrary_C.GetTutorialBoolValue
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     WorldRef                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Tutorial_Class                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        FlagName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               OutValue                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetTutorialBoolValue_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPL_TutorialFunctionLibrary_C::GetTutorialBoolValue(class UObject* WorldRef, class UClass* Tutorial_Class, class FName FlagName, class UObject* __WorldContext, bool* OutValue, bool CallFunc_IsValidClass_ReturnValue, bool CallFunc_GetTutorialBoolValue_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPL_TutorialFunctionLibrary_C", "GetTutorialBoolValue");

	Params::UBPL_TutorialFunctionLibrary_C_GetTutorialBoolValue_Params Parms{};

	Parms.WorldRef = WorldRef;
	Parms.Tutorial_Class = Tutorial_Class;
	Parms.FlagName = FlagName;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_GetTutorialBoolValue_ReturnValue = CallFunc_GetTutorialBoolValue_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutValue != nullptr)
		*OutValue = Parms.OutValue;

}


// Function BPL_TutorialFunctionLibrary.BPL_TutorialFunctionLibrary_C.SetTutorialBoolValue
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     WorldRef                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Tutorial_Class                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        FlagName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ValueToSet                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPL_TutorialFunctionLibrary_C::SetTutorialBoolValue(class UObject* WorldRef, class UClass* Tutorial_Class, class FName FlagName, bool ValueToSet, class UObject* __WorldContext, bool CallFunc_IsValidClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPL_TutorialFunctionLibrary_C", "SetTutorialBoolValue");

	Params::UBPL_TutorialFunctionLibrary_C_SetTutorialBoolValue_Params Parms{};

	Parms.WorldRef = WorldRef;
	Parms.Tutorial_Class = Tutorial_Class;
	Parms.FlagName = FlagName;
	Parms.ValueToSet = ValueToSet;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPL_TutorialFunctionLibrary.BPL_TutorialFunctionLibrary_C.Invalidate Tutorial   L
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     WorldRef                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Tutorial_Class                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnTutorialStatus      CallFunc_GetTutorialState_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPL_TutorialFunctionLibrary_C::Invalidate_Tutorial___L(class UObject* WorldRef, class UClass* Tutorial_Class, class UObject* __WorldContext, bool CallFunc_IsValidClass_ReturnValue, enum class EQtnTutorialStatus CallFunc_GetTutorialState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPL_TutorialFunctionLibrary_C", "Invalidate Tutorial   L");

	Params::UBPL_TutorialFunctionLibrary_C_Invalidate_Tutorial___L_Params Parms{};

	Parms.WorldRef = WorldRef;
	Parms.Tutorial_Class = Tutorial_Class;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_GetTutorialState_ReturnValue = CallFunc_GetTutorialState_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPL_TutorialFunctionLibrary.BPL_TutorialFunctionLibrary_C.GetTutorialStateForThisPlayer_ClientFriendly=‚
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnBodyPawn*                TargetPlayerPawn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      TutorialClass                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnTutorialStatus      Out_Current_State                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerPawn*              CallFunc_GetControllingPlayerPawn_ReturnValue                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerPawnArchetype_C*   K2Node_DynamicCast_AsQtn_Player_Pawn_Archetype                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnTutorialStatus      CallFunc_GetTutorialState_Status                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_TutorialFunctionLibrary_C::GetTutorialStateForThisPlayer_ClientFriendly__(class AQtnBodyPawn* TargetPlayerPawn, class UClass* TutorialClass, class UObject* __WorldContext, enum class EQtnTutorialStatus* Out_Current_State, class AQtnPlayerPawn* CallFunc_GetControllingPlayerPawn_ReturnValue, class AQtnPlayerPawnArchetype_C* K2Node_DynamicCast_AsQtn_Player_Pawn_Archetype, bool K2Node_DynamicCast_bSuccess, enum class EQtnTutorialStatus CallFunc_GetTutorialState_Status)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPL_TutorialFunctionLibrary_C", "GetTutorialStateForThisPlayer_ClientFriendly=‚");

	Params::UBPL_TutorialFunctionLibrary_C_GetTutorialStateForThisPlayer_ClientFriendly___Params Parms{};

	Parms.TargetPlayerPawn = TargetPlayerPawn;
	Parms.TutorialClass = TutorialClass;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetControllingPlayerPawn_ReturnValue = CallFunc_GetControllingPlayerPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Player_Pawn_Archetype = K2Node_DynamicCast_AsQtn_Player_Pawn_Archetype;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetTutorialState_Status = CallFunc_GetTutorialState_Status;

	UObject::ProcessEvent(Func, &Parms);

	if (Out_Current_State != nullptr)
		*Out_Current_State = Parms.Out_Current_State;

}


// Function BPL_TutorialFunctionLibrary.BPL_TutorialFunctionLibrary_C.Clear Goal HUDText L
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     WorldRef                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetLocalPlayerInformation_occupiedBodyPawn              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerPawn*              CallFunc_GetLocalPlayerInformation_playerPawn                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerController*        CallFunc_GetLocalPlayerInformation_playerController              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerUI*                CallFunc_GetLocalPlayerInformation_playerUI                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerState*             CallFunc_GetLocalPlayerInformation_qtnPlayerState                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetLocalPlayerInformation_isHosting                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerInformation_outputPin                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerUIArchetype_C*     K2Node_DynamicCast_AsQtn_Player_UIArchetype                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPL_TutorialFunctionLibrary_C::Clear_Goal_HUDText_L(class UObject* WorldRef, class UObject* __WorldContext, class AQtnBodyPawn* CallFunc_GetLocalPlayerInformation_occupiedBodyPawn, class AQtnPlayerPawn* CallFunc_GetLocalPlayerInformation_playerPawn, class AQtnPlayerController* CallFunc_GetLocalPlayerInformation_playerController, class AQtnPlayerUI* CallFunc_GetLocalPlayerInformation_playerUI, class AQtnPlayerState* CallFunc_GetLocalPlayerInformation_qtnPlayerState, bool CallFunc_GetLocalPlayerInformation_isHosting, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerInformation_outputPin, class AQtnPlayerUIArchetype_C* K2Node_DynamicCast_AsQtn_Player_UIArchetype, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPL_TutorialFunctionLibrary_C", "Clear Goal HUDText L");

	Params::UBPL_TutorialFunctionLibrary_C_Clear_Goal_HUDText_L_Params Parms{};

	Parms.WorldRef = WorldRef;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetLocalPlayerInformation_occupiedBodyPawn = CallFunc_GetLocalPlayerInformation_occupiedBodyPawn;
	Parms.CallFunc_GetLocalPlayerInformation_playerPawn = CallFunc_GetLocalPlayerInformation_playerPawn;
	Parms.CallFunc_GetLocalPlayerInformation_playerController = CallFunc_GetLocalPlayerInformation_playerController;
	Parms.CallFunc_GetLocalPlayerInformation_playerUI = CallFunc_GetLocalPlayerInformation_playerUI;
	Parms.CallFunc_GetLocalPlayerInformation_qtnPlayerState = CallFunc_GetLocalPlayerInformation_qtnPlayerState;
	Parms.CallFunc_GetLocalPlayerInformation_isHosting = CallFunc_GetLocalPlayerInformation_isHosting;
	Parms.CallFunc_GetLocalPlayerInformation_outputPin = CallFunc_GetLocalPlayerInformation_outputPin;
	Parms.K2Node_DynamicCast_AsQtn_Player_UIArchetype = K2Node_DynamicCast_AsQtn_Player_UIArchetype;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPL_TutorialFunctionLibrary.BPL_TutorialFunctionLibrary_C.Set Goal HUDText <
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     WorldRef                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Title                                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        Description                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetLocalPlayerInformation_occupiedBodyPawn              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerPawn*              CallFunc_GetLocalPlayerInformation_playerPawn                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerController*        CallFunc_GetLocalPlayerInformation_playerController              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerUI*                CallFunc_GetLocalPlayerInformation_playerUI                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerState*             CallFunc_GetLocalPlayerInformation_qtnPlayerState                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetLocalPlayerInformation_isHosting                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerInformation_outputPin                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerUIArchetype_C*     K2Node_DynamicCast_AsQtn_Player_UIArchetype                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPL_TutorialFunctionLibrary_C::Set_Goal_HUDText___(class UObject* WorldRef, class FText Title, class FText Description, class UObject* __WorldContext, class AQtnBodyPawn* CallFunc_GetLocalPlayerInformation_occupiedBodyPawn, class AQtnPlayerPawn* CallFunc_GetLocalPlayerInformation_playerPawn, class AQtnPlayerController* CallFunc_GetLocalPlayerInformation_playerController, class AQtnPlayerUI* CallFunc_GetLocalPlayerInformation_playerUI, class AQtnPlayerState* CallFunc_GetLocalPlayerInformation_qtnPlayerState, bool CallFunc_GetLocalPlayerInformation_isHosting, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerInformation_outputPin, class AQtnPlayerUIArchetype_C* K2Node_DynamicCast_AsQtn_Player_UIArchetype, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPL_TutorialFunctionLibrary_C", "Set Goal HUDText <");

	Params::UBPL_TutorialFunctionLibrary_C_Set_Goal_HUDText____Params Parms{};

	Parms.WorldRef = WorldRef;
	Parms.Title = Title;
	Parms.Description = Description;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetLocalPlayerInformation_occupiedBodyPawn = CallFunc_GetLocalPlayerInformation_occupiedBodyPawn;
	Parms.CallFunc_GetLocalPlayerInformation_playerPawn = CallFunc_GetLocalPlayerInformation_playerPawn;
	Parms.CallFunc_GetLocalPlayerInformation_playerController = CallFunc_GetLocalPlayerInformation_playerController;
	Parms.CallFunc_GetLocalPlayerInformation_playerUI = CallFunc_GetLocalPlayerInformation_playerUI;
	Parms.CallFunc_GetLocalPlayerInformation_qtnPlayerState = CallFunc_GetLocalPlayerInformation_qtnPlayerState;
	Parms.CallFunc_GetLocalPlayerInformation_isHosting = CallFunc_GetLocalPlayerInformation_isHosting;
	Parms.CallFunc_GetLocalPlayerInformation_outputPin = CallFunc_GetLocalPlayerInformation_outputPin;
	Parms.K2Node_DynamicCast_AsQtn_Player_UIArchetype = K2Node_DynamicCast_AsQtn_Player_UIArchetype;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPL_TutorialFunctionLibrary.BPL_TutorialFunctionLibrary_C.Should PIEBypass Tutorials L
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                     WorldRef                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ShouldBypass                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlayingInEditor_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_StrStr_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPL_TutorialFunctionLibrary_C::Should_PIEBypass_Tutorials_L(class UObject* WorldRef, class UObject* __WorldContext, bool* ShouldBypass, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, bool CallFunc_IsPlayingInEditor_ReturnValue, bool CallFunc_NotEqual_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPL_TutorialFunctionLibrary_C", "Should PIEBypass Tutorials L");

	Params::UBPL_TutorialFunctionLibrary_C_Should_PIEBypass_Tutorials_L_Params Parms{};

	Parms.WorldRef = WorldRef;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetCurrentLevelName_ReturnValue = CallFunc_GetCurrentLevelName_ReturnValue;
	Parms.CallFunc_IsPlayingInEditor_ReturnValue = CallFunc_IsPlayingInEditor_ReturnValue;
	Parms.CallFunc_NotEqual_StrStr_ReturnValue = CallFunc_NotEqual_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ShouldBypass != nullptr)
		*ShouldBypass = Parms.ShouldBypass;

}


// Function BPL_TutorialFunctionLibrary.BPL_TutorialFunctionLibrary_C.Complete Tutorial  
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     WorldRef                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Tutorial_Class                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnTutorialStatus      CallFunc_GetTutorialState_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPL_TutorialFunctionLibrary_C::Complete_Tutorial____(class UObject* WorldRef, class UClass* Tutorial_Class, class UObject* __WorldContext, bool CallFunc_IsValidClass_ReturnValue, enum class EQtnTutorialStatus CallFunc_GetTutorialState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPL_TutorialFunctionLibrary_C", "Complete Tutorial  ");

	Params::UBPL_TutorialFunctionLibrary_C_Complete_Tutorial_____Params Parms{};

	Parms.WorldRef = WorldRef;
	Parms.Tutorial_Class = Tutorial_Class;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_GetTutorialState_ReturnValue = CallFunc_GetTutorialState_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPL_TutorialFunctionLibrary.BPL_TutorialFunctionLibrary_C.Complete Tutorial Sub Goal 
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     WorldRef                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      TutorialClass                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        GoalIdentity                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               AllowTutorialCompletion_                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_TutorialFunctionLibrary_C::Complete_Tutorial_Sub_Goal__(class UObject* WorldRef, class UClass* TutorialClass, class FName GoalIdentity, bool AllowTutorialCompletion_, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPL_TutorialFunctionLibrary_C", "Complete Tutorial Sub Goal ");

	Params::UBPL_TutorialFunctionLibrary_C_Complete_Tutorial_Sub_Goal___Params Parms{};

	Parms.WorldRef = WorldRef;
	Parms.TutorialClass = TutorialClass;
	Parms.GoalIdentity = GoalIdentity;
	Parms.AllowTutorialCompletion_ = AllowTutorialCompletion_;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPL_TutorialFunctionLibrary.BPL_TutorialFunctionLibrary_C.Start Tutorial <•
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     WorldRef                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Tutorial_Class                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IgnoreCompletion                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnTutorialStatus      CallFunc_GetTutorialState_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPL_TutorialFunctionLibrary_C::Start_Tutorial___(class UObject* WorldRef, class UClass* Tutorial_Class, bool IgnoreCompletion, class UObject* __WorldContext, bool CallFunc_IsValidClass_ReturnValue, enum class EQtnTutorialStatus CallFunc_GetTutorialState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPL_TutorialFunctionLibrary_C", "Start Tutorial <•");

	Params::UBPL_TutorialFunctionLibrary_C_Start_Tutorial____Params Parms{};

	Parms.WorldRef = WorldRef;
	Parms.Tutorial_Class = Tutorial_Class;
	Parms.IgnoreCompletion = IgnoreCompletion;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_GetTutorialState_ReturnValue = CallFunc_GetTutorialState_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPL_TutorialFunctionLibrary.BPL_TutorialFunctionLibrary_C.Add Dynamic Tutorial Sub Goal =%
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     SelfReference                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      TutorialClass                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        GoalIdentity                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Description                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnTutorialStatus      CallFunc_GetTutorialState_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnTutorialSubAction       K2Node_MakeStruct_QtnTutorialSubAction                           (None)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPL_TutorialFunctionLibrary_C::Add_Dynamic_Tutorial_Sub_Goal___(class UObject* SelfReference, class UClass* TutorialClass, class FName GoalIdentity, class FText Description, class UObject* __WorldContext, enum class EQtnTutorialStatus CallFunc_GetTutorialState_ReturnValue, const struct FQtnTutorialSubAction& K2Node_MakeStruct_QtnTutorialSubAction, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPL_TutorialFunctionLibrary_C", "Add Dynamic Tutorial Sub Goal =%");

	Params::UBPL_TutorialFunctionLibrary_C_Add_Dynamic_Tutorial_Sub_Goal____Params Parms{};

	Parms.SelfReference = SelfReference;
	Parms.TutorialClass = TutorialClass;
	Parms.GoalIdentity = GoalIdentity;
	Parms.Description = Description;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetTutorialState_ReturnValue = CallFunc_GetTutorialState_ReturnValue;
	Parms.K2Node_MakeStruct_QtnTutorialSubAction = K2Node_MakeStruct_QtnTutorialSubAction;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPL_TutorialFunctionLibrary.BPL_TutorialFunctionLibrary_C.Add Tutorial Training Prompt
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     WorldReference                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      ScreenClass                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      TutorialPrompt                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      TutorialHeading                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FName                        TutorialIdentity                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnScreen*                  LocalScreen                                                      (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_TrainingPromptScreen_C>K2Node_DynamicCast_AsBPI_Training_Prompt_Screen                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPlayerUI*                CallFunc_GetLocalPlayerUIBP_localPlayerUI                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerUIBP_outputPin                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnScreen*                  CallFunc_GetScreen_ReturnValue                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_TutorialFunctionLibrary_C::Add_Tutorial_Training_Prompt(class UObject* WorldReference, class UClass* ScreenClass, const class FString& TutorialPrompt, const class FString& TutorialHeading, class FName TutorialIdentity, class UObject* __WorldContext, class UQtnScreen* LocalScreen, TScriptInterface<class IBPI_TrainingPromptScreen_C> K2Node_DynamicCast_AsBPI_Training_Prompt_Screen, bool K2Node_DynamicCast_bSuccess, class AQtnPlayerUI* CallFunc_GetLocalPlayerUIBP_localPlayerUI, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerUIBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue, class UQtnScreen* CallFunc_GetScreen_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPL_TutorialFunctionLibrary_C", "Add Tutorial Training Prompt");

	Params::UBPL_TutorialFunctionLibrary_C_Add_Tutorial_Training_Prompt_Params Parms{};

	Parms.WorldReference = WorldReference;
	Parms.ScreenClass = ScreenClass;
	Parms.TutorialPrompt = TutorialPrompt;
	Parms.TutorialHeading = TutorialHeading;
	Parms.TutorialIdentity = TutorialIdentity;
	Parms.__WorldContext = __WorldContext;
	Parms.LocalScreen = LocalScreen;
	Parms.K2Node_DynamicCast_AsBPI_Training_Prompt_Screen = K2Node_DynamicCast_AsBPI_Training_Prompt_Screen;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetLocalPlayerUIBP_localPlayerUI = CallFunc_GetLocalPlayerUIBP_localPlayerUI;
	Parms.CallFunc_GetLocalPlayerUIBP_outputPin = CallFunc_GetLocalPlayerUIBP_outputPin;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetScreen_ReturnValue = CallFunc_GetScreen_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


