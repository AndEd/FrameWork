#pragma once
#include "stdafx.h"

class DirectX : public SingleInstance<DirectX> {
public:
	DirectX();
	virtual ~DirectX();
}
