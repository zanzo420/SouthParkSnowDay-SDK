#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class HeadMountedDisplay.HeadMountedDisplayFunctionLibrary
class UHeadMountedDisplayFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UHeadMountedDisplayFunctionLibrary* GetDefaultObj();

	void UpdateExternalTrackingHMDPosition(struct FTransform& ExternalTrackingTransform);
	void SetXRTimedInputActionDelegate(class FName& ActionName, FDelegateProperty_& InDelegate);
	void SetXRDisconnectDelegate(FDelegateProperty_& InDisconnectedDelegate);
	void SetWorldToMetersScale(class UObject* WorldContext, float NewScale);
	void SetTrackingOrigin(enum class EHMDTrackingOrigin Origin);
	void SetSpectatorScreenTexture(class UTexture* InTexture);
	void SetSpectatorScreenModeTexturePlusEyeLayout(const struct FVector2D& EyeRectMin, const struct FVector2D& EyeRectMax, const struct FVector2D& TextureRectMin, const struct FVector2D& TextureRectMax, bool bDrawEyeFirst, bool bClearBlack, bool bUseAlpha);
	void SetSpectatorScreenMode(enum class ESpectatorScreenMode Mode);
	void SetClippingPlanes(float Near, float Far);
	void ResetOrientationAndPosition(float Yaw, enum class EOrientPositionSelector Options);
	bool IsSpectatorScreenModeControllable();
	bool IsInLowPersistenceMode();
	bool IsHeadMountedDisplayEnabled();
	bool IsHeadMountedDisplayConnected();
	bool IsDeviceTracking(struct FXRDeviceId& XRDeviceId);
	bool HasValidTrackingPosition();
	int32 GetXRSystemFlags();
	float GetWorldToMetersScale(class UObject* WorldContext);
	void GetVRFocusState(bool* bUseFocus, bool* bHasFocus);
	class FString GetVersionString();
	struct FTransform GetTrackingToWorldTransform(class UObject* WorldContext);
	void GetTrackingSensorParameters(struct FVector* Origin, struct FRotator* Rotation, float* LeftFOV, float* RightFOV, float* TopFOV, float* BottomFOV, float* Distance, float* NearPlane, float* FarPlane, bool* IsActive, int32 Index);
	enum class EHMDTrackingOrigin GetTrackingOrigin();
	float GetScreenPercentage();
	void GetPositionalTrackingCameraParameters(struct FVector* CameraOrigin, struct FRotator* CameraRotation, float* HFOV, float* VFOV, float* CameraDistance, float* NearPlane, float* FarPlane);
	struct FVector2D GetPlayAreaBounds(enum class EHMDTrackingOrigin Origin);
	float GetPixelDensity();
	void GetOrientationAndPosition(struct FRotator* DeviceRotation, struct FVector* DevicePosition);
	int32 GetNumOfTrackingSensors();
	void GetMotionControllerData(class UObject* WorldContext, enum class EControllerHand Hand, struct FXRMotionControllerData* MotionControllerData);
	enum class EHMDWornState GetHMDWornState();
	class FName GetHMDDeviceName();
	void GetHMDData(class UObject* WorldContext, struct FXRHMDData* HMDData);
	void GetDeviceWorldPose(class UObject* WorldContext, struct FXRDeviceId& XRDeviceId, bool* bIsTracked, struct FRotator* Orientation, bool* bHasPositionalTracking, struct FVector* Position);
	void GetDevicePose(struct FXRDeviceId& XRDeviceId, bool* bIsTracked, struct FRotator* Orientation, bool* bHasPositionalTracking, struct FVector* Position);
	bool GetControllerTransformForTime(class UObject* WorldContext, int32 ControllerIndex, class FName MotionSource, const struct FTimespan& Time, bool* bTimeWasUsed, struct FRotator* Orientation, struct FVector* Position, bool* bProvidedLinearVelocity, struct FVector* LinearVelocity, bool* bProvidedAngularVelocity, struct FVector* AngularVelocityRadPerSec);
	TArray<struct FXRDeviceId> EnumerateTrackedDevices(class FName SystemId, enum class EXRTrackedDeviceType DeviceType);
	void EnableLowPersistenceMode(bool bEnable);
	bool EnableHMD(bool bEnable);
	void DisconnectRemoteXRDevice();
	enum class EXRDeviceConnectionResult ConnectRemoteXRDevice(const class FString& IpAddress, int32 BitRate);
	bool ConfigureGestures(struct FXRGestureConfig& GestureConfig);
	void ClearXRTimedInputActionDelegate(class FName& ActionPath);
	void CalibrateExternalTrackingToHMD(struct FTransform& ExternalTrackingTransform);
	void BreakKey(const struct FKey& InKey, class FString* InteractionProfile, enum class EControllerHand* Hand, class FName* MotionSource, class FString* Indentifier, class FString* Component);
};

// 0x0 (0x28 - 0x28)
// Class HeadMountedDisplay.HandKeypointConversion
class UHandKeypointConversion : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UHandKeypointConversion* GetDefaultObj();

	int32 Conv_HandKeypointToInt32(enum class EHandKeypoint Input);
};

// 0xC0 (0x540 - 0x480)
// Class HeadMountedDisplay.MotionControllerComponent
class UMotionControllerComponent : public UPrimitiveComponent
{
public:
	int32                                        PlayerIndex;                                       // 0x480(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EControllerHand                   Hand;                                              // 0x484(0x1)(BlueprintVisible, ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1576[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  MotionSource;                                      // 0x488(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDisableLowLatencyUpdate : 1;                      // Mask: 0x1, PropSize: 0x10x490(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_DF : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1578[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ETrackingStatus                   CurrentTrackingStatus;                             // 0x494(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDisplayDeviceModel;                               // 0x495(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1579[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  DisplayModelSource;                                // 0x498(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                           CustomDisplayMesh;                                 // 0x4A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UMaterialInterface*>            DisplayMeshMaterialOverrides;                      // 0x4A8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_157C[0x68];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimitiveComponent*                   DisplayComponent;                                  // 0x520(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_157D[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMotionControllerComponent* GetDefaultObj();

	void SetTrackingSource(enum class EControllerHand NewSource);
	void SetTrackingMotionSource(class FName NewSource);
	void SetShowDeviceModel(bool bShowControllerModel);
	void SetDisplayModelSource(class FName NewDisplayModelSource);
	void SetCustomDisplayMesh(class UStaticMesh* NewDisplayMesh);
	void SetAssociatedPlayerIndex(int32 NewPlayer);
	void OnMotionControllerUpdated();
	bool IsTracked();
	enum class EControllerHand GetTrackingSource();
	float GetParameterValue(class FName InName, bool* bValueFound);
	struct FVector GetHandJointPosition(int32 JointIndex, bool* bValueFound);
};

// 0x0 (0x28 - 0x28)
// Class HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary
class UMotionTrackedDeviceFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMotionTrackedDeviceFunctionLibrary* GetDefaultObj();

	void SetIsControllerMotionTrackingEnabledByDefault(bool Enable);
	bool IsMotionTrackingEnabledForSource(int32 PlayerIndex, class FName SourceName);
	bool IsMotionTrackingEnabledForDevice(int32 PlayerIndex, enum class EControllerHand Hand);
	bool IsMotionTrackingEnabledForComponent(class UMotionControllerComponent* MotionControllerComponent);
	bool IsMotionTrackedDeviceCountManagementNecessary();
	bool IsMotionSourceTracking(int32 PlayerIndex, class FName SourceName);
	int32 GetMotionTrackingEnabledControllerCount();
	int32 GetMaximumMotionTrackedControllerCount();
	class FName GetActiveTrackingSystemName();
	TArray<class FName> EnumerateMotionSources();
	bool EnableMotionTrackingOfSource(int32 PlayerIndex, class FName SourceName);
	bool EnableMotionTrackingOfDevice(int32 PlayerIndex, enum class EControllerHand Hand);
	bool EnableMotionTrackingForComponent(class UMotionControllerComponent* MotionControllerComponent);
	void DisableMotionTrackingOfSource(int32 PlayerIndex, class FName SourceName);
	void DisableMotionTrackingOfDevice(int32 PlayerIndex, enum class EControllerHand Hand);
	void DisableMotionTrackingOfControllersForPlayer(int32 PlayerIndex);
	void DisableMotionTrackingOfAllControllers();
	void DisableMotionTrackingForComponent(class UMotionControllerComponent* MotionControllerComponent);
};

// 0x90 (0x170 - 0xE0)
// Class HeadMountedDisplay.VRNotificationsComponent
class UVRNotificationsComponent : public UActorComponent
{
public:
	FMulticastInlineDelegateProperty_            HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate; // 0xE0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            HMDTrackingInitializedDelegate;                    // 0xF0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            HMDRecenteredDelegate;                             // 0x100(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            HMDLostDelegate;                                   // 0x110(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            HMDReconnectedDelegate;                            // 0x120(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            HMDConnectCanceledDelegate;                        // 0x130(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            HMDPutOnHeadDelegate;                              // 0x140(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            HMDRemovedFromHeadDelegate;                        // 0x150(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            VRControllerRecenteredDelegate;                    // 0x160(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UVRNotificationsComponent* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class HeadMountedDisplay.XRAssetFunctionLibrary
class UXRAssetFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UXRAssetFunctionLibrary* GetDefaultObj();

	class UPrimitiveComponent* AddNamedDeviceVisualizationComponentBlocking(class AActor* Target, class FName SystemName, class FName DeviceName, bool bManualAttachment, struct FTransform& RelativeTransform, struct FXRDeviceId* XRDeviceId);
	class UPrimitiveComponent* AddDeviceVisualizationComponentBlocking(class AActor* Target, struct FXRDeviceId& XRDeviceId, bool bManualAttachment, struct FTransform& RelativeTransform);
};

// 0x30 (0x60 - 0x30)
// Class HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent
class UAsyncTask_LoadXRDeviceVisComponent : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnModelLoaded;                                     // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnLoadFailure;                                     // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1618[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimitiveComponent*                   SpawnedComponent;                                  // 0x58(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UAsyncTask_LoadXRDeviceVisComponent* GetDefaultObj();

	class UAsyncTask_LoadXRDeviceVisComponent* AddNamedDeviceVisualizationComponentAsync(class AActor* Target, class FName SystemName, class FName DeviceName, bool bManualAttachment, struct FTransform& RelativeTransform, struct FXRDeviceId* XRDeviceId, class UPrimitiveComponent** NewComponent);
	class UAsyncTask_LoadXRDeviceVisComponent* AddDeviceVisualizationComponentAsync(class AActor* Target, struct FXRDeviceId& XRDeviceId, bool bManualAttachment, struct FTransform& RelativeTransform, class UPrimitiveComponent** NewComponent);
};

// 0x0 (0x28 - 0x28)
// Class HeadMountedDisplay.XRLoadingScreenFunctionLibrary
class UXRLoadingScreenFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UXRLoadingScreenFunctionLibrary* GetDefaultObj();

	void ShowLoadingScreen();
	void SetLoadingScreen(class UTexture* Texture, const struct FVector2D& Scale, const struct FVector& Offset, bool bShowLoadingMovie, bool bShowOnSet);
	void HideLoadingScreen();
	void ClearLoadingScreenSplashes();
	void AddLoadingScreenSplash(class UTexture* Texture, const struct FVector& Translation, const struct FRotator& Rotation, const struct FVector2D& Size, const struct FRotator& DeltaRotation, bool bClearBeforeAdd);
};

}

