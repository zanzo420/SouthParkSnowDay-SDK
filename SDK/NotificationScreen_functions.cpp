#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NotificationScreen.NotificationScreen_C
// (None)

class UClass* UNotificationScreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NotificationScreen_C");

	return Clss;
}


// NotificationScreen_C NotificationScreen.Default__NotificationScreen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNotificationScreen_C* UNotificationScreen_C::GetDefaultObj()
{
	static class UNotificationScreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNotificationScreen_C*>(UNotificationScreen_C::StaticClass()->DefaultObject);

	return Default;
}


// Function NotificationScreen.NotificationScreen_C.OnIntro
// (Event, Protected, BlueprintEvent)
// Parameters:

void UNotificationScreen_C::OnIntro()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NotificationScreen_C", "OnIntro");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NotificationScreen.NotificationScreen_C.OnOutro
// (Event, Protected, BlueprintEvent)
// Parameters:

void UNotificationScreen_C::OnOutro()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NotificationScreen_C", "OnOutro");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NotificationScreen.NotificationScreen_C.ExecuteUbergraph_NotificationScreen
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetNotificationWidget_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNotificationWidget_C*       K2Node_DynamicCast_AsNotification_Widget                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UNotificationWidget_C*       K2Node_DynamicCast_AsNotification_Widget_1                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UNotificationScreen_C::ExecuteUbergraph_NotificationScreen(int32 EntryPoint, class UUserWidget* CallFunc_GetNotificationWidget_ReturnValue, class UNotificationWidget_C* K2Node_DynamicCast_AsNotification_Widget, bool K2Node_DynamicCast_bSuccess, class UNotificationWidget_C* K2Node_DynamicCast_AsNotification_Widget_1, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NotificationScreen_C", "ExecuteUbergraph_NotificationScreen");

	Params::UNotificationScreen_C_ExecuteUbergraph_NotificationScreen_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetNotificationWidget_ReturnValue = CallFunc_GetNotificationWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsNotification_Widget = K2Node_DynamicCast_AsNotification_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsNotification_Widget_1 = K2Node_DynamicCast_AsNotification_Widget_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


