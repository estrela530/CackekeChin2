﻿#pragma once

#include "SafeDelete.h"
#include "DirectXCommon.h"
#include <DirectXMath.h>
#include "Input.h"
#include "Sprite.h"
#include "Object3d.h"
#include "Object3d2.h"
#include "DebugText.h"
#include "Audio.h"
<<<<<<< HEAD
#include "Ball.h"
=======
#include "BaseScene.h"
>>>>>>> origin/SHURERE

/// <summary>
/// ゲームシーン
/// </summary>
class GameScene:public BaseScene///ベースシーン
{
private: // エイリアス
	// Microsoft::WRL::を省略
	template <class T> using ComPtr = Microsoft::WRL::ComPtr<T>;
	// DirectX::を省略
	using XMFLOAT2 = DirectX::XMFLOAT2;
	using XMFLOAT3 = DirectX::XMFLOAT3;
	using XMFLOAT4 = DirectX::XMFLOAT4;
	using XMMATRIX = DirectX::XMMATRIX;


private: // 静的メンバ変数
	static const int debugTextTexNumber = 0;
#pragma region// メンバ関数

public: 

	/// <summary>
	/// コンストクラタ
	/// </summary>
	GameScene();

	/// <summary>
	/// デストラクタ
	/// </summary>
	~GameScene();

	/// <summary>
	/// 初期化
	/// </summary>
	virtual void Initialize(DirectXCommon* dxCommon, Input* input, Audio* audio) override;

	/// <summary>
	/// 初期化
	/// </summary>
//	void Initialize();
	/// <summary>
	/// 毎フレーム処理
	/// </summary>
	virtual void Update() override;

	/// <summary>
	/// 描画
	/// </summary>
	virtual void Draw() override;

#pragma endregion 
private: // メンバ変数
	DirectXCommon* dxCommon = nullptr;
	Input* input = nullptr;
	Audio* audio = nullptr;
	DebugText debugText;	

	/// <summary>
	/// ゲームシーン用
	/// </summary>
	Sprite* spriteBG = nullptr;
	Object3d* object3d = nullptr;
	Ball* ball = nullptr;
	Object3d2* object3d2 = nullptr;
};

