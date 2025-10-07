#pragma once

inline void Select_Sort(int* a,int n)
{
	for (int i = 0; i<n-1; i++)
	{
		for (int j = 0;j< n-1; j++)
		{
			if (a[j+1] < a[j])
			{
				int t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
		
	}
}