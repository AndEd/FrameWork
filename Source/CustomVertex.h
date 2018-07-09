#pragma once

#include "stdafx.h"

struct CUSTOMVERTEX {
	float x, y, z;
	DWORD color;
	float uv, ux;
	
	void SetVtx(float _x, float _y, float _z) {
		x = _x;
		y = _y;
		z = _z;
	}
	
	void SetColor(int r, int g, int b, int a) {
		color = a << 24 | r << 16 | b << 8 | b;
	}
	
	void SetUV(float _uv, float _ux) {
		uv = _uv;
		ux = _ux;
	}
}
