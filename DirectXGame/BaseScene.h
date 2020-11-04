#pragma once
#include"DirectXCommon.h"
#include"input.h"
#include "Audio.h"
class BaseScene
{
public:

	//virtual void Initialize() = 0;
	//更新処理
	virtual void Update() = 0;
	//描画処理
	virtual void Draw() = 0;
	virtual void Initialize(DirectXCommon* dxCommon, Input* input, Audio* audio) = 0;
private:

};