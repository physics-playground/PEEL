///////////////////////////////////////////////////////////////////////////////
/*
 *	PEEL - Physics Engine Evaluation Lab
 *	Copyright (C) 2012 Pierre Terdiman
 *	Homepage: http://www.codercorner.com/blog.htm
 */
///////////////////////////////////////////////////////////////////////////////

#pragma once

#include "PINT_Common/PINT_Ice.h"

ICE_DIAG_CLANG_OFF("microsoft-include")
ICE_DIAG_CLANG_OFF("gnu-folding-constant")

#include "PxPhysicsAPI.h"
#include "PsFoundation.h"
#include "PsUtilities.h"

#include <vector>
#include <cstdio>

using namespace physx;

// General
#define PHYSX_SUPPORT_SCRATCH_BUFFER						1
#define PHYSX_SUPPORT_CONTACT_NOTIFICATIONS					1
#define PHYSX_SUPPORT_CONTACT_MODIFICATIONS					1
#define PHYSX_SUPPORT_PX_BROADPHASE_TYPE					1
#define PHYSX_SUPPORT_PX_BROADPHASE_ABP						1
// Actors/Rigid bodies
#define PHYSX_SUPPORT_MAX_DEPEN_VELOCITY					1
#define PHYSX_SUPPORT_TGS									1
#define PHYSX_SUPPORT_SUBSTEPS								1
#define PHYSX_SUPPORT_IMPROVED_PATCH_FRICTION				1
#define	PHYSX_SUPPORT_FRICTION_EVERY_ITERATION				1
#define PHYSX_SUPPORT_STABILIZATION_FLAG					1
#define	PHYSX_SUPPORT_KINE_FILTERING_MODE					1
#define	PHYSX_SUPPORT_GYROSCOPIC_FORCES						0
// Shapes
#define PHYSX_SUPPORT_SHARED_SHAPES							1
#define PHYSX_DEPRECATED_CREATE_SHAPE						1
#define PHYSX_SUPPORT_TORSION_FRICTION						1
#define PHYSX_SUPPORT_RIGIDACTOREX_CREATE_EXCLUSIVE_SHAPE	1
#define PHYSX_SUPPORT_CUSTOM_GEOMETRY						0
#define PHYSX_SUPPORT_HEIGHTFIELDS							1
#define PHYSX_SUPPORT_HEIGHTFIELD_THICKNESS					0
// Articulations
#define PHYSX_SUPPORT_ARTICULATIONS							1
#define	PHYSX_SUPPORT_DAMPING_ON_ARTICULATION_LINKS			1
#define PHYSX_SUPPORT_RCA									1
#define PHYSX_SUPPORT_RCA_CFM_SCALE							0
#define PHYSX_SUPPORT_RCA_DOF_SCALE							0
#define PHYSX_SUPPORT_RCA_ARMATURE							0
// Convexes
#define PHYSX_SUPPORT_USER_DEFINED_GAUSSMAP_LIMIT			1
#define PHYSX_SUPPORT_TIGHT_CONVEX_BOUNDS					1
// Meshes
#define PHYSX_SUPPORT_DEFORMABLE_MESHES						1
#define PHYSX_SUPPORT_MESH_16BIT_INDICES					PxTriangleMeshFlag::e16_BIT_INDICES
// Cooking
#define PHYSX_SUPPORT_INSERTION_CALLBACK					1
#define PHYSX_SUPPORT_PX_MESH_MIDPHASE						1
#define PHYSX_SUPPORT_PX_MESH_MIDPHASE2						1
#define PHYSX_SUPPORT_PX_MESH_COOKING_HINT					1
#define PHYSX_SUPPORT_QUANTIZED_TREE_OPTION					0
#define PHYSX_SUPPORT_DISABLE_ACTIVE_EDGES_PRECOMPUTE		1
#define	PHYSX_SUPPORT_PX_MESH_BUILD_STRATEGY				0
// Vehicles
#define PHYSX_SUPPORT_VEHICLE_SUSPENSION_SWEEPS				1
#define PHYSX_SUPPORT_VEHICLE_SWEEP_INFLATION				1
#define PHYSX_SUPPORT_ANTIROLLBAR							1
#define PHYSX_SUPPORT_LIMIT_SUSPENSION_EXPANSION_VELOCITY	1
#define PHYSX_SUPPORT_NEW_VEHICLE_SUSPENSION_FLAGS			1
#define PHYSX_SUPPORT_STEER_FILTER							0
#define PHYSX_SUPPORT_VEHICLE5								0
// Joints
#define PHYSX_REMOVE_JOINT_32_COMPATIBILITY					1
#define PHYSX_SUPPORT_EXTENDED_LIMITS						1
#define PHYSX_SUPPORT_DISABLE_PREPROCESSING					1
#define PHYSX_SUPPORT_PORTAL_JOINT							1
#define PHYSX_SUPPORT_GEAR_JOINT							1
#define PHYSX_SUPPORT_RACK_JOINT							1
#define PHYSX_SUPPORT_CHAIN_JOINT							0
#define PHYSX_SUPPORT_NEW_JOINT_TYPES						0
// Scene queries
#define PHYSX_SUPPORT_SQ_UPDATE_MODE						1
#define PHYSX_DEPRECATED_DISTANCE							1
#define PHYSX_SUPPORT_BVH_STRUCTURE							1
#define PHYSX_SUPPORT_SIMD_GUARD_FLAG						0
// CCD
#define PHYSX_SUPPORT_RAYCAST_CCD							1
#define PHYSX_SUPPORT_RAYCAST_CCD_UNREGISTER				0
#define PHYSX_SUPPORT_ANGULAR_CCD							1
// Fluids
#define	PHYSX_SUPPORT_FLUIDS								0

#ifdef PHYSX_SUPPORT_GPU
#	define BUILD_GPU_DATA				buildGPUData
#else
#	define BUILD_GPU_DATA
#endif

#define PHYSX_NUM_PRIMS_PER_LEAF		numPrimsPerLeaf

//#define PHYSX_SUPPORT_LINEAR_COEFF
#define NEW_D6_API
//#define PHYSX_SUPPORT_CHARACTERS
#define PHYSX_SUPPORT_CHARACTERS2
#define PHYSX_REMOVED_CLIENT_ID

#define PHYSX_SUPPORT_GEAR_JOINT_OLD	1
#define PHYSX_SUPPORT_RACK_JOINT_OLD	1

//#define USE_RAYCASTS_API

#define PxHashMap	physx::shdfnd::HashMap
#define PxIdtQuat	PxQuat(PxIdentity)

typedef PxBVHStructure		PxBVH;
typedef PxBVHStructureDesc	PxBVHDesc;
#define createBVH			createBVHStructure

#include "../PINT_Common/PINT_CommonPhysX3_Deprecated.h"
