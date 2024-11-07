#include "HoverItem.h"

void CHoverItem::InitSprites()
{
	auto sprites = CGame::GetInstance()->GetService<CSprites>();
	AddSprite("hover-item", sprites->Get("spr-hover-item"));
}

CHoverItem::CHoverItem()
{
	InitSprites();

	dropRate = 50;
	colliders.at(0)->SetBoxSize(DEFAULT_SIZE);
}

void CHoverItem::GetEffect(CPlayable* picker)
{
	DebugOut(L"Player picked a hover item up!!!\n");
}

void CHoverItem::Render()
{
	sprites.at("hover-item")->Draw(transform.position, 1, layer_index, 0, D3DCOLOR_ARGB(alpha, 255, 255, 255));
}
