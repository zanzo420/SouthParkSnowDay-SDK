#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Interface_QtnGoal_SP_Day1_DeliveryParent.Interface_QtnGoal_SP_Day1_DeliveryParent_C
// (None)

class UClass* IInterface_QtnGoal_SP_Day1_DeliveryParent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Interface_QtnGoal_SP_Day1_DeliveryParent_C");

	return Clss;
}


// Interface_QtnGoal_SP_Day1_DeliveryParent_C Interface_QtnGoal_SP_Day1_DeliveryParent.Default__Interface_QtnGoal_SP_Day1_DeliveryParent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IInterface_QtnGoal_SP_Day1_DeliveryParent_C* IInterface_QtnGoal_SP_Day1_DeliveryParent_C::GetDefaultObj()
{
	static class IInterface_QtnGoal_SP_Day1_DeliveryParent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IInterface_QtnGoal_SP_Day1_DeliveryParent_C*>(IInterface_QtnGoal_SP_Day1_DeliveryParent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Interface_QtnGoal_SP_Day1_DeliveryParent.Interface_QtnGoal_SP_Day1_DeliveryParent_C.DoGetDelivered
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Delivered                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IInterface_QtnGoal_SP_Day1_DeliveryParent_C::DoGetDelivered(bool* Delivered)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Interface_QtnGoal_SP_Day1_DeliveryParent_C", "DoGetDelivered");

	Params::IInterface_QtnGoal_SP_Day1_DeliveryParent_C_DoGetDelivered_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Delivered != nullptr)
		*Delivered = Parms.Delivered;

}


// Function Interface_QtnGoal_SP_Day1_DeliveryParent.Interface_QtnGoal_SP_Day1_DeliveryParent_C.SetSiblingGoal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQtnGoal*                    SiblingGoal                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IInterface_QtnGoal_SP_Day1_DeliveryParent_C::SetSiblingGoal(class UQtnGoal* SiblingGoal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Interface_QtnGoal_SP_Day1_DeliveryParent_C", "SetSiblingGoal");

	Params::IInterface_QtnGoal_SP_Day1_DeliveryParent_C_SetSiblingGoal_Params Parms{};

	Parms.SiblingGoal = SiblingGoal;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Interface_QtnGoal_SP_Day1_DeliveryParent.Interface_QtnGoal_SP_Day1_DeliveryParent_C.DoGetSpokeExitGate
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATravelVolume_BP_C*          SpokeExitGate                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IInterface_QtnGoal_SP_Day1_DeliveryParent_C::DoGetSpokeExitGate(class ATravelVolume_BP_C** SpokeExitGate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Interface_QtnGoal_SP_Day1_DeliveryParent_C", "DoGetSpokeExitGate");

	Params::IInterface_QtnGoal_SP_Day1_DeliveryParent_C_DoGetSpokeExitGate_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (SpokeExitGate != nullptr)
		*SpokeExitGate = Parms.SpokeExitGate;

}


// Function Interface_QtnGoal_SP_Day1_DeliveryParent.Interface_QtnGoal_SP_Day1_DeliveryParent_C.DoCloseGate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATravelVolume_BP_C*          Gate                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IInterface_QtnGoal_SP_Day1_DeliveryParent_C::DoCloseGate(class ATravelVolume_BP_C* Gate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Interface_QtnGoal_SP_Day1_DeliveryParent_C", "DoCloseGate");

	Params::IInterface_QtnGoal_SP_Day1_DeliveryParent_C_DoCloseGate_Params Parms{};

	Parms.Gate = Gate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Interface_QtnGoal_SP_Day1_DeliveryParent.Interface_QtnGoal_SP_Day1_DeliveryParent_C.DoGetSpokeEntranceGate
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATravelVolume_BP_C*          SpokeEntranceGate                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IInterface_QtnGoal_SP_Day1_DeliveryParent_C::DoGetSpokeEntranceGate(class ATravelVolume_BP_C** SpokeEntranceGate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Interface_QtnGoal_SP_Day1_DeliveryParent_C", "DoGetSpokeEntranceGate");

	Params::IInterface_QtnGoal_SP_Day1_DeliveryParent_C_DoGetSpokeEntranceGate_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (SpokeEntranceGate != nullptr)
		*SpokeEntranceGate = Parms.SpokeEntranceGate;

}


// Function Interface_QtnGoal_SP_Day1_DeliveryParent.Interface_QtnGoal_SP_Day1_DeliveryParent_C.DoDeliverItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IInterface_QtnGoal_SP_Day1_DeliveryParent_C::DoDeliverItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Interface_QtnGoal_SP_Day1_DeliveryParent_C", "DoDeliverItem");



	UObject::ProcessEvent(Func, nullptr);

}

}


