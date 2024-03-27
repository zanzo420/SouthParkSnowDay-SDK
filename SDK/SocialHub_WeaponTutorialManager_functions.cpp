#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SocialHub_WeaponTutorialManager.SocialHub_WeaponTutorialManager_C
// (Actor)

class UClass* ASocialHub_WeaponTutorialManager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SocialHub_WeaponTutorialManager_C");

	return Clss;
}


// SocialHub_WeaponTutorialManager_C SocialHub_WeaponTutorialManager.Default__SocialHub_WeaponTutorialManager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASocialHub_WeaponTutorialManager_C* ASocialHub_WeaponTutorialManager_C::GetDefaultObj()
{
	static class ASocialHub_WeaponTutorialManager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASocialHub_WeaponTutorialManager_C*>(ASocialHub_WeaponTutorialManager_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SocialHub_WeaponTutorialManager.SocialHub_WeaponTutorialManager_C.SaveTutorialAsSeen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABaseWeapon_C*               Weapon                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerController*        LOCAL_localPlayerController                                      (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFTUXDataBag_C*              LOCAL_FTUXDataBag                                                (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerController*        CallFunc_GetLocalPlayerControllerBP_localPlayerController        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerControllerBP_outputPin                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ASocialHub_WeaponTutorialManager_C::SaveTutorialAsSeen(class ABaseWeapon_C* Weapon, class AQtnPlayerController* LOCAL_localPlayerController, class UFTUXDataBag_C* LOCAL_FTUXDataBag, class AQtnPlayerController* CallFunc_GetLocalPlayerControllerBP_localPlayerController, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerControllerBP_outputPin, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SocialHub_WeaponTutorialManager_C", "SaveTutorialAsSeen");

	Params::ASocialHub_WeaponTutorialManager_C_SaveTutorialAsSeen_Params Parms{};

	Parms.Weapon = Weapon;
	Parms.LOCAL_localPlayerController = LOCAL_localPlayerController;
	Parms.LOCAL_FTUXDataBag = LOCAL_FTUXDataBag;
	Parms.CallFunc_GetLocalPlayerControllerBP_localPlayerController = CallFunc_GetLocalPlayerControllerBP_localPlayerController;
	Parms.CallFunc_GetLocalPlayerControllerBP_outputPin = CallFunc_GetLocalPlayerControllerBP_outputPin;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SocialHub_WeaponTutorialManager.SocialHub_WeaponTutorialManager_C.IsVerbOnACurrentWeapon
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Verb                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Found_verb_on_current_melee_weapon                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Found_verb_on_current_ranged_weapon                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnVerb_Archetype_C*        K2Node_DynamicCast_AsQtn_Verb_Archetype                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UQtnVerb*>            CallFunc_GetAllVerbs_verbs                                       (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UQtnVerb*>            CallFunc_GetAllVerbs_verbs_1                                     (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_Array_Contains_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void ASocialHub_WeaponTutorialManager_C::IsVerbOnACurrentWeapon(class UObject* Verb, bool* Found_verb_on_current_melee_weapon, bool* Found_verb_on_current_ranged_weapon, class UQtnVerb_Archetype_C* K2Node_DynamicCast_AsQtn_Verb_Archetype, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, TArray<class UQtnVerb*>& CallFunc_GetAllVerbs_verbs, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TArray<class UQtnVerb*>& CallFunc_GetAllVerbs_verbs_1, bool CallFunc_Array_Contains_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SocialHub_WeaponTutorialManager_C", "IsVerbOnACurrentWeapon");

	Params::ASocialHub_WeaponTutorialManager_C_IsVerbOnACurrentWeapon_Params Parms{};

	Parms.Verb = Verb;
	Parms.K2Node_DynamicCast_AsQtn_Verb_Archetype = K2Node_DynamicCast_AsQtn_Verb_Archetype;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetAllVerbs_verbs = CallFunc_GetAllVerbs_verbs;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetAllVerbs_verbs_1 = CallFunc_GetAllVerbs_verbs_1;
	Parms.CallFunc_Array_Contains_ReturnValue_1 = CallFunc_Array_Contains_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Found_verb_on_current_melee_weapon != nullptr)
		*Found_verb_on_current_melee_weapon = Parms.Found_verb_on_current_melee_weapon;

	if (Found_verb_on_current_ranged_weapon != nullptr)
		*Found_verb_on_current_ranged_weapon = Parms.Found_verb_on_current_ranged_weapon;

}


// Function SocialHub_WeaponTutorialManager.SocialHub_WeaponTutorialManager_C.AreAllPromptsSatisfied?
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABaseWeapon_C*               Weapon                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               All_satisfied                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               LOCAL_FoundUnfilledPrompt                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UQtnVerb*>            CallFunc_GetAllVerbs_verbs                                       (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnVerb*                    CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnVerb_Archetype_C*        K2Node_DynamicCast_AsQtn_Verb_Archetype                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FString>              CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// class FString                      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void ASocialHub_WeaponTutorialManager_C::AreAllPromptsSatisfied_(class ABaseWeapon_C* Weapon, bool* All_satisfied, bool LOCAL_FoundUnfilledPrompt, bool Temp_bool_True_if_break_was_hit_Variable, TArray<class UQtnVerb*>& CallFunc_GetAllVerbs_verbs, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, class UQtnVerb* CallFunc_Array_Get_Item, class UQtnVerb_Archetype_C* K2Node_DynamicCast_AsQtn_Verb_Archetype, bool K2Node_DynamicCast_bSuccess, TArray<class FString>& CallFunc_Map_Keys_Keys, const class FString& CallFunc_Array_Get_Item_1, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SocialHub_WeaponTutorialManager_C", "AreAllPromptsSatisfied?");

	Params::ASocialHub_WeaponTutorialManager_C_AreAllPromptsSatisfied__Params Parms{};

	Parms.Weapon = Weapon;
	Parms.LOCAL_FoundUnfilledPrompt = LOCAL_FoundUnfilledPrompt;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_GetAllVerbs_verbs = CallFunc_GetAllVerbs_verbs;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsQtn_Verb_Archetype = K2Node_DynamicCast_AsQtn_Verb_Archetype;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (All_satisfied != nullptr)
		*All_satisfied = Parms.All_satisfied;

}


// Function SocialHub_WeaponTutorialManager.SocialHub_WeaponTutorialManager_C.ClearTutorials
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Melee                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Use_elegant_timer                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPlayerUI*                CallFunc_GetLocalPlayerUIBP_localPlayerUI                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerUIBP_outputPin                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerUIArchetype_C*     K2Node_DynamicCast_AsQtn_Player_UIArchetype                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUI_FTUX_DedicatedMap_Screen_C*CallFunc_GetFTUXWeaponScreen_ftuxWeaponScreen                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASocialHub_WeaponTutorialManager_C::ClearTutorials(bool Melee, bool Use_elegant_timer, class AQtnPlayerUI* CallFunc_GetLocalPlayerUIBP_localPlayerUI, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerUIBP_outputPin, class AQtnPlayerUIArchetype_C* K2Node_DynamicCast_AsQtn_Player_UIArchetype, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess, class UUI_FTUX_DedicatedMap_Screen_C* CallFunc_GetFTUXWeaponScreen_ftuxWeaponScreen)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SocialHub_WeaponTutorialManager_C", "ClearTutorials");

	Params::ASocialHub_WeaponTutorialManager_C_ClearTutorials_Params Parms{};

	Parms.Melee = Melee;
	Parms.Use_elegant_timer = Use_elegant_timer;
	Parms.CallFunc_GetLocalPlayerUIBP_localPlayerUI = CallFunc_GetLocalPlayerUIBP_localPlayerUI;
	Parms.CallFunc_GetLocalPlayerUIBP_outputPin = CallFunc_GetLocalPlayerUIBP_outputPin;
	Parms.K2Node_DynamicCast_AsQtn_Player_UIArchetype = K2Node_DynamicCast_AsQtn_Player_UIArchetype;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetFTUXWeaponScreen_ftuxWeaponScreen = CallFunc_GetFTUXWeaponScreen_ftuxWeaponScreen;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SocialHub_WeaponTutorialManager.SocialHub_WeaponTutorialManager_C.Register
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTrainingMoment_Component_C* Training_moment_component                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void ASocialHub_WeaponTutorialManager_C::Register(class UTrainingMoment_Component_C* Training_moment_component, bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SocialHub_WeaponTutorialManager_C", "Register");

	Params::ASocialHub_WeaponTutorialManager_C_Register_Params Parms{};

	Parms.Training_moment_component = Training_moment_component;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SocialHub_WeaponTutorialManager.SocialHub_WeaponTutorialManager_C.LOCAL Has Player Seen Weapon?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABaseWeapon_C*               Weapon                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Seen                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnTutorialStatus      CallFunc_GetTutorialState_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ASocialHub_WeaponTutorialManager_C::LOCAL_Has_Player_Seen_Weapon_(class ABaseWeapon_C* Weapon, bool* Seen, bool CallFunc_IsValid_ReturnValue, enum class EQtnTutorialStatus CallFunc_GetTutorialState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SocialHub_WeaponTutorialManager_C", "LOCAL Has Player Seen Weapon?");

	Params::ASocialHub_WeaponTutorialManager_C_LOCAL_Has_Player_Seen_Weapon__Params Parms{};

	Parms.Weapon = Weapon;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetTutorialState_ReturnValue = CallFunc_GetTutorialState_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Seen != nullptr)
		*Seen = Parms.Seen;

}


// Function SocialHub_WeaponTutorialManager.SocialHub_WeaponTutorialManager_C.Show Tutorial
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABaseWeapon_C*               Weapon                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               LOCAL_RangedTrainingFound                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               LOCAL_MeleeTrainingFound                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        LOCAL_WeaponName_Ranged                                          (Edit, BlueprintVisible)
// class ABaseWeapon_C*               LOCAL_BaseRangedWeapon                                           (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        LOCAL_WeaponName_Melee                                           (Edit, BlueprintVisible)
// class ABaseWeapon_C*               LOCAL_BaseMeleeWeapon                                            (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnBase_C*             LOCAL_BodyPawn                                                   (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASocialHub_WeaponTutorialManager_C::Show_Tutorial(class ABaseWeapon_C* Weapon, bool LOCAL_RangedTrainingFound, bool LOCAL_MeleeTrainingFound, class FText LOCAL_WeaponName_Ranged, class ABaseWeapon_C* LOCAL_BaseRangedWeapon, class FText LOCAL_WeaponName_Melee, class ABaseWeapon_C* LOCAL_BaseMeleeWeapon, class ABodyPawnBase_C* LOCAL_BodyPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SocialHub_WeaponTutorialManager_C", "Show Tutorial");

	Params::ASocialHub_WeaponTutorialManager_C_Show_Tutorial_Params Parms{};

	Parms.Weapon = Weapon;
	Parms.LOCAL_RangedTrainingFound = LOCAL_RangedTrainingFound;
	Parms.LOCAL_MeleeTrainingFound = LOCAL_MeleeTrainingFound;
	Parms.LOCAL_WeaponName_Ranged = LOCAL_WeaponName_Ranged;
	Parms.LOCAL_BaseRangedWeapon = LOCAL_BaseRangedWeapon;
	Parms.LOCAL_WeaponName_Melee = LOCAL_WeaponName_Melee;
	Parms.LOCAL_BaseMeleeWeapon = LOCAL_BaseMeleeWeapon;
	Parms.LOCAL_BodyPawn = LOCAL_BodyPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SocialHub_WeaponTutorialManager.SocialHub_WeaponTutorialManager_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASocialHub_WeaponTutorialManager_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SocialHub_WeaponTutorialManager_C", "ReceiveTick");

	Params::ASocialHub_WeaponTutorialManager_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SocialHub_WeaponTutorialManager.SocialHub_WeaponTutorialManager_C.bindPromptFulfilledEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABaseWeapon_C*               Weapon                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASocialHub_WeaponTutorialManager_C::bindPromptFulfilledEvent(class ABaseWeapon_C* Weapon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SocialHub_WeaponTutorialManager_C", "bindPromptFulfilledEvent");

	Params::ASocialHub_WeaponTutorialManager_C_bindPromptFulfilledEvent_Params Parms{};

	Parms.Weapon = Weapon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SocialHub_WeaponTutorialManager.SocialHub_WeaponTutorialManager_C.CheckAllPromptsDone
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     AssociatedObject                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASocialHub_WeaponTutorialManager_C::CheckAllPromptsDone(class UObject* AssociatedObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SocialHub_WeaponTutorialManager_C", "CheckAllPromptsDone");

	Params::ASocialHub_WeaponTutorialManager_C_CheckAllPromptsDone_Params Parms{};

	Parms.AssociatedObject = AssociatedObject;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SocialHub_WeaponTutorialManager.SocialHub_WeaponTutorialManager_C.ExecuteUbergraph_SocialHub_WeaponTutorialManager
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AreAllPromptsSatisfied__all_satisfied                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnGameStateArchetype_C*    K2Node_DynamicCast_AsQtn_Game_State_Archetype                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABaseWeapon_C*               K2Node_CustomEvent_weapon                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsReadyForGameplay_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPlayerUI*                CallFunc_GetLocalPlayerUIBP_localPlayerUI                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerUIBP_outputPin                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_AssociatedObject                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVerbOnACurrentWeapon_Found_verb_on_current_melee_weapon(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVerbOnACurrentWeapon_found_verb_on_current_ranged_weapon(ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPlayerUIArchetype_C*     K2Node_DynamicCast_AsQtn_Player_UIArchetype                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUI_FTUX_DedicatedMap_Screen_C*CallFunc_GetFTUXWeaponScreen_ftuxWeaponScreen                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AreAllPromptsSatisfied__all_satisfied_1                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ASocialHub_WeaponTutorialManager_C::ExecuteUbergraph_SocialHub_WeaponTutorialManager(int32 EntryPoint, bool CallFunc_AreAllPromptsSatisfied__all_satisfied, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float K2Node_Event_DeltaSeconds, bool CallFunc_IsServer_ReturnValue, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess, class ABaseWeapon_C* K2Node_CustomEvent_weapon, bool CallFunc_IsReadyForGameplay_ReturnValue, class AQtnPlayerUI* CallFunc_GetLocalPlayerUIBP_localPlayerUI, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerUIBP_outputPin, class UObject* K2Node_CustomEvent_AssociatedObject, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsVerbOnACurrentWeapon_Found_verb_on_current_melee_weapon, bool CallFunc_IsVerbOnACurrentWeapon_found_verb_on_current_ranged_weapon, class AQtnPlayerUIArchetype_C* K2Node_DynamicCast_AsQtn_Player_UIArchetype, bool K2Node_DynamicCast_bSuccess_1, class UUI_FTUX_DedicatedMap_Screen_C* CallFunc_GetFTUXWeaponScreen_ftuxWeaponScreen, bool CallFunc_AreAllPromptsSatisfied__all_satisfied_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SocialHub_WeaponTutorialManager_C", "ExecuteUbergraph_SocialHub_WeaponTutorialManager");

	Params::ASocialHub_WeaponTutorialManager_C_ExecuteUbergraph_SocialHub_WeaponTutorialManager_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_AreAllPromptsSatisfied__all_satisfied = CallFunc_AreAllPromptsSatisfied__all_satisfied;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_GetQtnGameState_ReturnValue = CallFunc_GetQtnGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Game_State_Archetype = K2Node_DynamicCast_AsQtn_Game_State_Archetype;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_weapon = K2Node_CustomEvent_weapon;
	Parms.CallFunc_IsReadyForGameplay_ReturnValue = CallFunc_IsReadyForGameplay_ReturnValue;
	Parms.CallFunc_GetLocalPlayerUIBP_localPlayerUI = CallFunc_GetLocalPlayerUIBP_localPlayerUI;
	Parms.CallFunc_GetLocalPlayerUIBP_outputPin = CallFunc_GetLocalPlayerUIBP_outputPin;
	Parms.K2Node_CustomEvent_AssociatedObject = K2Node_CustomEvent_AssociatedObject;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsVerbOnACurrentWeapon_Found_verb_on_current_melee_weapon = CallFunc_IsVerbOnACurrentWeapon_Found_verb_on_current_melee_weapon;
	Parms.CallFunc_IsVerbOnACurrentWeapon_found_verb_on_current_ranged_weapon = CallFunc_IsVerbOnACurrentWeapon_found_verb_on_current_ranged_weapon;
	Parms.K2Node_DynamicCast_AsQtn_Player_UIArchetype = K2Node_DynamicCast_AsQtn_Player_UIArchetype;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetFTUXWeaponScreen_ftuxWeaponScreen = CallFunc_GetFTUXWeaponScreen_ftuxWeaponScreen;
	Parms.CallFunc_AreAllPromptsSatisfied__all_satisfied_1 = CallFunc_AreAllPromptsSatisfied__all_satisfied_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


