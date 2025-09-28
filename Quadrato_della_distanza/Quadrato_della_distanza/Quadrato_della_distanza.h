#pragma once

inline double Qaudrato_Della_distanza(double x1, double y1, double x2, double y2) {
	double dx = x1-x2;
	dx = dx * dx;
	double dy = y1-y2;
	dy = dy * dy;
	return dx + dy;
}
