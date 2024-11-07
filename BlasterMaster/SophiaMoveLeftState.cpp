#include "SophiaMoveLeftState.h"

void CSophiaMoveLeftState::Update(DWORD dt)
{
}

void CSophiaMoveLeftState::Render()
{
	auto anim_left_wheel = owner->leftWheel->GetAnimations().at(ANIM_LEFT_WHEEL);
	auto anim_right_wheel = owner->rightWheel->GetAnimations().at(ANIM_RIGHT_WHEEL);

	anim_left_wheel->SetIsPaused(false);
	anim_left_wheel->SetIsReversed(false);
	anim_right_wheel->SetIsPaused(false);
	anim_right_wheel->SetIsReversed(false);
}
