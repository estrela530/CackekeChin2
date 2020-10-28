#pragma once
class BaseScene
{
public:
	//更新処理
	virtual void Update() = 0;
	//描画処理
	virtual void Draw() = 0;
private:
};