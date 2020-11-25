// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "RsGameTechRT/Public/StructsAndEnums_RsGameTechRT.h"
#include "StructsAndEnums.generated.h"

// Enum RsTechRT.ERsInfluenceLinearType
UENUM(BlueprintType)
enum ERsInfluenceLinearType
{
	NONE_ERsInfluenceLinearType = 0,
	POSITION = 1,
	VELOCITY_ERsInfluenceLinearType = 2,
	ACCELERATION = 3,
	POSITION_TIME_REMAP = 4,
	ERsInfluenceLinearType_MAX = 5
};

// Enum RsTechRT.ERsInfluenceAngularType
UENUM(BlueprintType)
enum ERsInfluenceAngularType
{
	NONE1 = 0,
	ANGLE = 1,
	ERsInfluenceAngularType_MAX = 2
};

// Enum RsTechRT.ERsBase
UENUM(BlueprintType) enum ERsBase
{
	LOCAL = 0,
	PARENT = 1,
	WORLD = 2,
	COUNT_ERsBase = 3,
	UNDEFINED_ERsBase = 4,
	ERsBase_MAX = 5
};
// END OF CURRENT SHIT NEEDED FOR TESTING 
// SwGame_Enums
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum SwGame.ESwRopeAttachmentState
UENUM(BlueprintType) enum ESwRopeAttachmentState
{
	NotAttachedToRope = 0,
	Strafing = 1,
	NotSwingingOrClimbing = 2,
	SwingForwardStarted = 3,
	SwingBackwardStarted = 4,
	SwingingForward = 5,
	SwingingBackward = 6,
	SwingingForwardNoInput = 7,
	SwingingBackwardNoInput = 8,
	SwingingTurningLeftToRight = 9,
	SwingingTurningRightToLeft = 10,
	ClimbIdle = 11,
	ClimbAscend = 12,
	ClimbDescend = 13,
	ClimbTurningLeft = 14,
	ClimbTurningRight = 15,
	RESET_STATE = 16,
	ESwRopeAttachmentState_MAX = 17
};


// Enum SwGame.ESwMeditationTrainingState
UENUM(BlueprintType) enum ESwMeditationTrainingState
{
	Mode_BattleSelect = 0,
	Mode_Options_Arena = 1,
	Mode_Options_Modifiers = 2,
	Mode_PlacingSpawners = 3,
	Mode_Combat = 4,
	Mode_PostCombat = 5,
	Mode_MAX = 6
};


// Enum SwGame.ESwMeditationTrainingHeroModifier
UENUM(BlueprintType) enum ESwMeditationTrainingHeroModifier
{
	HeroModifier_None = 0,
	HeroModifier_InfiniteFocus = 1,
	HeroModifier_InfiniteHealth = 2,
	HeroModifier_InfiniteBlock = 3,
	HeroModifier_AllHostile = 4,
	HeroModifier_NoFactions = 5,
	HeroModifier_SpectatorMode = 6,
	HeroModifier_MAX = 7
};


// Enum SwGame.ERsCameraConditionalExpressionBooleanOperator
UENUM(BlueprintType) enum ERsCameraConditionalExpressionBooleanOperator
{
	AND = 0,
	OR = 1,
	ERsCameraConditionalExpressionBooleanOperator_MAX = 2
};


// Enum SwGame.ECameraMotionSmoothingTarget
UENUM(BlueprintType) enum ECameraMotionSmoothingTarget
{
	CMST_Anchor = 0,
	CMST_Focus = 1,
	CMST_MAX = 2
};


// Enum SwGame.EAbilityPriorities
UENUM(BlueprintType) enum EAbilityPriorities
{
	Ignore_EAbilityPriorities = 0,
	Low_EAbilityPriorities = 1,
	Medium_EAbilityPriorities = 2,
	High_EAbilityPriorities = 3,
	Always_EAbilityPriorities = 4,
	Count_EAbilityPriorities = 5,
	EAbilityPriorities_MAX = 6
};


// Enum SwGame.ERsAbilityState
UENUM(BlueprintType) enum ERsAbilityState
{
	None_AbilityState = 0,
	Pull_Activated = 1,
	Pull_Hold = 2,
	Pull_BeginDeactivate = 3,
	Pull_Deactivated = 4,
	ERsAbilityState_MAX = 5
};


// Enum SwGame.ERsVictimDataType
UENUM(BlueprintType) enum ERsVictimDataType
{
	EVDT_None = 0,
	EVDT_MAX = 1,
	Archer = 2,
	ATST = 3,
	BlasterBolt = 4,
	BountyHunter00 = 5,
	Boulder = 6,
	BrawlerDroid = 7,
	Bridge = 8,
	Brute = 9,
	Crab = 10,
	Crate = 11,
	Dagger = 12,
	ElectroStaff = 13,
	Flame = 14,
	FlameBeetle = 15,
	Flyer = 16,
	Grenade = 17,
	Grunt = 18,
	HeavyGunner = 19,
	Hero = 20,
	Inquisitor = 21,
	LVL_Cage_Large = 22,
	LVL_Hammer = 23,
	Missile = 24,
	PopBall = 25,
	Popper = 26,
	ProbeDroid_AI = 27,
	Pulverizer = 28,
	Pulverizer_Dark = 29,
	PushDoor = 30,
	RocketLauncher = 31,
	SlowdownFan = 32,
	Slug = 33,
	Spider = 34,
	SpirePulv = 35,
	StoneDoor = 36,
	Windmill = 37,
	ZeffoMedium = 38,
	ZeffoMedium_NoTentacles = 39,
	Zombie = 40,
	NightBrotherMelee = 41,
	ERsVictimDataType_MAX = 42
};


// Enum SwGame.ERsAbilityWeightClass
UENUM(BlueprintType) enum ERsAbilityWeightClass
{
	VeryLight = 0,
	Light = 1,
	Medium_AbilityWeight = 2,
	Heavy_ERsAbilityWeightClass = 3,
	VeryHeavy = 4,
	Count_AbilityWeight = 5,
	ERsAbilityWeightClass_MAX = 6
};


// Enum SwGame.ERsCameraIsInputActiveInputType
UENUM(BlueprintType) enum ERsCameraIsInputActiveInputType
{
	LookInput = 0,
	MoveInput = 1,
	LookOrMoveInput = 2,
	ERsCameraIsInputActiveInputType_MAX = 3
};


// Enum SwGame.ERsFallOutOfWorldResult
UENUM(BlueprintType) enum ERsFallOutOfWorldResult
{
	Aborted = 0,
	CausedDamage = 1,
	Killed_ERsFallOutOfWorldResult = 2,
	ERsFallOutOfWorldResult_MAX = 3
};


// Enum SwGame.ERsUserAgeGroup
UENUM(BlueprintType) enum ERsUserAgeGroup
{
	Unknown_ERsUserAgeGroup = 0,
	Underage = 1,
	NotUnderage = 2,
	ERsUserAgeGroup_MAX = 3
};


// Enum SwGame.ERsPinTelemetryPlatform
UENUM(BlueprintType) enum ERsPinTelemetryPlatform
{
	RsPinTelemetryPlatform_PC = 0,
	RsPinTelemetryPlatform_PS4 = 1,
	RsPinTelemetryPlatform_XboxOne = 2,
	RsPinTelemetryPlatform_MAX = 3
};


// Enum SwGame.ERsPinTelemetrySystemState
UENUM(BlueprintType) enum ERsPinTelemetrySystemState
{
	RsPinTelemetrySystemState_Inactive = 0,
	RsPinTelemetrySystemState_ShuttingDown = 1,
	RsPinTelemetrySystemState_Connected = 2,
	RsPinTelemetrySystemState_Booted = 3,
	RsPinTelemetrySystemState_AcquiringGameData = 4,
	RsPinTelemetrySystemState_InGame = 5,
	RsPinTelemetrySystemState_MAX = 6
};


// Enum SwGame.ERsTKPushPullDoorState
UENUM(BlueprintType) enum ERsTKPushPullDoorState
{
	Start = 0,
	Bent = 1,
	Dented = 2,
	ERsTKPushPullDoorState_MAX = 3
};


// Enum SwGame.ESwForcePushGlancingDirection
UENUM(BlueprintType) enum ESwForcePushGlancingDirection
{
	Left_ESwForcePushGlancingDirection = 0,
	Right_ESwForcePushGlancingDirection = 1,
	Count_ForcePush = 2,
	ESwForcePushGlancingDirection_MAX = 3
};


// Enum SwGame.ESwDirectionFacing
UENUM(BlueprintType) enum ESwDirectionFacing
{
	UserFacing = 0,
	CameraFacing = 1,
	StickFacing = 2,
	AITargetFacing = 3,
	StickFacingAndCameraFacingWhilstStationary = 4,
	ESwDirectionFacing_MAX = 5
};


// Enum SwGame.ESwAbilityUpgradeLevel
UENUM(BlueprintType) enum ESwAbilityUpgradeLevel
{
	Level = 0,
	Level01 = 1,
	Level02 = 2,
	Count_ESwAbility = 3,
	ESwAbilityUpgradeLevel_MAX = 4
};


// Enum SwGame.ESwBuddyDroidPhysicalAnimationProfile
UENUM(BlueprintType) enum ESwBuddyDroidPhysicalAnimationProfile
{
	None_SwBuddyDroid = 0,
	IdleDefault = 1,
	ESwBuddyDroidPhysicalAnimationProfile_MAX = 2
};


// Enum SwGame.ESwAIBuddyDroidTransformLerpMode
UENUM(BlueprintType) enum ESwAIBuddyDroidTransformLerpMode
{
	None_SwAIBuddyDroidTransform = 0,
	Attaching = 1,
	Detaching = 2,
	EnterZipline = 3,
	ESwAIBuddyDroidTransformLerpMode_MAX = 4
};


// Enum SwGame.ESwAIBuddyDroidMoveMode
UENUM(BlueprintType) enum ESwAIBuddyDroidMoveMode
{
	None_SwAIBuddyDroidMoveMode = 0,
	Follow = 1,
	Attached_ESwAIBuddyDroidMoveMode = 2,
	ESwAIBuddyDroidMoveMode_MAX = 3
};


// Enum SwGame.ESwAIBuddyState
UENUM(BlueprintType) enum ESwAIBuddyState
{
	Attached_ESwAIBuddyState = 0,
	Follow_ESwAIBuddyState = 1,
	Roam = 2,
	Mount = 3,
	MountFromWall = 4,
	Dismount = 5,
	Cine_ESwAIBuddyState = 6,
	ESwAIBuddyState_MAX = 7
};


// Enum SwGame.ESwAIBuddyAttachPoint
UENUM(BlueprintType) enum ESwAIBuddyAttachPoint
{
	Detached = 0,
	Charging = 1,
	RightShoulder = 2,
	LeftShoulder = 3,
	Zipline_ESwAIBuddyAttachPoint = 4,
	Holomap = 5,
	ESwAIBuddyAttachPoint_MAX = 6
};


// Enum SwGame.DismemberMode
UENUM(BlueprintType) enum EDismemberMode
{
	HiddenSkeletalMesh = 0,
	MasterSlaveComponent = 1,
	DismemberMode_MAX = 2
};


// Enum SwGame.ESwBendingMetalDoorForwardDirectionAxis
UENUM(BlueprintType) enum ESwBendingMetalDoorForwardDirectionAxis
{
	AxisX = 0,
	AxisY = 1,
	AxisZ = 2,
	ESwBendingMetalDoorForwardDirectionAxis_MAX = 3
};


// Enum SwGame.ESwBendingMetalDoorForcePullMode
UENUM(BlueprintType) enum ESwBendingMetalDoorForcePullMode
{
	Single = 0,
	Continuous = 1,
	ESwBendingMetalDoorForcePullMode_MAX = 2
};


// Enum SwGame.ESwAIFightSector
UENUM(BlueprintType) enum ESwAIFightSector
{
	Inner = 0,
	Outer = 1,
	ESwAIFightSector_MAX = 2
};


// Enum SwGame.EButtonMashLengthType
UENUM(BlueprintType) enum EButtonMashLengthType
{
	TimeBased = 0,
	MontageSection = 1,
	AnimationSpecified = 2,
	SyncGroupBased = 3,
	EButtonMashLengthType_Max = 4
};


// Enum SwGame.ESwForceMeterUsage
UENUM(BlueprintType) enum ESwForceMeterUsage
{
	ConsumeImmediately = 0,
	ConsumeOverTime = 1,
	ESwForceMeterUsage_MAX = 2
};


// Enum SwGame.ESwForcePushHitType
UENUM(BlueprintType) enum ESwForcePushHitType
{
	FPHT_Glancing = 0,
	FPHT_Direct = 1,
	FPHT_Super = 2,
	FPHT_Stagger = 3,
	FPHT_Count = 4,
	FPHT_MAX = 5
};


// Enum SwGame.ESwGameDestructionSaveType
UENUM(BlueprintType) enum ESwGameDestructionSaveType
{
	NeverSave = 0,
	SaveAtCheckpoint = 1,
	SaveImmediately = 2,
	SavePerEncounter = 3,
	ESwGameDestructionSaveType_MAX = 4
};


// Enum SwGame.ESwProjectileReflectionMode
UENUM(BlueprintType) enum ESwProjectileReflectionMode
{
	ReflectTowardsShooter = 0,
	ReflectTowardsZTargetingActor = 1,
	ESwProjectileReflectionMode_MAX = 2
};


// Enum SwGame.ESwInputGroup
UENUM(BlueprintType) enum ESwInputGroup
{
	All_ESwInputGroup = 0,
	Gamepad = 1,
	Keyboard = 2,
	Count_ESwInputGroup = 3,
	ESwInputGroup_MAX = 4
};


// Enum SwGame.ESwGrenadeDamageFilterType
UENUM(BlueprintType) enum ESwGrenadeDamageFilterType
{
	DamageAll = 0,
	NoDamageToShooter = 1,
	NoDamageToFriendlies = 2,
	ESwGrenadeDamageFilterType_MAX = 3
};


// Enum SwGame.ESwHighlightType
UENUM(BlueprintType) enum ESwHighlightType
{
	None_ESwHighlightType = 0,
	Unblockable = 1,
	ForceTargetCharacter = 2,
	ForceTargetNonCharacter = 3,
	ForceTargetAlternate = 4,
	Revenge = 5,
	Count_ESwHighlightType = 6,
	ESwHighlightType_MAX = 7
};


// Enum SwGame.ESwLightsaberMarksState
UENUM(BlueprintType) enum ESwLightsaberMarksState
{
	Idle_ESwLightsaberMarksState = 0,
	Tracing = 1,
	Hit = 2,
	Processing = 3,
	ESwLightsaberMarksState_MAX = 4
};


// Enum SwGame.ESwMeditationTrainingCellStatusFlags
UENUM(BlueprintType) enum ESwMeditationTrainingCellStatusFlags
{
	Disabled_ESwMeditationTrainingCellStatusFlags = 0,
	Selected = 1,
	Occupied = 2,
	Status = 3,
	Status01 = 4,
	Status02 = 5,
	Status03 = 6,
	Status04 = 7,
	Status05 = 8,
	Busy = 9,
	Unavailable = 10,
	ESwMeditationTrainingCellStatusFlags_MAX = 11
};


// Enum SwGame.ESwMeditationTrainingGridSize
UENUM(BlueprintType) enum ESwMeditationTrainingGridSize
{
	Small = 0,
	Medium_ESwMeditationTrainingGridSize = 1,
	Large = 2,
	ESwMeditationTrainingGridSize_MAX = 3
};


// Enum SwGame.EPhotoModeTweaks
UENUM(BlueprintType) enum EPhotoModeTweaks
{
	PM_Zoom = 0,
	PM_Tilt = 1,
	PM_DOF_Distance = 2,
	PM_DOF_FStop = 3,
	PM_Exposure = 4,
	PM_Vignette = 5,
	PM_FilmGrain = 6,
	PM_ChromaticAberation = 7,
	PM_HidePlayer = 8,
	PM_HideAI = 9,
	PM_Filter = 10,
	PM_FilterStrength = 11,
	PM_SpotLightBrightness = 12,
	PM_SpotLightColorTemperature = 13,
	PM_MAX = 14
};


// Enum SwGame.ESwProjectileReflectionResult
UENUM(BlueprintType) enum ESwProjectileReflectionResult
{
	NoInteraction = 0,
	Reflected = 1,
	Deflected = 2,
	ESwProjectileReflectionResult_MAX = 3
};


// Enum SwGame.ESwProjectileType
UENUM(BlueprintType) enum ESwProjectileType
{
	ProjectileType_Default = 0,
	ProjectileType1 = 1,
	ProjectileType2 = 2,
	ProjectileType3 = 3,
	ProjectileType4 = 4,
	ProjectileType5 = 5,
	ProjectileType6 = 6,
	ProjectileType7 = 7,
	ProjectileType8 = 8,
	ProjectileType9 = 9,
	ProjectileType10 = 10,
	ProjectileType11 = 11,
	ProjectileType12 = 12,
	ProjectileType13 = 13,
	ProjectileType14 = 14,
	ProjectileType15 = 15,
	ProjectileType16 = 16,
	ProjectileType17 = 17,
	ProjectileType18 = 18,
	ProjectileType19 = 19,
	ProjectileType20 = 20,
	ProjectileType21 = 21,
	ProjectileType22 = 22,
	ProjectileType23 = 23,
	ProjectileType24 = 24,
	ProjectileType25 = 25,
	ProjectileType26 = 26,
	ProjectileType27 = 27,
	ProjectileType28 = 28,
	ProjectileType29 = 29,
	ProjectileType30 = 30,
	ProjectileType31 = 31,
	ProjectileType32 = 32,
	ProjectileType33 = 33,
	ProjectileType34 = 34,
	ProjectileType35 = 35,
	ProjectileType36 = 36,
	ProjectileType37 = 37,
	ProjectileType38 = 38,
	ProjectileType39 = 39,
	ProjectileType40 = 40,
	ProjectileType41 = 41,
	ProjectileType42 = 42,
	ProjectileType43 = 43,
	ProjectileType44 = 44,
	ProjectileType45 = 45,
	ProjectileType46 = 46,
	ProjectileType47 = 47,
	ProjectileType48 = 48,
	ProjectileType49 = 49,
	ProjectileType_Max = 50,
	ESwProjectileType_MAX = 51
};


// Enum SwGame.ESwRopeAttachmentSlideToAttachmentLengthState
UENUM(BlueprintType) enum ESwRopeAttachmentSlideToAttachmentLengthState
{
	NotSliding = 0,
	SlidingUp = 1,
	SlidingDown = 2,
	ESwRopeAttachmentSlideToAttachmentLengthState_MAX = 3
};


// Enum SwGame.ESwRopeAttachmentPhysicalAnimationProfile
UENUM(BlueprintType) enum ESwRopeAttachmentPhysicalAnimationProfile
{
	None_ESwRopeAttachmentPhysicalAnimationProfile = 0,
	Hanging_ESwRopeAttachmentPhysicalAnimationProfile = 1,
	Climbing_ESwRopeAttachmentPhysicalAnimationProfile = 2,
	ESwRopeAttachmentPhysicalAnimationProfile_MAX = 3
};


// Enum SwGame.ESwRopeAttachmentHandPosition
UENUM(BlueprintType) enum ESwRopeAttachmentHandPosition
{
	RightHandUp = 0,
	LeftHandUp = 1,
	ESwRopeAttachmentHandPosition_MAX = 2
};


// Enum SwGame.ESwRopeAttachmentDetectionDirection
UENUM(BlueprintType) enum ESwRopeAttachmentDetectionDirection
{
	ActorForward = 0,
	MovementInput = 1,
	Camera = 2,
	ESwRopeAttachmentDetectionDirection_MAX = 3
};


// Enum SwGame.ESwDestructibleActorParallelStateType
UENUM(BlueprintType) enum ESwDestructibleActorParallelStateType
{
	None_ESwDestructibleActorParallelStateType = 0,
	Default_ESwDestructibleActorParallelStateType = 1,
	FrontHit = 2,
	BackHit = 3,
	ForcePush_ESwDestructibleActorParallelStateType = 4,
	ForcePull_ESwDestructibleActorParallelStateType = 5,
	ESwDestructibleActorParallelStateType_MAX = 6
};


// Enum SwGame.ESwDestructibleActorDamageSourceType
UENUM(BlueprintType) enum ESwDestructibleActorDamageSourceType
{
	None_ESwDestructibleActorDamageSourceType = 0,
	Default_ESwDestructibleActorDamageSourceType = 1,
	ForcePush_ESwDestructibleActorDamageSourceType = 2,
	ForcePull_ESwDestructibleActorDamageSourceType = 3,
	OverlapCharacter = 4,
	ESwDestructibleActorDamageSourceType_MAX = 5
};


// Enum SwGame.ESwStaminaMeterUsage
UENUM(BlueprintType) enum ESwStaminaMeterUsage
{
	ConsumeImmediately_ESwDestructibleActorDamageSourceType = 0,
	ConsumeOverTime_ESwDestructibleActorDamageSourceType = 1,
	ESwStaminaMeterUsage_MAX = 2
};


// Enum SwGame.ESwSuperJumpEndChargeReason
UENUM(BlueprintType) enum ESwSuperJumpEndChargeReason
{
	ReleasedCharge = 0,
	NotOnGround = 1,
	TookDamage = 2,
	Interrupted = 3,
	ESwSuperJumpEndChargeReason_MAX = 4
};


// Enum SwGame.ESwSuperJumpState
UENUM(BlueprintType) enum ESwSuperJumpState
{
	NotChargingOrJumping = 0,
	ChargeBegan = 1,
	ChargeComplete = 2,
	JumpAscent = 3,
	JumpDescent = 4,
	ESwSuperJumpState_MAX = 5
};


// Enum SwGame.ESwWallRunEndReason
UENUM(BlueprintType) enum ESwWallRunEndReason
{
	ReleasedWallRun = 0,
	WallLost = 1,
	JumpedFromWallRun = 2,
	NotInAir = 3,
	ESwWallRunEndReason_MAX = 4
};


// Enum SwGame.ESwWallRunOrientation
UENUM(BlueprintType) enum ESwWallRunOrientation
{
	NotOnWall = 0,
	WallOnLeft = 1,
	WallOnRight = 2,
	ESwWallRunOrientation_MAX = 3
};


// Enum SwGame.ESwWallRunState
UENUM(BlueprintType) enum ESwWallRunState
{
	NotWallRunning = 0,
	WallRunning = 1,
	WallRunExpired_ESwWallRunState = 2,
	WallRunFall_ESwWallRunState = 3,
	WallRunJump = 4,
	ESwWallRunState_MAX = 5
};


// Enum SwGame.ERsWindFieldVerticalInfluenceMode
UENUM(BlueprintType) enum ERsWindFieldVerticalInfluenceMode
{
	Standard_ERsWindFieldVerticalInfluenceMode = 0,
	OnlyWhenFalling = 1,
	DirectVelocityChange = 2,
	ERsWindFieldVerticalInfluenceMode_MAX = 3
};


// Enum SwGame.ESwWorldMapLayerBlendMode
UENUM(BlueprintType) enum ESwWorldMapLayerBlendMode
{
	Additive = 0,
	AlphaMasked = 1,
	ESwWorldMapLayerBlendMode_MAX = 2
};


// Enum SwGame.ESwHolomapLayer
UENUM(BlueprintType) enum ESwHolomapLayer
{
	Layer1 = 0,
	Layer2 = 1,
	Layer3 = 2,
	Layer4 = 3,
	ESwHolomapLayer_MAX = 4
};
//Game Structs



//

USTRUCT(BlueprintType)
struct FRsGeoLocator
{
	GENERATED_BODY()
public:
	unsigned char                                      UnknownData00[0xE0];                                      // 0x0000(0x00E0) MISSED OFFSET
};

// ScriptStruct RsGameTechRT.RsCharacterAnimDataBase
// 0x0040
USTRUCT(BlueprintType)
struct FRsCharacterAnimDataBase
{
	GENERATED_BODY()
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	float                                              StartTime;                                                // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               PlayRandomAnimation;                                      // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	float                                              Playrate;                                                 // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bStopAnimOnAbort;                                         // 0x0014(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	float                                              BlendInTime;                                              // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BlendOutTime;                                             // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                LoopCount;                                                // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BlendOutTriggerTime;                                      // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	FName                                       SlotNodeName;                                             // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	FVector2D                                   BlendSpaceInput;                                          // 0x0030(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseMontage;                                              // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bUseBlendSpace;                                           // 0x0039(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x003A(0x0006) MISSED OFFSET
};

// ScriptStruct RsGameTechRT.RsCharacterAnimationData
// 0x0008 (0x0048 - 0x0040)
USTRUCT(BlueprintType)
struct FRsCharacterAnimationData : public FRsCharacterAnimDataBase
{
	GENERATED_BODY()
public:
	class UAnimationAsset*                             AnimAsset;                                                // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct RsGameTechRT.RsSyncDataOverride
// 0x0060
USTRUCT(BlueprintType)
struct FRsSyncDataOverride
{
	GENERATED_BODY()
public:
	UAnimationAsset*                             Animation;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	FName                                       SocketName;                                               // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BreakOnMontageBlendingOut;                                // 0x0010(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ContinueAnimationAfterSync;                               // 0x0011(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0012(0x0006) MISSED OFFSET
	FRsCharacterAnimationData                   DeathAnimationData;                                       // 0x0018(0x0048) (Edit, DisableEditOnInstance)
};

// ScriptStruct RsGameTechRT.RsSyncData
// 0x0100
USTRUCT(BlueprintType)
struct FRsSyncData
{
	GENERATED_BODY()
public:
	bool                                               bDontUseAsFallback;                                       // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseHeroOffGroundFallback;                                // 0x0001(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	UAnimationAsset*                             Animation;                                                // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BreakOnMontageBlendingOut;                                // 0x0010(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ContinueAnimationAfterSync;                               // 0x0011(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0012(0x0006) MISSED OFFSET
	FRsCharacterAnimationData                   DeathAnimationData;                                       // 0x0018(0x0048) (Edit, DisableEditOnInstance)
	FName                                       SocketName;                                               // 0x0060(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	FName                                       ComponentName;                                            // 0x0068(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	FTransform                                  OffsetTransform;                                          // 0x0070(0x0030) (Edit, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ERsCombatState>                        PutInState;                                               // 0x00A0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x00A1(0x0007) MISSED OFFSET
	TMap<FName, FRsSyncDataOverride>     CharacterToSyncDataMappingNative;                         // 0x00A8(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData03[0x8];                                       // 0x00F8(0x0008) MISSED OFFSET
};

// ScriptStruct RsGameTechRT.RsMasterSyncData
// 0x0000 (0x0100 - 0x0100)
USTRUCT(BlueprintType)
struct FRsMasterSyncData : public FRsSyncData
{
	GENERATED_BODY()
public:
	bool                                               IsMoving;                                                 // 0x00F8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00F9(0x0007) MISSED OFFSET
};

USTRUCT(BlueprintType)
struct FRsInfluence
{
	GENERATED_BODY()
public:
	FTransform                                  Transform;                                                // 0x0000(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	FVector                                     LinearOverride;                                           // 0x0030(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	FVector                                     LinearAdditive;                                           // 0x003C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ERsInfluenceLinearType                             LinearType;                                               // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
	float                                              LinearDuration;                                           // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ERsInfluenceAngularType                            AngularType;                                              // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0051(0x0003) MISSED OFFSET
	float                                              AngularDuration;                                          // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ERsBase                                            base;                                                     // 0x0058(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               StripLinearIdentity;                                      // 0x0059(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               StripAngularIdentity;                                     // 0x005A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x5];                                       // 0x005B(0x0005) MISSED OFFSET
};