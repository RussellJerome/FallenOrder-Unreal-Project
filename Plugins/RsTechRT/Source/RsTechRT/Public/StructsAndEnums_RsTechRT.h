// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimationAsset.h"
#include "StructsAndEnums_RsTechRT.generated.h"

//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum RsTechRT.ERsActorBase
UENUM(BlueprintType) enum ERsActorBase
{
	USE_TOPOLOGY = 0,
	USE_BUMPER = 1,
	USE_MAX = 2
};


// Enum RsTechRT.ERsTopologyMode
UENUM(BlueprintType) enum ERsTopologyMode
{
	TOPOLOGY_UNSET = 0,
	TOPOLOGY_UNBOUND = 1,
	TOPOLOGY_PROXIMITY = 2,
	TOPOLOGY_CORRECTED = 3,
	TOPOLOGY_VIOLATION = 4,
	COUNT = 5,
	UNDEFINED_ERsTopologyMode = 6,
	ERsTopologyMode_MAX = 7
};


// Enum RsTechRT.ERsJointTool
UENUM(BlueprintType) enum ERsJointTool
{
	BM_ToJointSpace = 0,
	BM_ProjectJoint = 1,
	BM_MAX_ERsJointTool = 2
};


// Enum RsTechRT.ERsActorMotionBoneConstraintOrientationType
UENUM(BlueprintType) enum ERsActorMotionBoneConstraintOrientationType
{
	AMBCOT_FREE_ORIENTATION = 0,
	AMBCOT_LOCKED_ORIENATION = 1,
	AMBCOT_MAX = 2
};


// Enum RsTechRT.ERsActorMotionBoneConstraintPositionType
UENUM(BlueprintType) enum ERsActorMotionBoneConstraintPositionType
{
	AMBCPT_POINT = 0,
	AMBCPT_AXIS = 1,
	AMBCPT_PLANE = 2,
	AMBCPT_MAX = 3
};


// Enum RsTechRT.ERsMotionAimDirectionMode
UENUM(BlueprintType) enum ERsMotionAimDirectionMode
{
	UseTweak = 0,
	FollowIntentDirection = 1,
	UserAiming = 2,
	ERsMotionAimDirectionMode_MAX = 3
};


// Enum RsTechRT.ERsBlendMode
UENUM(BlueprintType) enum ERsBlendMode
{
	BM_Linear = 0,
	BM_Square = 1,
	BM_SquareRoot = 2,
	BM_Sine = 3,
	BM_MAX_ERsBlendMode = 4
};


// Enum RsTechRT.ERsCollisionShapeType
UENUM(BlueprintType) enum ERsCollisionShapeType
{
	RCST_INVALID = 0,
	RCST_SPHERE = 1,
	RCST_CAPSULE = 2,
	RCST_BOX = 3,
	RCST_CONVEX = 4,
	RCST_MAX = 5
};


// Enum RsTechRT.ERsTOIState
UENUM(BlueprintType) enum ERsTOIState
{
	TOIS_NOT_STARTED = 0,
	TOIS_GJK = 1,
	TOIS_INITIALIZE_AXIS = 2,
	TOIS_FIND_DEEPEST_POINTS = 3,
	TOIS_CALCULATE_SEPARATION = 4,
	TOIS_SOLVING_ROOT = 5,
	TOIS_FINISHED = 6,
	TOIS_MAX = 7
};


// Enum RsTechRT.ERsDynamicTextureFormat
UENUM(BlueprintType) enum ERsDynamicTextureFormat
{
	RsDTF_R = 0,
	RsDTF_RGB = 1,
	RsDTF_RGBA = 2,
	RsDTF_MAX = 3
};


// Enum RsTechRT.ERsSurveyResult
UENUM(BlueprintType) enum ERsSurveyResult
{
	SURVEY_VOID = 0,
	SURVEY_SURFACE = 1,
	SURVEY_MAX = 2
};


// Enum RsTechRT.ERsInfluenceAngularType
UENUM(BlueprintType) enum ERsInfluenceAngularType
{
	NONE = 0,
	ANGLE = 1,
	ERsInfluenceAngularType_MAX = 2
};


// Enum RsTechRT.ERsInfluenceLinearType
UENUM(BlueprintType) enum ERsInfluenceLinearType
{
	NONE_ERsInfluenceLinearType = 0,
	POSITION = 1,
	VELOCITY = 2,
	ACCELERATION = 3,
	POSITION_TIME_REMAP = 4,
	ERsInfluenceLinearType_MAX = 5
};


// Enum RsTechRT.ERsMotionSample
UENUM(BlueprintType) enum ERsMotionSample
{
	Time = 0,
	AngularVelocityPitch = 1,
	AngularVelocityRoll = 2,
	AngularVelocityYaw = 3,
	LeanAngle = 4,
	ControllerInflexion = 5,
	RawControllerInputAngle = 6,
	RelativeMotionYaw = 7,
	RelativeMotionPitch = 8,
	RelativeMotionRoll = 9,
	Speed = 10,
	HorizontalSpeed = 11,
	LocalSpeedX = 12,
	LocalSpeedY = 13,
	LocalSpeedZ = 14,
	LocalMotionDirectionPitch = 15,
	LocalMotionDirectionYaw = 16,
	SlopeAngle = 17,
	HeadingSlopeAngle = 18,
	WorldOrientationPitch = 19,
	WorldOrientationRoll = 20,
	WorldOrientationYaw = 21,
	LocalControllerDirectionYaw = 22,
	ControllerIntent = 23,
	LocalUndampedControllerDirectionYaw = 24,
	UndampedControllerIntent = 25,
	DistanceToGround = 26,
	TimeToGround = 27,
	TimeToGroundLoss = 28,
	RelativeGroundDirection = 29,
	DistanceToWall = 30,
	TimeToWall = 31,
	TimeToWallLoss = 32,
	RelativeWallDirection = 33,
	SimRef_RelativeSpeed = 34,
	SimRef_RelativeHorizontalSpeed = 35,
	SimRef_RelativeSpeedX = 36,
	SimRef_RelativeSpeedY = 37,
	SimRef_RelativeSpeedZ = 38,
	SimRef_RelativeMotionDirectionPitch = 39,
	SimRef_RelativeMotionDirectionYaw = 40,
	SimRef_SlopeAngle = 41,
	SimRef_HeadingSlopeAngle = 42,
	SimRef_RelativeOrientationPitch = 43,
	SimRef_RelativeOrientationRoll = 44,
	SimRef_RelativeOrientationYaw = 45,
	SimRef_RelativeControllerDirectionYaw = 46,
	SimRef_ControllerIntent = 47,
	SimRef_RelativeUndampedControllerDirectionYaw = 48,
	SimRef_UndampedControllerIntent = 49,
	SimRef_DistanceToGround = 50,
	SimRef_TimeToGround = 51,
	SimRef_TimeToGroundLoss = 52,
	SimRef_RelativeGroundDirection = 53,
	SimRef_DistanceToWall = 54,
	SimRef_TimeToWall = 55,
	SimRef_TimeToWallLoss = 56,
	SimRef_RelativeWallDirection = 57,
	SimM_0_125_Speed = 58,
	SimM_0_125_HorizontalSpeed = 59,
	SimM_0_125_RelativeSpeedX = 60,
	SimM_0_125_RelativeSpeedY = 61,
	SimM_0_125_RelativeSpeedZ = 62,
	SimM_0_125_RelativeMotionDirectionPitch = 63,
	SimM_0_125_RelativeMotionDirectionYaw = 64,
	SimM_0_125_SlopeAngle = 65,
	SimM_0_125_HeadingSlopeAngle = 66,
	SimM_0_125_RelativeOrientationPitch = 67,
	SimM_0_125_RelativeOrientationRoll = 68,
	SimM_0_125_RelativeOrientationYaw = 69,
	SimM_0_125_RelativeControllerDirectionYaw = 70,
	SimM_0_125_ControllerIntent = 71,
	SimM_0_125_RelativeUndampedControllerDirectionYaw = 72,
	SimM_0_125_UndampedControllerIntent = 73,
	SimM_0_125_DistanceToGround = 74,
	SimM_0_125_TimeToGround = 75,
	SimM_0_125_TimeToGroundLoss = 76,
	SimM_0_125_RelativeGroundDirection = 77,
	SimM_0_125_DistanceToWall = 78,
	SimM_0_125_TimeToWall = 79,
	SimM_0_125_TimeToWallLoss = 80,
	SimM_0_125_RelativeWallDirection = 81,
	SimM_0_25_Speed = 82,
	SimM_0_25_HorizontalSpeed = 83,
	SimM_0_25_RelativeSpeedX = 84,
	SimM_0_25_RelativeSpeedY = 85,
	SimM_0_25_RelativeSpeedZ = 86,
	SimM_0_25_RelativeMotionDirectionPitch = 87,
	SimM_0_25_RelativeMotionDirectionYaw = 88,
	SimM_0_25_SlopeAngle = 89,
	SimM_0_25_HeadingSlopeAngle = 90,
	SimM_0_25_RelativeOrientationPitch = 91,
	SimM_0_25_RelativeOrientationRoll = 92,
	SimM_0_25_RelativeOrientationYaw = 93,
	SimM_0_25_RelativeControllerDirectionYaw = 94,
	SimM_0_25_ControllerIntent = 95,
	SimM_0_25_RelativeUndampedControllerDirectionYaw = 96,
	SimM_0_25_UndampedControllerIntent = 97,
	SimM_0_25_DistanceToGround = 98,
	SimM_0_25_TimeToGround = 99,
	SimM_0_25_TimeToGroundLoss = 100,
	SimM_0_25_RelativeGroundDirection = 101,
	SimM_0_25_DistanceToWall = 102,
	SimM_0_25_TimeToWall = 103,
	SimM_0_25_TimeToWallLoss = 104,
	SimM_0_25_RelativeWallDirection = 105,
	SimM_0_5_Speed = 106,
	SimM_0_5_HorizontalSpeed = 107,
	SimM_0_5_RelativeSpeedX = 108,
	SimM_0_5_RelativeSpeedY = 109,
	SimM_0_5_RelativeSpeedZ = 110,
	SimM_0_5_RelativeMotionDirectionPitch = 111,
	SimM_0_5_RelativeMotionDirectionYaw = 112,
	SimM_0_5_SlopeAngle = 113,
	SimM_0_5_HeadingSlopeAngle = 114,
	SimM_0_5_RelativeOrientationPitch = 115,
	SimM_0_5_RelativeOrientationRoll = 116,
	SimM_0_5_RelativeOrientationYaw = 117,
	SimM_0_5_RelativeControllerDirectionYaw = 118,
	SimM_0_5_ControllerIntent = 119,
	SimM_0_5_RelativeUndampedControllerDirectionYaw = 120,
	SimM_0_5_UndampedControllerIntent = 121,
	SimM_0_5_DistanceToGround = 122,
	SimM_0_5_TimeToGround = 123,
	SimM_0_5_TimeToGroundLoss = 124,
	SimM_0_5_RelativeGroundDirection = 125,
	SimM_0_5_DistanceToWall = 126,
	SimM_0_5_TimeToWall = 127,
	SimM_0_5_TimeToWallLoss = 128,
	SimM_0_5_RelativeWallDirection = 129,
	SimM_1_0_Speed = 130,
	SimM_1_0_HorizontalSpeed = 131,
	SimM_1_0_RelativeSpeedX = 132,
	SimM_1_0_RelativeSpeedY = 133,
	SimM_1_0_RelativeSpeedZ = 134,
	SimM_1_0_RelativeMotionDirectionPitch = 135,
	SimM_1_0_RelativeMotionDirectionYaw = 136,
	SimM_1_0_SlopeAngle = 137,
	SimM_1_0_HeadingSlopeAngle = 138,
	SimM_1_0_RelativeOrientationPitch = 139,
	SimM_1_0_RelativeOrientationRoll = 140,
	SimM_1_0_RelativeOrientationYaw = 141,
	SimM_1_0_RelativeControllerDirectionYaw = 142,
	SimM_1_0_ControllerIntent = 143,
	SimM_1_0_RelativeUndampedControllerDirectionYaw = 144,
	SimM_1_0_UndampedControllerIntent = 145,
	SimM_1_0_DistanceToGround = 146,
	SimM_1_0_TimeToGround = 147,
	SimM_1_0_TimeToGroundLoss = 148,
	SimM_1_0_RelativeGroundDirection = 149,
	SimM_1_0_DistanceToWall = 150,
	SimM_1_0_TimeToWall = 151,
	SimM_1_0_TimeToWallLoss = 152,
	SimM_1_0_RelativeWallDirection = 153,
	Ex_0_125_Speed = 154,
	Ex_0_125_HorizontalSpeed = 155,
	Ex_0_125_RelativeSpeedX = 156,
	Ex_0_125_RelativeSpeedY = 157,
	Ex_0_125_RelativeSpeedZ = 158,
	Ex_0_125_RelativeMotionDirectionPitch = 159,
	Ex_0_125_RelativeMotionDirectionYaw = 160,
	Ex_0_125_SlopeAngle = 161,
	Ex_0_125_HeadingSlopeAngle = 162,
	Ex_0_125_RelativeOrientationPitch = 163,
	Ex_0_125_RelativeOrientationRoll = 164,
	Ex_0_125_RelativeOrientationYaw = 165,
	Ex_0_125_RelativeControllerDirectionYaw = 166,
	Ex_0_125_ControllerIntent = 167,
	Ex_0_125_RelativeUndampedControllerDirectionYaw = 168,
	Ex_0_125_UndampedControllerIntent = 169,
	Ex_0_125_DistanceToGround = 170,
	Ex_0_125_TimeToGround = 171,
	Ex_0_125_TimeToGroundLoss = 172,
	Ex_0_125_RelativeGroundDirection = 173,
	Ex_0_125_DistanceToWall = 174,
	Ex_0_125_TimeToWall = 175,
	Ex_0_125_TimeToWallLoss = 176,
	Ex_0_125_RelativeWallDirection = 177,
	Ex_0_25_Speed = 178,
	Ex_0_25_HorizontalSpeed = 179,
	Ex_0_25_RelativeSpeedX = 180,
	Ex_0_25_RelativeSpeedY = 181,
	Ex_0_25_RelativeSpeedZ = 182,
	Ex_0_25_RelativeMotionDirectionPitch = 183,
	Ex_0_25_RelativeMotionDirectionYaw = 184,
	Ex_0_25_SlopeAngle = 185,
	Ex_0_25_HeadingSlopeAngle = 186,
	Ex_0_25_RelativeOrientationPitch = 187,
	Ex_0_25_RelativeOrientationRoll = 188,
	Ex_0_25_RelativeOrientationYaw = 189,
	Ex_0_25_RelativeControllerDirectionYaw = 190,
	Ex_0_25_ControllerIntent = 191,
	Ex_0_25_RelativeUndampedControllerDirectionYaw = 192,
	Ex_0_25_UndampedControllerIntent = 193,
	Ex_0_25_DistanceToGround = 194,
	Ex_0_25_TimeToGround = 195,
	Ex_0_25_TimeToGroundLoss = 196,
	Ex_0_25_RelativeGroundDirection = 197,
	Ex_0_25_DistanceToWall = 198,
	Ex_0_25_TimeToWall = 199,
	Ex_0_25_TimeToWallLoss = 200,
	Ex_0_25_RelativeWallDirection = 201,
	Ex_0_5_Speed = 202,
	Ex_0_5_HorizontalSpeed = 203,
	Ex_0_5_RelativeSpeedX = 204,
	Ex_0_5_RelativeSpeedY = 205,
	Ex_0_5_RelativeSpeedZ = 206,
	Ex_0_5_RelativeMotionDirectionPitch = 207,
	Ex_0_5_RelativeMotionDirectionYaw = 208,
	Ex_0_5_SlopeAngle = 209,
	Ex_0_5_HeadingSlopeAngle = 210,
	Ex_0_5_RelativeOrientationPitch = 211,
	Ex_0_5_RelativeOrientationRoll = 212,
	Ex_0_5_RelativeOrientationYaw = 213,
	Ex_0_5_RelativeControllerDirectionYaw = 214,
	Ex_0_5_ControllerIntent = 215,
	Ex_0_5_RelativeUndampedControllerDirectionYaw = 216,
	Ex_0_5_UndampedControllerIntent = 217,
	Ex_0_5_DistanceToGround = 218,
	Ex_0_5_TimeToGround = 219,
	Ex_0_5_TimeToGroundLoss = 220,
	Ex_0_5_RelativeGroundDirection = 221,
	Ex_0_5_DistanceToWall = 222,
	Ex_0_5_TimeToWall = 223,
	Ex_0_5_TimeToWallLoss = 224,
	Ex_0_5_RelativeWallDirection = 225,
	Ex_1_0_Speed = 226,
	Ex_1_0_HorizontalSpeed = 227,
	Ex_1_0_RelativeSpeedX = 228,
	Ex_1_0_RelativeSpeedY = 229,
	Ex_1_0_RelativeSpeedZ = 230,
	Ex_1_0_RelativeMotionDirectionPitch = 231,
	Ex_1_0_RelativeMotionDirectionYaw = 232,
	Ex_1_0_SlopeAngle = 233,
	Ex_1_0_HeadingSlopeAngle = 234,
	Ex_1_0_RelativeOrientationPitch = 235,
	Ex_1_0_RelativeOrientationRoll = 236,
	Ex_1_0_RelativeOrientationYaw = 237,
	Ex_1_0_RelativeControllerDirectionYaw = 238,
	Ex_1_0_ControllerIntent = 239,
	Ex_1_0_RelativeUndampedControllerDirectionYaw = 240,
	Ex_1_0_UndampedControllerIntent = 241,
	Ex_1_0_DistanceToGround = 242,
	Ex_1_0_TimeToGround = 243,
	Ex_1_0_TimeToGroundLoss = 244,
	Ex_1_0_RelativeGroundDirection = 245,
	Ex_1_0_DistanceToWall = 246,
	Ex_1_0_TimeToWall = 247,
	Ex_1_0_TimeToWallLoss = 248,
	Ex_1_0_RelativeWallDirection = 249,
	TargetLateralDistance = 250,
	TargetLongitudinalDistance = 251,
	TargetVerticalDistance = 252,
	TargetLateralVelocity = 253,
	TargetLongitudinalVelocity = 254,
	TargetVerticalVelocity = 255,
	TargetHorizontalAngle = 256,
	ConstrainedMotionAngle = 257,
	ConstrainedMotionSpeed = 258,
	ConstrainedMotionDistance = 259,
	ERsMotionSample_MAX = 260
};


// Enum RsTechRT.ERsDeferredInfluenceType
UENUM(BlueprintType) enum ERsDeferredInfluenceType
{
	DEFERRED_MOTION = 0,
	DEFERRED_ANIMATION = 1,
	DEFERRED_IMPULSE = 2,
	Count_ERsDeferredInfluenceType = 3,
	ERsDeferredInfluenceType_MAX = 4
};


// Enum RsTechRT.ERsFootType
UENUM(BlueprintType) enum ERsFootType
{
	LeftFoot_ERsFootType = 0,
	RightFoot_ERsFootType = 1,
	BackLeftFoot_ERsFootType = 2,
	BackRightFoot_ERsFootType = 3,
	Count_ERsFootType = 4,
	None_ERsFootType = 5,
	ERsFootType_MAX = 6
};


// Enum RsTechRT.ERsCurve
UENUM(BlueprintType) enum ERsCurve
{
	LINEAR = 0,
	SQUARE = 1,
	SQUAREROOT = 2,
	SINE = 3,
	INVERSE = 4,
	M1_LINEAR = 5,
	M1_SQUARE = 6,
	M1_SQUAREROOT = 7,
	M1_SINE = 8,
	COUNT_ERsCurve = 9,
	ERsCurve_MAX = 10
};


// Enum RsTechRT.ERsShape
UENUM(BlueprintType) enum ERsShape
{
	POINT = 0,
	PLANAR = 1,
	COUNT_ERsShape = 2,
	UNDEFINED_ERsShape = 3,
	ERsShape_MAX = 4
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