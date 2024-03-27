#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPL_CosmeticFunctions.BPL_CosmeticFunctions_C
// (None)

class UClass* UBPL_CosmeticFunctions_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPL_CosmeticFunctions_C");

	return Clss;
}


// BPL_CosmeticFunctions_C BPL_CosmeticFunctions.Default__BPL_CosmeticFunctions_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPL_CosmeticFunctions_C* UBPL_CosmeticFunctions_C::GetDefaultObj()
{
	static class UBPL_CosmeticFunctions_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPL_CosmeticFunctions_C*>(UBPL_CosmeticFunctions_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPL_CosmeticFunctions.BPL_CosmeticFunctions_C.Build Thumbnail Path
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               BuildFullpath                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Path                                                             (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      LOCAL_Path                                                       (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetProjectContentDirectory_ReturnValue                  (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)

void UBPL_CosmeticFunctions_C::Build_Thumbnail_Path(bool BuildFullpath, class UObject* __WorldContext, class FString* Path, const class FString& LOCAL_Path, const class FString& CallFunc_GetProjectContentDirectory_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPL_CosmeticFunctions_C", "Build Thumbnail Path");

	Params::UBPL_CosmeticFunctions_C_Build_Thumbnail_Path_Params Parms{};

	Parms.BuildFullpath = BuildFullpath;
	Parms.__WorldContext = __WorldContext;
	Parms.LOCAL_Path = LOCAL_Path;
	Parms.CallFunc_GetProjectContentDirectory_ReturnValue = CallFunc_GetProjectContentDirectory_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Path != nullptr)
		*Path = std::move(Parms.Path);

}


// Function BPL_CosmeticFunctions.BPL_CosmeticFunctions_C.Build Thumbnail Filename
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      CosmeticId                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Filename                                                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      LOCAL_Prefix                                                     (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// class FString                      LOCAL_Path                                                       (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)

void UBPL_CosmeticFunctions_C::Build_Thumbnail_Filename(const class FString& CosmeticId, class UObject* __WorldContext, class FString* Filename, const class FString& LOCAL_Prefix, const class FString& LOCAL_Path, const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPL_CosmeticFunctions_C", "Build Thumbnail Filename");

	Params::UBPL_CosmeticFunctions_C_Build_Thumbnail_Filename_Params Parms{};

	Parms.CosmeticId = CosmeticId;
	Parms.__WorldContext = __WorldContext;
	Parms.LOCAL_Prefix = LOCAL_Prefix;
	Parms.LOCAL_Path = LOCAL_Path;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Filename != nullptr)
		*Filename = std::move(Parms.Filename);

}


// Function BPL_CosmeticFunctions.BPL_CosmeticFunctions_C.SaveThumbnails
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<class FString, class UTextureRenderTarget2D*>ThumbnailMap                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Build_Thumbnail_Path_Path                               (ZeroConstructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Build_Thumbnail_Filename_Filename                       (ZeroConstructor, HasGetValueTypeHash)
// class UTextureRenderTarget2D*      CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_SaveRenderTargetAsTexture2DEditorOnly_ReturnValue       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_CosmeticFunctions_C::SaveThumbnails(TMap<class FString, class UTextureRenderTarget2D*> ThumbnailMap, class UObject* __WorldContext, const class FString& CallFunc_Build_Thumbnail_Path_Path, TArray<class FString>& CallFunc_Map_Keys_Keys, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const class FString& CallFunc_Array_Get_Item, const class FString& CallFunc_Build_Thumbnail_Filename_Filename, class UTextureRenderTarget2D* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class UTexture2D* CallFunc_SaveRenderTargetAsTexture2DEditorOnly_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPL_CosmeticFunctions_C", "SaveThumbnails");

	Params::UBPL_CosmeticFunctions_C_SaveThumbnails_Params Parms{};

	Parms.ThumbnailMap = ThumbnailMap;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Build_Thumbnail_Path_Path = CallFunc_Build_Thumbnail_Path_Path;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Build_Thumbnail_Filename_Filename = CallFunc_Build_Thumbnail_Filename_Filename;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_SaveRenderTargetAsTexture2DEditorOnly_ReturnValue = CallFunc_SaveRenderTargetAsTexture2DEditorOnly_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPL_CosmeticFunctions.BPL_CosmeticFunctions_C.LoadCosmeticThumbnailByID
// (Static, Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Build_Thumbnail_Filename_Filename                       (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Build_Thumbnail_Path_Path                               (ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// TScriptInterface<class IAssetRegistry>CallFunc_GetAssetRegistry_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAssetData                  CallFunc_GetAssetByObjectPath_ReturnValue                        (HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetAsset_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IAssetRegistry>CallFunc_GetAssetRegistry_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
// TArray<struct FAssetData>          CallFunc_GetAssetsByPackageName_OutAssetData                     (ReferenceParm)
// bool                               CallFunc_GetAssetsByPackageName_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FAssetData                  CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// class UObject*                     CallFunc_GetAsset_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPL_CosmeticFunctions_C::LoadCosmeticThumbnailByID(const class FString& ID, class UObject* __WorldContext, class UTexture2D** Result, bool* Success, const class FString& CallFunc_Build_Thumbnail_Filename_Filename, const class FString& CallFunc_Build_Thumbnail_Path_Path, int32 Temp_int_Array_Index_Variable, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, TScriptInterface<class IAssetRegistry> CallFunc_GetAssetRegistry_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, class FName CallFunc_Conv_StringToName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, int32 Temp_int_Loop_Counter_Variable, class FName CallFunc_Conv_StringToName_ReturnValue_1, const struct FAssetData& CallFunc_GetAssetByObjectPath_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UObject* CallFunc_GetAsset_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IAssetRegistry> CallFunc_GetAssetRegistry_ReturnValue_1, TArray<struct FAssetData>& CallFunc_GetAssetsByPackageName_OutAssetData, bool CallFunc_GetAssetsByPackageName_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FAssetData& CallFunc_Array_Get_Item, class UObject* CallFunc_GetAsset_ReturnValue_1, class UTexture2D* K2Node_DynamicCast_AsTexture_2D_1, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPL_CosmeticFunctions_C", "LoadCosmeticThumbnailByID");

	Params::UBPL_CosmeticFunctions_C_LoadCosmeticThumbnailByID_Params Parms{};

	Parms.ID = ID;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Build_Thumbnail_Filename_Filename = CallFunc_Build_Thumbnail_Filename_Filename;
	Parms.CallFunc_Build_Thumbnail_Path_Path = CallFunc_Build_Thumbnail_Path_Path;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_GetAssetRegistry_ReturnValue = CallFunc_GetAssetRegistry_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Conv_StringToName_ReturnValue_1 = CallFunc_Conv_StringToName_ReturnValue_1;
	Parms.CallFunc_GetAssetByObjectPath_ReturnValue = CallFunc_GetAssetByObjectPath_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAsset_ReturnValue = CallFunc_GetAsset_ReturnValue;
	Parms.K2Node_DynamicCast_AsTexture_2D = K2Node_DynamicCast_AsTexture_2D;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetAssetRegistry_ReturnValue_1 = CallFunc_GetAssetRegistry_ReturnValue_1;
	Parms.CallFunc_GetAssetsByPackageName_OutAssetData = CallFunc_GetAssetsByPackageName_OutAssetData;
	Parms.CallFunc_GetAssetsByPackageName_ReturnValue = CallFunc_GetAssetsByPackageName_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetAsset_ReturnValue_1 = CallFunc_GetAsset_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsTexture_2D_1 = K2Node_DynamicCast_AsTexture_2D_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BPL_CosmeticFunctions.BPL_CosmeticFunctions_C.LoadEmoteThumbnails
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>              EmoteIDs                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<class UClass*, class UTexture2D*>EmoteThumbs                                                      (Parm, OutParm)
// TMap<class UClass*, class UTexture2D*>LOCAL_Thumbs                                                     (Edit, BlueprintVisible)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_LoadCosmeticThumbnailByID_Result                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadCosmeticThumbnailByID_Success                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnCharacterBodyMesh*       CallFunc_Get_Cosmetic_Item_From_Id_OutBodyMesh                   (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TSubclassOf<class UQtnEmoteVerb_Archetype_C>CallFunc_Get_Cosmetic_Item_From_Id_OutEmoteVerb                  (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsQtn_Emote_Verb_Archetype               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_CosmeticFunctions_C::LoadEmoteThumbnails(TArray<class FString>& EmoteIDs, class UObject* __WorldContext, TMap<class UClass*, class UTexture2D*>* EmoteThumbs, TMap<class UClass*, class UTexture2D*> LOCAL_Thumbs, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, const class FString& CallFunc_Array_Get_Item, class UTexture2D* CallFunc_LoadCosmeticThumbnailByID_Result, bool CallFunc_LoadCosmeticThumbnailByID_Success, int32 Temp_int_Loop_Counter_Variable, class UQtnCharacterBodyMesh* CallFunc_Get_Cosmetic_Item_From_Id_OutBodyMesh, TSubclassOf<class UQtnEmoteVerb_Archetype_C> CallFunc_Get_Cosmetic_Item_From_Id_OutEmoteVerb, class UClass* K2Node_ClassDynamicCast_AsQtn_Emote_Verb_Archetype, bool K2Node_ClassDynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPL_CosmeticFunctions_C", "LoadEmoteThumbnails");

	Params::UBPL_CosmeticFunctions_C_LoadEmoteThumbnails_Params Parms{};

	Parms.EmoteIDs = EmoteIDs;
	Parms.__WorldContext = __WorldContext;
	Parms.LOCAL_Thumbs = LOCAL_Thumbs;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_LoadCosmeticThumbnailByID_Result = CallFunc_LoadCosmeticThumbnailByID_Result;
	Parms.CallFunc_LoadCosmeticThumbnailByID_Success = CallFunc_LoadCosmeticThumbnailByID_Success;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Get_Cosmetic_Item_From_Id_OutBodyMesh = CallFunc_Get_Cosmetic_Item_From_Id_OutBodyMesh;
	Parms.CallFunc_Get_Cosmetic_Item_From_Id_OutEmoteVerb = CallFunc_Get_Cosmetic_Item_From_Id_OutEmoteVerb;
	Parms.K2Node_ClassDynamicCast_AsQtn_Emote_Verb_Archetype = K2Node_ClassDynamicCast_AsQtn_Emote_Verb_Archetype;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (EmoteThumbs != nullptr)
		*EmoteThumbs = Parms.EmoteThumbs;

}


// Function BPL_CosmeticFunctions.BPL_CosmeticFunctions_C.IsCosmeticAnEmote
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      VerbClass                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      EmoteClass                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsEmote                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_ClassDynamicCast_AsQtn_Emote_Verb_Archetype               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPL_CosmeticFunctions_C::IsCosmeticAnEmote(class UClass* VerbClass, class UObject* __WorldContext, class UClass** EmoteClass, bool* IsEmote, class UClass* K2Node_ClassDynamicCast_AsQtn_Emote_Verb_Archetype, bool K2Node_ClassDynamicCast_bSuccess, bool CallFunc_IsValidClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPL_CosmeticFunctions_C", "IsCosmeticAnEmote");

	Params::UBPL_CosmeticFunctions_C_IsCosmeticAnEmote_Params Parms{};

	Parms.VerbClass = VerbClass;
	Parms.__WorldContext = __WorldContext;
	Parms.K2Node_ClassDynamicCast_AsQtn_Emote_Verb_Archetype = K2Node_ClassDynamicCast_AsQtn_Emote_Verb_Archetype;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (EmoteClass != nullptr)
		*EmoteClass = Parms.EmoteClass;

	if (IsEmote != nullptr)
		*IsEmote = Parms.IsEmote;

}


// Function BPL_CosmeticFunctions.BPL_CosmeticFunctions_C.LoadThumbnails
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FQtnCosmeticCatalogueEntry>EntriesToLoad                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<class FString, class UTexture2D*>ResultMap                                                        (Parm, OutParm)
// TMap<class UClass*, class UTexture2D*>EmotesMap                                                        (Parm, OutParm)
// TMap<class UClass*, class UTexture2D*>LOCAL_EmoteThumbs                                                (Edit, BlueprintVisible)
// TMap<class FString, class UTexture2D*>LOCAL_Thumbs                                                     (Edit, BlueprintVisible)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnCosmeticCatalogueEntry  CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  CallFunc_LoadCosmeticThumbnailByID_Result                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadCosmeticThumbnailByID_Success                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_IsCosmeticAnEmote_EmoteClass                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsCosmeticAnEmote_IsEmote                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPL_CosmeticFunctions_C::LoadThumbnails(TArray<struct FQtnCosmeticCatalogueEntry>& EntriesToLoad, class UObject* __WorldContext, TMap<class FString, class UTexture2D*>* ResultMap, TMap<class UClass*, class UTexture2D*>* EmotesMap, TMap<class UClass*, class UTexture2D*> LOCAL_EmoteThumbs, TMap<class FString, class UTexture2D*> LOCAL_Thumbs, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FQtnCosmeticCatalogueEntry& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UTexture2D* CallFunc_LoadCosmeticThumbnailByID_Result, bool CallFunc_LoadCosmeticThumbnailByID_Success, class UClass* CallFunc_IsCosmeticAnEmote_EmoteClass, bool CallFunc_IsCosmeticAnEmote_IsEmote, int32 CallFunc_Add_IntInt_ReturnValue, class UTexture2D* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPL_CosmeticFunctions_C", "LoadThumbnails");

	Params::UBPL_CosmeticFunctions_C_LoadThumbnails_Params Parms{};

	Parms.EntriesToLoad = EntriesToLoad;
	Parms.__WorldContext = __WorldContext;
	Parms.LOCAL_EmoteThumbs = LOCAL_EmoteThumbs;
	Parms.LOCAL_Thumbs = LOCAL_Thumbs;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_LoadCosmeticThumbnailByID_Result = CallFunc_LoadCosmeticThumbnailByID_Result;
	Parms.CallFunc_LoadCosmeticThumbnailByID_Success = CallFunc_LoadCosmeticThumbnailByID_Success;
	Parms.CallFunc_IsCosmeticAnEmote_EmoteClass = CallFunc_IsCosmeticAnEmote_EmoteClass;
	Parms.CallFunc_IsCosmeticAnEmote_IsEmote = CallFunc_IsCosmeticAnEmote_IsEmote;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ResultMap != nullptr)
		*ResultMap = Parms.ResultMap;

	if (EmotesMap != nullptr)
		*EmotesMap = Parms.EmotesMap;

}


// Function BPL_CosmeticFunctions.BPL_CosmeticFunctions_C.FetchPlayerCurrencyAmountByTag
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnBodyPawn*                TargetPlayer                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CurrencyTag                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OutCurrencyAmount                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnInventoryComponent*      CallFunc_GetBodyInventory_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrencyQuantity_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_CosmeticFunctions_C::FetchPlayerCurrencyAmountByTag(class AQtnBodyPawn* TargetPlayer, const struct FGameplayTag& CurrencyTag, class UObject* __WorldContext, int32* OutCurrencyAmount, class UQtnInventoryComponent* CallFunc_GetBodyInventory_ReturnValue, int32 CallFunc_GetCurrencyQuantity_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPL_CosmeticFunctions_C", "FetchPlayerCurrencyAmountByTag");

	Params::UBPL_CosmeticFunctions_C_FetchPlayerCurrencyAmountByTag_Params Parms{};

	Parms.TargetPlayer = TargetPlayer;
	Parms.CurrencyTag = CurrencyTag;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetBodyInventory_ReturnValue = CallFunc_GetBodyInventory_ReturnValue;
	Parms.CallFunc_GetCurrencyQuantity_ReturnValue = CallFunc_GetCurrencyQuantity_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutCurrencyAmount != nullptr)
		*OutCurrencyAmount = Parms.OutCurrencyAmount;

}


// Function BPL_CosmeticFunctions.BPL_CosmeticFunctions_C.Can Player Afford Cosmetic Item
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ABodyPawnPlayer_C*           TargetPlayer                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnCosmeticCatalogueEntry  Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CanAfford_                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FetchPlayerCurrencyAmount_OutCurrencyAmount             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_CosmeticFunctions_C::Can_Player_Afford_Cosmetic_Item(class ABodyPawnPlayer_C* TargetPlayer, struct FQtnCosmeticCatalogueEntry& Item, class UObject* __WorldContext, bool* CanAfford_, int32 Temp_int_Array_Index_Variable, TArray<class FString>& CallFunc_Map_Keys_Keys, const class FString& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_FetchPlayerCurrencyAmount_OutCurrencyAmount, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPL_CosmeticFunctions_C", "Can Player Afford Cosmetic Item");

	Params::UBPL_CosmeticFunctions_C_Can_Player_Afford_Cosmetic_Item_Params Parms{};

	Parms.TargetPlayer = TargetPlayer;
	Parms.Item = Item;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_FetchPlayerCurrencyAmount_OutCurrencyAmount = CallFunc_FetchPlayerCurrencyAmount_OutCurrencyAmount;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CanAfford_ != nullptr)
		*CanAfford_ = Parms.CanAfford_;

}


// Function BPL_CosmeticFunctions.BPL_CosmeticFunctions_C.Can Player Afford Item
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ABodyPawnPlayer_C*           TargetPlayer                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFQtnStoreItem              Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CanAfford_                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FetchPlayerCurrencyAmount_OutCurrencyAmount             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_CosmeticFunctions_C::Can_Player_Afford_Item(class ABodyPawnPlayer_C* TargetPlayer, struct FFQtnStoreItem& Item, class UObject* __WorldContext, bool* CanAfford_, int32 Temp_int_Array_Index_Variable, TArray<class FString>& CallFunc_Map_Keys_Keys, const class FString& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_FetchPlayerCurrencyAmount_OutCurrencyAmount, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPL_CosmeticFunctions_C", "Can Player Afford Item");

	Params::UBPL_CosmeticFunctions_C_Can_Player_Afford_Item_Params Parms{};

	Parms.TargetPlayer = TargetPlayer;
	Parms.Item = Item;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_FetchPlayerCurrencyAmount_OutCurrencyAmount = CallFunc_FetchPlayerCurrencyAmount_OutCurrencyAmount;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CanAfford_ != nullptr)
		*CanAfford_ = Parms.CanAfford_;

}


// Function BPL_CosmeticFunctions.BPL_CosmeticFunctions_C.FetchPlayerCurrencyAmount
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABodyPawnPlayer_C*           TargetPlayer                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CurrencyCode                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OutCurrencyAmount                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GetCurrencyGameplayTag_ReturnValue                      (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsProxyInventoryCurrency_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsUserAccountCurrency_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnInventoryComponent*      CallFunc_GetBodyInventory_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrencyQuantity_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_CosmeticFunctions_C::FetchPlayerCurrencyAmount(class ABodyPawnPlayer_C* TargetPlayer, const class FString& CurrencyCode, class UObject* __WorldContext, int32* OutCurrencyAmount, const struct FGameplayTag& CallFunc_GetCurrencyGameplayTag_ReturnValue, bool CallFunc_IsProxyInventoryCurrency_ReturnValue, bool CallFunc_IsUserAccountCurrency_ReturnValue, class UQtnInventoryComponent* CallFunc_GetBodyInventory_ReturnValue, int32 CallFunc_GetCurrencyQuantity_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPL_CosmeticFunctions_C", "FetchPlayerCurrencyAmount");

	Params::UBPL_CosmeticFunctions_C_FetchPlayerCurrencyAmount_Params Parms{};

	Parms.TargetPlayer = TargetPlayer;
	Parms.CurrencyCode = CurrencyCode;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetCurrencyGameplayTag_ReturnValue = CallFunc_GetCurrencyGameplayTag_ReturnValue;
	Parms.CallFunc_IsProxyInventoryCurrency_ReturnValue = CallFunc_IsProxyInventoryCurrency_ReturnValue;
	Parms.CallFunc_IsUserAccountCurrency_ReturnValue = CallFunc_IsUserAccountCurrency_ReturnValue;
	Parms.CallFunc_GetBodyInventory_ReturnValue = CallFunc_GetBodyInventory_ReturnValue;
	Parms.CallFunc_GetCurrencyQuantity_ReturnValue = CallFunc_GetCurrencyQuantity_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutCurrencyAmount != nullptr)
		*OutCurrencyAmount = Parms.OutCurrencyAmount;

}


// Function BPL_CosmeticFunctions.BPL_CosmeticFunctions_C.Format Cosmetic Price Label
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FFQtnCurrencyCodeValuePair>CurrencyCodes                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class ABodyPawnPlayer_C*           PlayerBodyPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Text                                                             (Parm, OutParm)
// class FText                        PriceText                                                        (Edit, BlueprintVisible)
// class FText                        Temp_text_Variable                                               (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFQtnCurrencyCodeValuePair  CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// int32                              CallFunc_FetchPlayerCurrencyAmount_OutCurrencyAmount             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// bool                               CallFunc_NotEqual_StrStr_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_1                                             (None)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_3                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)

void UBPL_CosmeticFunctions_C::Format_Cosmetic_Price_Label(TArray<struct FFQtnCurrencyCodeValuePair>& CurrencyCodes, class ABodyPawnPlayer_C* PlayerBodyPawn, class UObject* __WorldContext, class FText* Text, class FText PriceText, class FText Temp_text_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FFQtnCurrencyCodeValuePair& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, float CallFunc_Conv_IntToFloat_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, int32 CallFunc_FetchPlayerCurrencyAmount_OutCurrencyAmount, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_LessEqual_IntInt_ReturnValue_1, class FText CallFunc_Format_ReturnValue, bool CallFunc_NotEqual_StrStr_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class FText Temp_text_Variable_1, bool Temp_bool_Variable, class FText K2Node_Select_Default, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_TextToUpper_ReturnValue, class FText CallFunc_Format_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPL_CosmeticFunctions_C", "Format Cosmetic Price Label");

	Params::UBPL_CosmeticFunctions_C_Format_Cosmetic_Price_Label_Params Parms{};

	Parms.CurrencyCodes = CurrencyCodes;
	Parms.PlayerBodyPawn = PlayerBodyPawn;
	Parms.__WorldContext = __WorldContext;
	Parms.PriceText = PriceText;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.CallFunc_FetchPlayerCurrencyAmount_OutCurrencyAmount = CallFunc_FetchPlayerCurrencyAmount_OutCurrencyAmount;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_1 = CallFunc_LessEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_NotEqual_StrStr_ReturnValue = CallFunc_NotEqual_StrStr_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_FormatArgumentData_3 = K2Node_MakeStruct_FormatArgumentData_3;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = Parms.Text;

}


// Function BPL_CosmeticFunctions.BPL_CosmeticFunctions_C.Get All Non-Zero Currency Codes
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TMap<class FString, int32>         Price_Map                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFQtnCurrencyCodeValuePair>OutPriceCodes                                                    (Parm, OutParm)
// TArray<struct FFQtnCurrencyCodeValuePair>CodeValuePairsArray                                              (Edit, BlueprintVisible)
// TArray<int32>                      CallFunc_Map_Values_Values                                       (ReferenceParm)
// TArray<class FString>              CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)
// struct FFQtnCurrencyCodeValuePair  K2Node_MakeStruct_FQtnCurrencyCodeValuePair                      (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_CosmeticFunctions_C::Get_All_NonMinusZero_Currency_Codes(TMap<class FString, int32>& Price_Map, class UObject* __WorldContext, TArray<struct FFQtnCurrencyCodeValuePair>* OutPriceCodes, const TArray<struct FFQtnCurrencyCodeValuePair>& CodeValuePairsArray, TArray<int32>& CallFunc_Map_Values_Values, TArray<class FString>& CallFunc_Map_Keys_Keys, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_Array_Get_Item, const struct FFQtnCurrencyCodeValuePair& K2Node_MakeStruct_FQtnCurrencyCodeValuePair, bool CallFunc_Greater_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPL_CosmeticFunctions_C", "Get All Non-Zero Currency Codes");

	Params::UBPL_CosmeticFunctions_C_Get_All_NonMinusZero_Currency_Codes_Params Parms{};

	Parms.Price_Map = Price_Map;
	Parms.__WorldContext = __WorldContext;
	Parms.CodeValuePairsArray = CodeValuePairsArray;
	Parms.CallFunc_Map_Values_Values = CallFunc_Map_Values_Values;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_MakeStruct_FQtnCurrencyCodeValuePair = K2Node_MakeStruct_FQtnCurrencyCodeValuePair;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutPriceCodes != nullptr)
		*OutPriceCodes = std::move(Parms.OutPriceCodes);

}


// Function BPL_CosmeticFunctions.BPL_CosmeticFunctions_C.Get Cosmetic Item From Id
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     WorldReference                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      ItemId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               IsEmote                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnCharacterBodyMesh*       OutBodyMesh                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TSubclassOf<class UQtnEmoteVerb_Archetype_C>OutEmoteVerb                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnCosmeticCatalogueEntry  CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_LoadClassAsset_Blocking_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsQtn_Emote_Verb_Archetype               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_ClassDynamicCast_AsQtn_Character_Body_Mesh                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnCharacterBodyMesh*       CallFunc_GetClassDefaultObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSubclassOf<class UObject>         CallFunc_Conv_SoftClassReferenceToClass_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsQtn_Character_Body_Mesh_1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidClass_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_ClassDynamicCast_AsQtn_Character_Body_Mesh_2              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnCharacterBodyMesh*       CallFunc_GetClassDefaultObject_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_CosmeticFunctions_C::Get_Cosmetic_Item_From_Id(class UObject* WorldReference, const class FString& ItemId, bool IsEmote, class UObject* __WorldContext, class UQtnCharacterBodyMesh** OutBodyMesh, TSubclassOf<class UQtnEmoteVerb_Archetype_C>* OutEmoteVerb, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FQtnCosmeticCatalogueEntry& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class UClass* CallFunc_LoadClassAsset_Blocking_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsQtn_Emote_Verb_Archetype, bool K2Node_ClassDynamicCast_bSuccess, class UClass* K2Node_ClassDynamicCast_AsQtn_Character_Body_Mesh, bool K2Node_ClassDynamicCast_bSuccess_1, class UQtnCharacterBodyMesh* CallFunc_GetClassDefaultObject_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, TSubclassOf<class UObject> CallFunc_Conv_SoftClassReferenceToClass_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsQtn_Character_Body_Mesh_1, bool K2Node_ClassDynamicCast_bSuccess_2, bool CallFunc_IsValidClass_ReturnValue_1, class UClass* K2Node_ClassDynamicCast_AsQtn_Character_Body_Mesh_2, bool K2Node_ClassDynamicCast_bSuccess_3, class UQtnCharacterBodyMesh* CallFunc_GetClassDefaultObject_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPL_CosmeticFunctions_C", "Get Cosmetic Item From Id");

	Params::UBPL_CosmeticFunctions_C_Get_Cosmetic_Item_From_Id_Params Parms{};

	Parms.WorldReference = WorldReference;
	Parms.ItemId = ItemId;
	Parms.IsEmote = IsEmote;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_LoadClassAsset_Blocking_ReturnValue = CallFunc_LoadClassAsset_Blocking_ReturnValue;
	Parms.K2Node_ClassDynamicCast_AsQtn_Emote_Verb_Archetype = K2Node_ClassDynamicCast_AsQtn_Emote_Verb_Archetype;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.K2Node_ClassDynamicCast_AsQtn_Character_Body_Mesh = K2Node_ClassDynamicCast_AsQtn_Character_Body_Mesh;
	Parms.K2Node_ClassDynamicCast_bSuccess_1 = K2Node_ClassDynamicCast_bSuccess_1;
	Parms.CallFunc_GetClassDefaultObject_ReturnValue = CallFunc_GetClassDefaultObject_ReturnValue;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_Conv_SoftClassReferenceToClass_ReturnValue = CallFunc_Conv_SoftClassReferenceToClass_ReturnValue;
	Parms.K2Node_ClassDynamicCast_AsQtn_Character_Body_Mesh_1 = K2Node_ClassDynamicCast_AsQtn_Character_Body_Mesh_1;
	Parms.K2Node_ClassDynamicCast_bSuccess_2 = K2Node_ClassDynamicCast_bSuccess_2;
	Parms.CallFunc_IsValidClass_ReturnValue_1 = CallFunc_IsValidClass_ReturnValue_1;
	Parms.K2Node_ClassDynamicCast_AsQtn_Character_Body_Mesh_2 = K2Node_ClassDynamicCast_AsQtn_Character_Body_Mesh_2;
	Parms.K2Node_ClassDynamicCast_bSuccess_3 = K2Node_ClassDynamicCast_bSuccess_3;
	Parms.CallFunc_GetClassDefaultObject_ReturnValue_1 = CallFunc_GetClassDefaultObject_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (OutBodyMesh != nullptr)
		*OutBodyMesh = Parms.OutBodyMesh;

	if (OutEmoteVerb != nullptr)
		*OutEmoteVerb = Parms.OutEmoteVerb;

}


// Function BPL_CosmeticFunctions.BPL_CosmeticFunctions_C.Check Item for Player Ownership
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ABodyPawnPlayer_C*           Player                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBodyDataBag_C*              BodyDataBag                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      ItemId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               HasOwnership                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnCharacterAppearanceComponent*CallFunc_GetBodyAppearanceComponent_ReturnValue                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_GetVaultEmotesData_ReturnValue                          (ConstParm, ReferenceParm)
// TArray<class FString>              CallFunc_GetVaultCosmeticsData_ReturnValue                       (ConstParm, ReferenceParm)
// bool                               CallFunc_Array_Contains_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPL_CosmeticFunctions_C::Check_Item_for_Player_Ownership(class ABodyPawnPlayer_C* Player, class UBodyDataBag_C* BodyDataBag, const class FString& ItemId, class UObject* __WorldContext, bool* HasOwnership, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Array_Contains_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, class UQtnCharacterAppearanceComponent* CallFunc_GetBodyAppearanceComponent_ReturnValue, TArray<class FString>& CallFunc_GetVaultEmotesData_ReturnValue, TArray<class FString>& CallFunc_GetVaultCosmeticsData_ReturnValue, bool CallFunc_Array_Contains_ReturnValue_2, bool CallFunc_Array_Contains_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPL_CosmeticFunctions_C", "Check Item for Player Ownership");

	Params::UBPL_CosmeticFunctions_C_Check_Item_for_Player_Ownership_Params Parms{};

	Parms.Player = Player;
	Parms.BodyDataBag = BodyDataBag;
	Parms.ItemId = ItemId;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue_1 = CallFunc_Array_Contains_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetBodyAppearanceComponent_ReturnValue = CallFunc_GetBodyAppearanceComponent_ReturnValue;
	Parms.CallFunc_GetVaultEmotesData_ReturnValue = CallFunc_GetVaultEmotesData_ReturnValue;
	Parms.CallFunc_GetVaultCosmeticsData_ReturnValue = CallFunc_GetVaultCosmeticsData_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue_2 = CallFunc_Array_Contains_ReturnValue_2;
	Parms.CallFunc_Array_Contains_ReturnValue_3 = CallFunc_Array_Contains_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

	if (HasOwnership != nullptr)
		*HasOwnership = Parms.HasOwnership;

}

}


