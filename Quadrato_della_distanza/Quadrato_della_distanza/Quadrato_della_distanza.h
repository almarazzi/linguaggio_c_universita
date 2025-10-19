#pragma once
struct quadrato
{
	double x = 0;
	double y = 0;
};

inline double Qaudrato_Della_distanza(quadrato q1,quadrato q2) {
	double dx = q1.x-q2.x;
	dx = dx * dx;
	double dy = q1.y-q2.y;
	dy = dy * dy;
	return dx + dy;
}
