#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GlobalNavWallet_BPI.GlobalNavWallet_BPI_C
// (None)

class UClass* IGlobalNavWallet_BPI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GlobalNavWallet_BPI_C");

	return Clss;
}


// GlobalNavWallet_BPI_C GlobalNavWallet_BPI.Default__GlobalNavWallet_BPI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IGlobalNavWallet_BPI_C* IGlobalNavWallet_BPI_C::GetDefaultObj()
{
	static class IGlobalNavWallet_BPI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IGlobalNavWallet_BPI_C*>(IGlobalNavWallet_BPI_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GlobalNavWallet_BPI.GlobalNavWallet_BPI_C.RequestCurrencyVisibilities
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShowTP                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ShowDM                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ShowPP                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IGlobalNavWallet_BPI_C::RequestCurrencyVisibilities(bool* ShowTP, bool* ShowDM, bool* ShowPP)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalNavWallet_BPI_C", "RequestCurrencyVisibilities");

	Params::IGlobalNavWallet_BPI_C_RequestCurrencyVisibilities_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ShowTP != nullptr)
		*ShowTP = Parms.ShowTP;

	if (ShowDM != nullptr)
		*ShowDM = Parms.ShowDM;

	if (ShowPP != nullptr)
		*ShowPP = Parms.ShowPP;

}

}


