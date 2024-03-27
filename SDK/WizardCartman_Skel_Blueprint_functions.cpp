#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WizardCartman_Skel_Blueprint.WizardCartman_Skel_Blueprint_C
// (Actor)

class UClass* AWizardCartman_Skel_Blueprint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WizardCartman_Skel_Blueprint_C");

	return Clss;
}


// WizardCartman_Skel_Blueprint_C WizardCartman_Skel_Blueprint.Default__WizardCartman_Skel_Blueprint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AWizardCartman_Skel_Blueprint_C* AWizardCartman_Skel_Blueprint_C::GetDefaultObj()
{
	static class AWizardCartman_Skel_Blueprint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AWizardCartman_Skel_Blueprint_C*>(AWizardCartman_Skel_Blueprint_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WizardCartman_Skel_Blueprint.WizardCartman_Skel_Blueprint_C.BrowsToggle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               browsOn                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AWizardCartman_Skel_Blueprint_C::BrowsToggle(bool browsOn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WizardCartman_Skel_Blueprint_C", "BrowsToggle");

	Params::AWizardCartman_Skel_Blueprint_C_BrowsToggle_Params Parms{};

	Parms.browsOn = browsOn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WizardCartman_Skel_Blueprint.WizardCartman_Skel_Blueprint_C.SetPupilPosition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEyePositionStruct          EyeStruct                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector4_X                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector4_Y                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector4_Z                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector4_W                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_MakeColor_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWizardCartman_Skel_Blueprint_C::SetPupilPosition(const struct FEyePositionStruct& EyeStruct, float CallFunc_BreakVector4_X, float CallFunc_BreakVector4_Y, float CallFunc_BreakVector4_Z, float CallFunc_BreakVector4_W, const struct FLinearColor& CallFunc_MakeColor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WizardCartman_Skel_Blueprint_C", "SetPupilPosition");

	Params::AWizardCartman_Skel_Blueprint_C_SetPupilPosition_Params Parms{};

	Parms.EyeStruct = EyeStruct;
	Parms.CallFunc_BreakVector4_X = CallFunc_BreakVector4_X;
	Parms.CallFunc_BreakVector4_Y = CallFunc_BreakVector4_Y;
	Parms.CallFunc_BreakVector4_Z = CallFunc_BreakVector4_Z;
	Parms.CallFunc_BreakVector4_W = CallFunc_BreakVector4_W;
	Parms.CallFunc_MakeColor_ReturnValue = CallFunc_MakeColor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WizardCartman_Skel_Blueprint.WizardCartman_Skel_Blueprint_C.AdjustLook
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEyePositionStruct          CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWizardCartman_Skel_Blueprint_C::AdjustLook(float DeltaTime, float CallFunc_RandomFloatInRange_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable, const struct FEyePositionStruct& CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WizardCartman_Skel_Blueprint_C", "AdjustLook");

	Params::AWizardCartman_Skel_Blueprint_C_AdjustLook_Params Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WizardCartman_Skel_Blueprint.WizardCartman_Skel_Blueprint_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetPostProcessInstance_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCartman_PPBP_C*             K2Node_DynamicCast_AsCartman_PPBP                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void AWizardCartman_Skel_Blueprint_C::UserConstructionScript(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UAnimInstance* CallFunc_GetPostProcessInstance_ReturnValue, class UCartman_PPBP_C* K2Node_DynamicCast_AsCartman_PPBP, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WizardCartman_Skel_Blueprint_C", "UserConstructionScript");

	Params::AWizardCartman_Skel_Blueprint_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_GetPostProcessInstance_ReturnValue = CallFunc_GetPostProcessInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsCartman_PPBP = K2Node_DynamicCast_AsCartman_PPBP;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WizardCartman_Skel_Blueprint.WizardCartman_Skel_Blueprint_C.Flare__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AWizardCartman_Skel_Blueprint_C::Flare__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WizardCartman_Skel_Blueprint_C", "Flare__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WizardCartman_Skel_Blueprint.WizardCartman_Skel_Blueprint_C.Flare__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AWizardCartman_Skel_Blueprint_C::Flare__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WizardCartman_Skel_Blueprint_C", "Flare__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WizardCartman_Skel_Blueprint.WizardCartman_Skel_Blueprint_C.StaffFlare
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AWizardCartman_Skel_Blueprint_C::StaffFlare()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WizardCartman_Skel_Blueprint_C", "StaffFlare");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WizardCartman_Skel_Blueprint.WizardCartman_Skel_Blueprint_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AWizardCartman_Skel_Blueprint_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WizardCartman_Skel_Blueprint_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WizardCartman_Skel_Blueprint.WizardCartman_Skel_Blueprint_C.SetCartmanCam
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACameraActor*                Cam                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWizardCartman_Skel_Blueprint_C::SetCartmanCam(class ACameraActor* Cam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WizardCartman_Skel_Blueprint_C", "SetCartmanCam");

	Params::AWizardCartman_Skel_Blueprint_C_SetCartmanCam_Params Parms{};

	Parms.Cam = Cam;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WizardCartman_Skel_Blueprint.WizardCartman_Skel_Blueprint_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWizardCartman_Skel_Blueprint_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WizardCartman_Skel_Blueprint_C", "ReceiveEndPlay");

	Params::AWizardCartman_Skel_Blueprint_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WizardCartman_Skel_Blueprint.WizardCartman_Skel_Blueprint_C.BndEvt__WizardCartman_Skel_Blueprint_QtnVO_K2Node_ComponentBoundEvent_0_OnVOPlayed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCurveFloat*                 FacialAnimCurve                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                AnimMontage                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsLeadIn                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               NeedsLeadIn                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsEmpty                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               AutoClosePhone                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ForCutsceneHUD                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AWizardCartman_Skel_Blueprint_C::BndEvt__WizardCartman_Skel_Blueprint_QtnVO_K2Node_ComponentBoundEvent_0_OnVOPlayed__DelegateSignature(class UCurveFloat* FacialAnimCurve, class UAnimMontage* AnimMontage, bool IsLeadIn, bool NeedsLeadIn, bool IsEmpty, bool AutoClosePhone, bool ForCutsceneHUD)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WizardCartman_Skel_Blueprint_C", "BndEvt__WizardCartman_Skel_Blueprint_QtnVO_K2Node_ComponentBoundEvent_0_OnVOPlayed__DelegateSignature");

	Params::AWizardCartman_Skel_Blueprint_C_BndEvt__WizardCartman_Skel_Blueprint_QtnVO_K2Node_ComponentBoundEvent_0_OnVOPlayed__DelegateSignature_Params Parms{};

	Parms.FacialAnimCurve = FacialAnimCurve;
	Parms.AnimMontage = AnimMontage;
	Parms.IsLeadIn = IsLeadIn;
	Parms.NeedsLeadIn = NeedsLeadIn;
	Parms.IsEmpty = IsEmpty;
	Parms.AutoClosePhone = AutoClosePhone;
	Parms.ForCutsceneHUD = ForCutsceneHUD;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WizardCartman_Skel_Blueprint.WizardCartman_Skel_Blueprint_C.EnablePPBP
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AWizardCartman_Skel_Blueprint_C::EnablePPBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WizardCartman_Skel_Blueprint_C", "EnablePPBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WizardCartman_Skel_Blueprint.WizardCartman_Skel_Blueprint_C.ExecuteUbergraph_WizardCartman_Skel_Blueprint
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetPostProcessInstance_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCartmanTest_AnimBP_C*       K2Node_DynamicCast_AsCartman_Test_Anim_BP                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACameraActor*                K2Node_CustomEvent_Cam                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCurveFloat*                 K2Node_ComponentBoundEvent_facialAnimCurve                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                K2Node_ComponentBoundEvent_animMontage                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_isLeadIn                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_needsLeadIn                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_isEmpty                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_autoClosePhone                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_forCutsceneHUD                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTrialActor_AnimBP_C*        K2Node_DynamicCast_AsTrial_Actor_Anim_BP                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void AWizardCartman_Skel_Blueprint_C::ExecuteUbergraph_WizardCartman_Skel_Blueprint(int32 EntryPoint, class UAnimInstance* CallFunc_GetPostProcessInstance_ReturnValue, class UCartmanTest_AnimBP_C* K2Node_DynamicCast_AsCartman_Test_Anim_BP, bool K2Node_DynamicCast_bSuccess, class ACameraActor* K2Node_CustomEvent_Cam, enum class EEndPlayReason K2Node_Event_EndPlayReason, class UCurveFloat* K2Node_ComponentBoundEvent_facialAnimCurve, class UAnimMontage* K2Node_ComponentBoundEvent_animMontage, bool K2Node_ComponentBoundEvent_isLeadIn, bool K2Node_ComponentBoundEvent_needsLeadIn, bool K2Node_ComponentBoundEvent_isEmpty, bool K2Node_ComponentBoundEvent_autoClosePhone, bool K2Node_ComponentBoundEvent_forCutsceneHUD, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UTrialActor_AnimBP_C* K2Node_DynamicCast_AsTrial_Actor_Anim_BP, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WizardCartman_Skel_Blueprint_C", "ExecuteUbergraph_WizardCartman_Skel_Blueprint");

	Params::AWizardCartman_Skel_Blueprint_C_ExecuteUbergraph_WizardCartman_Skel_Blueprint_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetPostProcessInstance_ReturnValue = CallFunc_GetPostProcessInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsCartman_Test_Anim_BP = K2Node_DynamicCast_AsCartman_Test_Anim_BP;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_Cam = K2Node_CustomEvent_Cam;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.K2Node_ComponentBoundEvent_facialAnimCurve = K2Node_ComponentBoundEvent_facialAnimCurve;
	Parms.K2Node_ComponentBoundEvent_animMontage = K2Node_ComponentBoundEvent_animMontage;
	Parms.K2Node_ComponentBoundEvent_isLeadIn = K2Node_ComponentBoundEvent_isLeadIn;
	Parms.K2Node_ComponentBoundEvent_needsLeadIn = K2Node_ComponentBoundEvent_needsLeadIn;
	Parms.K2Node_ComponentBoundEvent_isEmpty = K2Node_ComponentBoundEvent_isEmpty;
	Parms.K2Node_ComponentBoundEvent_autoClosePhone = K2Node_ComponentBoundEvent_autoClosePhone;
	Parms.K2Node_ComponentBoundEvent_forCutsceneHUD = K2Node_ComponentBoundEvent_forCutsceneHUD;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsTrial_Actor_Anim_BP = K2Node_DynamicCast_AsTrial_Actor_Anim_BP;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


