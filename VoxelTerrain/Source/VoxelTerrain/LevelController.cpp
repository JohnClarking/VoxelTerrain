// Fill out your copyright notice in the Description page of Project Settings.

#include "VoxelTerrain.h"
#include "LevelController.h"



TSubclassOf<ASandboxObject> ALevelController::GetSandboxObjectByClassId(int32 ClassId) {

	if (ObjectMap->ObjectMap.Contains(ClassId)) {
		return ObjectMap->ObjectMap[ClassId];
	}

	return nullptr;
}
