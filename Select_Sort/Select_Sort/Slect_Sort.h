#pragma once

inline void Select_Sort(int* a,int* fine)
{
	for (int* i = a; i < fine-1; i++)
	{
		for (int* j = a; j < fine-1; j++)
		{
			if (*(j+1)<*j)
			{
				int t = *j;
				*j = *(j + 1);
				*(j + 1) = t;
			}
		}
	}

}

/*if ((a+j) < a[j])
{
	int t = a[j];
	a[j] = a[j + 1];
	a[j + 1] = t;
}*/